#include <iostream>
#include <string>
#include "date.h"

Date::Date(){
    Date::month = "0";
    Date::day = "0";
    Date::year = "0";
}

Date::Date(std::string month, std::string day, std::string year){
    Date::month = month;
    Date::day = day;
    Date::year = year;
}

Date::~Date() {} 

std::string Date::getMonth(){ 
    return Date::month;
}

void Date::setMonth(std::string monthNumber){
    Date::month = monthNumber;
}

std::string Date::getDay(){
    return Date::day;
}

void Date::setDay(std::string dayNumber){
    Date::day = dayNumber;
}

std::string Date::getYear(){
    return Date::year;
}

void Date::setYear(std::string yearNumber){
    Date::year = yearNumber;
}

std::ostream& operator << (std::ostream& os, const Date& d){
    os << d.month << "/" << d.day << "/" << d.year;
    return os;
}

void Date::printDate(){
    std::cout << month << "/" << day << "/" << year;
}