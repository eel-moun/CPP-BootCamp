#include "BitcoinExchange.hpp"

int check_data(std::string data){
    std::string my_date;
    std::string num;

    if (data.find(" | ") == std::string::npos)
    {
        std::cout << "Error: bad input => " << data << std::endl;
        return (1);
    }
    my_date = data.substr(0, data.find(" | "));
    num = my_date.substr(0, my_date.find("-"));
    if (num.size() == 0 || num.find_first_not_of("0123456789") != std::string::npos)
    {
        std::cout << "Error: bad input => " << data << std::endl;
        return (1);
    }
    my_date.erase(0, my_date.find("-") + 1);
    num = my_date.substr(0, my_date.find("-"));
    if (num.size() != 2 || num.find_first_not_of("0123456789") != std::string::npos)
    {
        std::cout << "Error: bad input => " << data << std::endl;
        return (1);
    }else if (stoi(num) > 12)
    {
        std::cout << "Error: bad input => " << data << std::endl;
        return (1);
    }
    my_date.erase(0, my_date.find("-") + 1);
    num = my_date;
    if (num.size() == 0 || num.find_first_not_of("0123456789") != std::string::npos)
    {
        std::cout << "Error: bad input => " << data << std::endl;
        return (1);
    }else if (stoi(num) > 31)
    {
        std::cout << "Error: bad input => " << data << std::endl;
        return (1);
    }
    my_date.clear();
    my_date = data.substr(data.find(" | ") + 3);
    if (my_date.find_first_not_of("-0123456789.") != std::string::npos)
    {
        std::cout << "Error: bad input => " << data << std::endl;
        return (1);
    }
    else if (strtof(my_date.c_str(), NULL) < 0)
    {
        std::cout << "Error: not a positive number." << std::endl;
        return (1);
    }
    else if (strtof(my_date.c_str(), NULL) > 1000)
    {
        std::cout << "Error: too large a number." << std::endl;
        return (1);
    }

    return(0);
}

float get_rate(std::string date, std::map<std::string, float> data){
    for(std::map<std::string, float>::iterator it = data.begin(); it != data.end(); it++)
    {
        if(it->first == date)
            return(it->second);
        else if(it->first > date)
        {
            if(it == data.begin())
                return(0);
            it--;
            return (it->second);
        }
    }
    return (0);
}

int main(int ac, char **av){
    std::ifstream db_file;
    std::string line;
    BitcoinExchange btc;

    if (ac != 2)
        return (1);

    db_file.open("./data.csv");

    if (!db_file)
        return (1);

    while (std::getline(db_file, line))
    {
        if (line.find("date") != std::string::npos)
            continue;
        btc.set_db(line.substr(0,line.find(",")), strtof(line.substr(line.find(",") + 1).c_str(), NULL));
        line.clear();
    }
    
    db_file.close();
    db_file.open(av[1]);
    
    if (!db_file)
        return(1);
    
    while (std::getline(db_file, line))
    {
        if (line.find("date") != std::string::npos)
        {
            line.clear();
            continue;
        }
        else if (check_data(line))
        {
            line.clear();
            continue;
        }
        std::cout << line.substr(0, line.find(" | ")) << " => " << line.substr(line.find(" | ") + 3) << " = " << get_rate(line.substr(0, line.find(" | ")), btc.get_db()) * strtof(line.substr(line.find(" | ") + 3).c_str(), NULL) << std::endl;
        line.clear();
    }

    return (0);
}