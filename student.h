#ifndef STUDENT_H_EXISTS
#define STUDENT_H_EXISTS
#include "address.h"
#include "date.h"
#include <string>

class Student{
    private:
        std::string firstName; //first name
        std::string lastName; // last name
        Address* studentAddress; //pointer to address object
        Date* studentBirthDay; //pointer to get birthday from the date object
        Date* studentGradDay; //pointer to get student graduation date from the date object
        std::string gpa; // gpa
        std::string creditHours; //credit hours

    public:
        Student(); //default constructor
        Student(std::string line); // constructor to accept line from student.dat
        void set(std::string line); // sets all part of student taking a line from student.dat
        ~Student(); // destructor
        std::string getFirstName(); //getter for first name
        void setFirstName(std::string fName); //setter for first name
        std::string getLastName(); //getter for last name
        void setLastname(std::string lName); //setter for last name
        Address getStudentAddress(); //getter for student address
        void setStudentAddress(Address* addyy); //setter for student address
        Date getStudentBirthDay(); //getter for student birthday
        void setStudentBirthday(Date* bday); //setter for student birthday
        Date getStudentGradDay(); // getter for student graduation date
        void setStudentGradDay(Date* gday); // setter for student graduation date
        std::string getGPA(); // gpa getter
        void setGPA(std::string gpa); // setter for gpa
        std::string getCreditHours(); //getter for credit hours
        void setCreditHours(std::string creditH); //setter for credit hours
        void printFull(); //print full object
        void printNames(); //print 
        friend std::ostream& operator << (std::ostream& os, const Student& s);
};
#endif