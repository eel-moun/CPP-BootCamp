#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP
#include <iostream>
#include <map>
#include <string>
#include <fstream>

class BitcoinExchange{
    private:
        std::map<std::string, float> data_base;

    public:
        BitcoinExchange();
        BitcoinExchange(BitcoinExchange& btc_exchange);
        ~BitcoinExchange();
        BitcoinExchange& operator = (BitcoinExchange& rhs);

        void set_db(std::string date, float price);
        std::map<std::string, float> get_db();
};

#endif