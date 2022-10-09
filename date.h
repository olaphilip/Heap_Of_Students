#ifndef DATE_H_EXISTS
#define DATE_H_EXISTS
#include <iostream>
#include <string>

class Date{
    private:
        std::string month;
        std::string day;
        std::string year;

    public:
        Date();
        Date(std::string, std::string, std::string);
        ~Date();
        std::string getMonth();
        void setMonth(std::string);
        std::string getDay();
        void setDay(std::string);
        std::string getYear();
        void setYear(std::string);
        friend std::ostream& operator << (std::ostream& os, const Date& d);
        void printDate();
};
#endif