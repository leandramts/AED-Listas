#include <iostream>
#include <algorithm>

class Course {

private:
std:: string courseName;
std:: string courseNumber;
int credits;

public:
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

int binary_search_course( std:: string searched, Course* vetCourse, int tam) {
    int L = 0;
    int R = tam - 1;
    int cont = 0;
    while (L<=R) {
        cont++;
    int m = (int) (L + R)/2;
    if (vetCourse[m].getCourseNumber() < searched) {
        L = m + 1;
        } else {
    if (vetCourse[m].getCourseNumber() > searched){   
        R = m - 1;
         } else if (vetCourse[m].getCourseNumber() == searched) 
     break;
         }    
    }
    return cont;
}

bool compareByCourseNumber(const Course& a, const Course& b) {
    return a.getCourseNumber() < b.getCourseNumber();
}

int main(){

  int tam;
  std::cin >> tam;
  std::cin.ignore();
 
  Course* vetCourse = new Course[tam];
    
    for (int i=0; i < tam; i++) 
     vetCourse[i].informations();

std::sort(vetCourse, vetCourse + tam, compareByCourseNumber);

std:: string searched;
std:: getline(std:: cin, searched);
std:: cin.ignore();
    
int cont =  binary_search_course(searched, vetCourse, tam);

std:: cout << cont;
        
    delete [] vetCourse;
    std::cout << std::endl; 




return 0;



}