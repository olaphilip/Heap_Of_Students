#include <sstream>
#include <fstream>
#include "student.h"

int main(){
    std::ifstream inputFile("student.dat");
    std::ofstream shortReport("shortReport.txt");
    std::ofstream fullReport("fullReport.txt");
    std::string currentLine;
    
    if (!inputFile){
        return 1;
    }
    if (!shortReport){
        return 1;
    }
    if (!fullReport){
        return 1;
    }
    
    Student *student = new Student[50]; 
	int arrayLoc = 0; 
	
	std::string inputline; 
	for(arrayLoc = 0; arrayLoc < 50; arrayLoc++) { 
		getline(inputFile, inputline); 
		student[arrayLoc].set(inputline); 
	}
	
	int x, y; 
	
	for (x = 0; x < 50; x++) { 
		shortReport << student[x].getFirstName() << " " << student[x].getLastName() << std::endl;
	}
	
	for (y = 0; y < 50; y++) { 
		fullReport << student[y] << std::endl;
	}
	
	fullReport.close(); 
    shortReport.close(); 
	delete[] student; 
    
    return 0;
}