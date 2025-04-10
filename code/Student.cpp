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

int main(){

    Student mike;
    mike.buildStudent();
    mike.printStudent();
    mike.changeMajor();
    mike.printStudent();
    return 0;
}

