#include <iostream>

class Course {

private:
std:: string courseName;
std:: string courseNumber;
int credits;

public: 
Course(){};
Course(std:: string CourseName_, std:: string CourseCode_, int credits_);




void display();
void informations();
};


void Course::display(){

std:: cout << courseName <<", " << courseNumber << ", " << credits << "h" << std:: endl;


}

void Course:: informations()
{
 std:: getline(std:: cin,courseName);
 std:: cin >> courseNumber;
 std:: cin >> credits;
 std:: cin.ignore();
}


int main(){

Course c;
c.informations();
c.display();

return 0;



}