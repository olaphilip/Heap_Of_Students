#include <sstream>
#include <string>
#include "student.h"
#include "date.h"
#include "address.h"

Student::Student(){ //default constructor
    Student::firstName = "";
    Student::lastName = "";
    Student::studentAddress = new Address();
    Student::studentBirthDay = new Date();
    Student::studentGradDay = new Date();
    Student::gpa = "0";
    Student::creditHours = "0";
    
}

Student::Student(std::string line){
    std::stringstream ss(line); // stringstream for the input line
	Student::studentAddress = new Address(); // creates new address object
	Student::studentBirthDay = new Date(); // creats new date object for the birthday
	Student::studentGradDay = new Date(); // creates new date object for the graduation day

	std::string tempAdd1, tempAdd2, tempCity, tempState, tempZip, tempBirthDay, tempBirthMonth, tempBirthYear, tempGradDay, tempGradMonth, tempGradYear, tempGPA, tempCreditHours; // initializes temporary placeholder

	getline(ss, Student::lastName, ','); // gets the lastname 
	getline(ss, Student::firstName, ','); // gets the firstname
	getline(ss, tempAdd1, ','); // gets the first address line
	getline(ss, tempAdd2, ','); // gets th second address line
	getline(ss, tempCity, ','); // gets the city
	getline(ss, tempState, ','); // gets the state
	getline(ss, tempZip, ','); // gets the zipcode
	getline(ss, tempBirthDay, '/'); // gets birth Day
	getline(ss, tempBirthMonth, '/'); // gets birth month
	getline(ss, tempBirthYear, ','); // gets birth year
	getline(ss, tempGradDay, '/'); // gets graduation day
	getline(ss, tempGradMonth, '/'); // gets graduation month
	getline(ss, tempGradYear, ','); // gets graduation year
	getline(ss, tempGPA, ','); // gets GPA
	getline(ss, tempCreditHours); // gets credit hours

	Student::studentAddress -> setAddLine1(tempAdd1); // sets address line 1
	Student::studentAddress -> setAddLine2(tempAdd2); // sets address line 2
	Student::studentAddress -> setCity(tempCity); // sets city
	Student::studentAddress -> setState(tempState); // sets state
	Student::studentAddress -> setZipCode(tempZip); // sets zipcode

	Student::studentGradDay -> setDay(tempGradDay); // sets grad day
	Student::studentGradDay -> setYear(tempGradYear); // sets grad year
	Student::studentGradDay -> setMonth(tempGradMonth); // sets grad month

	Student::studentBirthDay -> setDay(tempBirthDay); // sets birth day
	Student::studentBirthDay -> setMonth(tempBirthMonth); // sets birth month
	Student::studentBirthDay -> setYear(tempBirthYear); // sets birth year

}

void Student::set(std::string line) { //although this is the setter for the entire object, it has the same things as the constructor except new datas on heap
    std::stringstream ss(line);

	std::string tempAdd1, tempAdd2, tempCity, tempState, tempZip, tempBirthDay, tempBirthMonth, tempBirthYear, tempGradDay, tempGradMonth, tempGradYear, tempGPA, tempCreditHours; 

	getline(ss, Student::lastName, ',');
	getline(ss, Student::firstName, ',');
	getline(ss, tempAdd1, ',');
	getline(ss, tempAdd2, ',');
	getline(ss, tempCity, ',');
	getline(ss, tempState, ',');
	getline(ss, tempZip, ',');
	getline(ss, tempBirthDay, '/');
	getline(ss, tempBirthMonth, '/');
	getline(ss, tempBirthYear, ',');
	getline(ss, tempGradDay, '/');
	getline(ss, tempGradMonth, '/');
	getline(ss, tempGradYear, ',');
	getline(ss, tempGPA, ',');
	getline(ss, tempCreditHours);

	Student::studentAddress -> setAddLine1(tempAdd1);
	Student::studentAddress -> setAddLine2(tempAdd2);
	Student::studentAddress -> setCity(tempCity);
	Student::studentAddress -> setState(tempState);
	Student::studentAddress -> setZipCode(tempZip);

	Student::studentGradDay -> setDay(tempGradDay);
	Student::studentGradDay -> setYear(tempGradYear);
	Student::studentGradDay -> setMonth(tempGradMonth);

	Student::studentBirthDay -> setDay(tempBirthDay);
	Student::studentBirthDay -> setMonth(tempBirthMonth);
	Student::studentBirthDay -> setYear(tempBirthYear);
}

Student::~Student(){ //destructor
    delete studentAddress; //deletes student address from heap
    delete studentBirthDay; // deletes student birthday from heap
    delete studentGradDay; //deletes student graduation day from heap
}

std::string Student::getFirstName(){ //getter for first name
    return Student::firstName; 
}

void Student::setFirstName(std::string fName){ //setter for first name
    Student::firstName = fName;
}

std::string Student::getLastName(){ //getter for last name
    return Student::lastName;
}

void Student::setLastname(std::string lName){ //setter for last name
    Student::lastName = lName;
}

Address Student::getStudentAddress(){ //getter for student address
    return *Student::studentAddress;
}

void Student::setStudentAddress(Address* addyy){ //setter for student address
    Student::studentAddress = addyy;
}

Date Student::getStudentBirthDay(){ //getter for student birthday
    return *Student::studentBirthDay;
}

void Student::setStudentBirthday(Date* bday){ //setter for student birthday
    Student::studentBirthDay = bday;
}

Date Student::getStudentGradDay(){ // getter for student graduation date
    return* Student::studentGradDay;
}

void Student::setStudentGradDay(Date* gday){ // setter for student graduation date
    Student::studentGradDay = gday;
}

std::string Student::getGPA(){ // gpa getter
    return Student::gpa;
}

void Student::setGPA(std::string gpa){ // setter for gpa
    Student::gpa = gpa;
}

std::string Student::getCreditHours(){ //getter for credit hours
    return Student::creditHours;
}

void Student::setCreditHours(std::string creditH){ //setter for credit hours
    Student::creditHours = creditH;
}

void Student::printNames(){ //print just the student names
    std::cout << firstName << " " << lastName;
}

void Student::printFull(){ //print full object
    Student::printNames(); //calls on the print name function
	std::cout << " ";
	studentAddress->printAddress(); //print address function is called to print the data in student address
	std::cout << " ";
	studentBirthDay->printDate(); //print date function is called to print the data for student birthday
	std::cout << " ";
	studentGradDay->printDate(); //print date function is called to print the data for student graduation day
	std::cout << gpa << ", " << creditHours;
}

std::ostream& operator << (std::ostream& os, const Student& s){ //allows me to stream the output data of the object with <<
    os << s.lastName << ", " << s.firstName << " " << *s.studentAddress << " " << *s.studentBirthDay << " " << *s.studentGradDay << " " << s.gpa << " " << s.creditHours;
	return os;
}
