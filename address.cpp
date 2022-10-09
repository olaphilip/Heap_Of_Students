#include <iostream>
#include "address.h"

Address::Address(){
    Address::addLine1 = "";
    Address::addLine2 = "";
    Address::City = "";
    Address::State = "";
    Address::zipCode = "";
}

Address::Address(std::string line1, std::string line2, std::string city, std::string state, std::string zip){
    Address::addLine1 = line1;
    Address::addLine2 = line2;
    Address::City = city;
    Address::State = state;
    Address::zipCode = zip;
}

Address::~Address(){} 

std::string Address::getAddLine1(){ 
    return Address::addLine1;
}

void Address::setAddLine1(std::string addy){ 
    Address::addLine1 = addy;
}

std::string Address::getAddLine2(){ 
    return Address::addLine2;
}

void Address::setAddLine2(std::string addy){ 
    Address::addLine2 = addy;
}

std::string Address::getCity(){ 
    return Address::City;
}

void Address::setCity(std::string city){ 
    Address::City = city;
}

std::string Address::getState(){ 
    return Address::State;
}

void Address::setState(std::string state){ 
    Address::State = state;
}

std::string Address::getZipCode(){ 
    return Address::zipCode;
}

void Address::setZipCode(std::string zip){ 
    Address::zipCode = zip;
}

std::ostream& operator << (std::ostream& os, const Address& a){ 
    os << a.addLine1 << " " << a.addLine2 << ", " << a.City << ", " << a.State << " " << a.zipCode;
    return os;
}

void Address::printAddress(){ 
    std::cout << addLine1 << " " << addLine2 << ", " << City << ", " << State << zipCode;
}