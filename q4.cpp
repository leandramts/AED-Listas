#include <iostream>

class Course {

private:
std:: string courseName;
std:: string courseNumber;
int credits;


public:
    Course(std::string name, std::string number, int creditHours) {
        courseName = name;
        courseNumber = number;
        credits = creditHours;
    }
       Course() {
        courseName = "";
        courseNumber = "";
        credits = 0;
    }
    std::string getCourseNumber() const {
        return courseNumber;
    }


void display();
void informations();
};


void Course::display(){

std:: cout << courseName <<", " << courseNumber << ", " << credits << "h" << std:: endl;


}

void Course:: informations()
{
 std:: getline(std:: cin,courseName);
 std::getline(std::cin, courseNumber);
 std:: cin >> credits;
 std:: cin.ignore();
}

int search_course_with_sentinel( std:: string searched, Course* vetCourse, int tam) {
    vetCourse[tam]=Course{"Sentinela", searched, 0};
    int i = 0;
    while (vetCourse[i].getCourseNumber() != searched){
        i++;
    }    
    return i;
}


int main(){

  int tam;
  std::cin >> tam;
  std::cin.ignore();
 
  Course* vetCourse = new Course[tam + 1];
    
    for (int i=0; i < tam; i++) 
     vetCourse[i].informations();
    
std:: string searched;
std:: getline(std:: cin, searched);
std:: cin.ignore();
    
int key = search_course_with_sentinel(searched, vetCourse, tam);


if (key < tam){
    vetCourse[key].display();
    } else {
        std:: cout << key;
        }
        

    
    delete [] vetCourse;
    std::cout << std::endl; 




return 0;



}
