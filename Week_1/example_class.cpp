//  example_class.cpp
//  CppCourse

#include "example_class.hpp"

int main(){
    Student Student1;
    Student1.setId(10);
    Student1.setName("Frederik Chopin");
    std::cout<<"Id is: "<<Student1.getId()<<"\n";
    std::cout<<"Name is: "<<Student1.getName()<<"\n";
    return 0;
}
