#include <iostream>

class Course {
private:
    std::string courseName;
    std::string courseNumber;
    int credits;

public: 
    Course() {};
    Course(std::string CourseName_, std::string CourseCode_, int credits_) 
        : courseName(CourseName_), courseNumber(CourseCode_), credits(credits_) {};

    void display();
    void informations();
};

void Course::display() {
    std::cout << courseName << ", " << courseNumber << ", " << credits << "h" << std::endl;
}

void Course::informations() {
    std::getline(std::cin, courseName);
    std::getline(std::cin, courseNumber);
    std::cin >> credits;
    std::cin.ignore(); 
}

int main() {
    int tam;
    std::cin >> tam;
    std::cin.ignore(); 
    
    Course* vetCourse = new Course[tam];
    
    for (int i = 0; i < tam; i++) {
        vetCourse[i].informations();
    }
    
    for (int i = 0; i < tam; i++) {
        vetCourse[i].display();
    }
    
    delete[] vetCourse;
    
    return 0;
}
