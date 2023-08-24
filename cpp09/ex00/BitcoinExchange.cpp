#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){
    std::cout << "Default constructor called" << std::endl;
}

BitcoinExchange::BitcoinExchange(BitcoinExchange& btc_exchange){
    std::cout << "Copy constructor called" << std::endl;
    *this = btc_exchange;
}

BitcoinExchange::~BitcoinExchange(){
    std::cout << "Default destructor called" << std::endl;
}

BitcoinExchange& BitcoinExchange::operator =(BitcoinExchange& rhs){
    std::cout << "Copy constructor called" << std::endl;
    data_base.clear();
    data_base.insert(rhs.data_base.begin(), rhs.data_base.end());
    return (*this);
}

void BitcoinExchange::set_db(std::string date, float price){
    data_base.insert(std::pair<std::string, float>(date, price));
}

std::map<std::string, float> BitcoinExchange::get_db(){
    return data_base;
}