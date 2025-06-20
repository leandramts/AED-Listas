#include <iostream>

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

int search_course( std:: string searched, Course* vetCourse, int tam) {
    int pos = - 1;
    for (int i = 0; i < tam; i++){
        if (vetCourse[i].getCourseNumber() == searched){
        pos = i;
        break;
         }
    }    
    return pos;
}


int main(){

  int tam;
  std::cin >> tam;
  std::cin.ignore();
 
  Course* vetCourse = new Course[tam];
    
    for (int i=0; i < tam; i++) 
     vetCourse[i].informations();
    
std:: string searched;
std:: getline(std:: cin, searched);
std:: cin.ignore();
    
int key = search_course(searched, vetCourse, tam);


if (key != - 1){
    vetCourse[key].display();
    } else {
        std:: cout << "Nenhuma disciplina com codigo " << searched <<" foi encontrada.";
        }
        

    
    delete [] vetCourse;
    std::cout << std::endl; 




return 0;



}