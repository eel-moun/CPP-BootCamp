#include <iostream>
#include <vector>
#include <deque>
#include <ctime>


template <typename P ,typename T>

void merge_insert(P container, T small, T big, int num, char c){
    clock_t time = clock();

    for(size_t i = 0; i < container.size(); i++)
    {
        if(container[i].first > container[i].second)
            std::swap(container[i].first, container[i].second);
    }

    for(size_t i = 0; i < container.size(); i++)
    {
        small.push_back(container[i].first);
        big.push_back(container[i].second);
    }
    std::sort(big.begin(), big.end());
    for (size_t i = 0; i < small.size(); i++)
        big.insert(std::lower_bound(big.begin(), big.end(), small[i]), small[i]);

    if(num > 0)
        big.insert(std::lower_bound(big.begin(), big.end(), num), num);
    if(c == 'v')
    {
        std::cout << "After:  " ;
        for(size_t i = 0; i < big.size() && i < 5 ; i++)
        {
            if(i == 4 && big.size() > 5)
                std::cout << "[...]";
            else
                std::cout << big[i] << " ";
        }
        std::cout << std::endl;
        std::cout << "Time to process a range of " << big.size() << " elements with std::vector : " << clock() - time <<  "us" << std::endl;
    }
    else
        std::cout << "Time to process a range of " << big.size() << " elements with std::deque : " << clock() - time <<  "us" << std::endl;


}

int check_input(char *num){
    while (*num)
    {
        if (isdigit(*num))
            num++;
        else
            return (0);
    }
    return (1);
}

int main(int ac, char **av){
    int num;
    bool ispair = true;
    
    if ((ac - 1) % 2 != 0)
    {
        if (check_input(av[ac - 1]))
            num = atoi(av[ac - 1]);
        else
        {
            std::cout << "Error" << std::endl;
            return 0;
        }
        ispair = false;
    }
    if (ac < 6)
    {
        for(int i = 1; i < ac ; i++)
        {    
            if(!check_input(av[i]))
            {
                std::cout << "Error" << std::endl;
                return (0);
            }
        }
        std::cout << "Before: ";
        for(int i = 1; i < ac ; i++)
            std::cout << av[i] << " ";

        std::cout << std::endl;
    }
    else
    {
        if (check_input(av[1]) && check_input(av[2]) && check_input(av[3]) && check_input(av[4]))
            std::cout << "Before: " << av[1] << " " << av[2] << " " << av[3] << " " << av[4] << "[...]" <<std::endl;
    }

    std::vector <std::pair<unsigned int , unsigned int > > pair_vec;
    for (int i = 1 ; i < (ac - 1) && i + 1 <= ac - 1; i += 2)
    {
        if (check_input(av[i]) && check_input(av[i + 1]))
            pair_vec.push_back(std::pair<unsigned int , unsigned int >(atoi(av[i]), atoi(av[i + 1])));
        else
        {
            std::cout << "Error1" << std::endl;
            return 0;
        }
    }
    std::vector <unsigned int>small_v;
    std::vector <unsigned int>big_v;

    if(ispair)
        merge_insert(pair_vec, small_v, big_v, -1, 'v');
    else
        merge_insert(pair_vec, small_v, big_v, num, 'v');

    std::deque <std::pair<unsigned int , unsigned int > > pair_queue;
    
    for (int i = 0 ; i < (ac - 1) && i + 1 <= ac - 1; i += 2)
        pair_vec.push_back(std::pair<unsigned int , unsigned int >(atoi(av[i]), atoi(av[i + 1])));

    std::deque <unsigned int>small_q;
    std::deque <unsigned int>big_q;

    if(ispair)
        merge_insert(pair_vec, small_q, big_q, -1, 'q');
    else
        merge_insert(pair_vec, small_q, big_q, num, 'd');
}

