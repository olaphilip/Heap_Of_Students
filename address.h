#ifndef ADDRESS_H_EXISTS
#define ADDRESS_H_EXISTS
#include <iostream>
#include <string>

class Address{
    private: //private attribute
        std::string addLine1; //address line 1
        std::string addLine2; //address line 2
        std::string City; //city
        std::string State; //state
        std::string zipCode; //zipcode

    public: //public attribute
        Address(); //default constructor
        Address(std::string, std::string, std::string, std::string, std::string); //constructor that takes everything
        ~Address(); //destructor
        std::string getAddLine1(); //address line 1 getter
        void setAddLine1(std::string); // its setter
        std::string getAddLine2(); // address line 2 getter
        void setAddLine2(std::string); // its setter
        std::string getCity(); //city getter
        void setCity(std::string); //city setter
        std::string getState(); //state getter
        void setState(std::string); //state setter
        std::string getZipCode(); //zipcode getter
        void setZipCode(std::string); //zipcode setter
        friend std::ostream& operator << (std::ostream& os, const Address& a); // output stream to output the address
        void printAddress(); //prints address in correct order
};
#endif