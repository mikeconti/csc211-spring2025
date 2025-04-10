#include <iostream>

// Write a Student struct that contains
    // Name
    // StudentID
    // Major
    // Implement functions:
// void buildStudent(Student &someStudent)
    // Initialize member variables of student Struct
    //   void changeMajor(Student &someStudent);
// Change the major of a student structure
    // void printStudent(Student &someStudent);
// Prints out all member variables of student structure 


class Student{

    public:
        void buildStudent();
        void changeMajor();
        void printStudent();

    
    private:
        std::string name;
        std::string major;
        int id;
        
};

void Student::buildStudent(){
    std::cout << "Enter a name " << std::endl;
    std::cin >> name;

    std::cout << "Enter a major " << std::endl;
    std::cin >> major;

    std::cout << "Enter a student ID " << std::endl;
    std::cin >> id;
}

void Student::printStudent(){
    std::cout << "Name: " << name << std::endl;

    std::cout << "Major: " << major << std::endl;

    std::cout << "Student ID: " << id << std::endl;
    
}

void Student::changeMajor(){

    std::cout << "Enter a new major " << std::endl;
    std::cin >> major;

}


int main(){

    Student mike;
    mike.buildStudent();
    mike.printStudent();
    mike.changeMajor();
    mike.printStudent();
    return 0;
}

