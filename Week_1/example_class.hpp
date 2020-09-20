//
//  example_class.hpp
//  CppCourse
//

#ifndef example_class_hpp
#define example_class_hpp

#include <stdio.h>
#include <iostream>

#endif /* example_class_hpp */

class Student{
    int Id;
    std::string Name;
public:
    void setId(int IdIn);
    void setName(std::string NameIn);
    int getId();
    std::string getName();
};

void Student::setId(int IdIn){
    Id = IdIn;
}

void Student::setName(std::string NameIn){
    Name = NameIn;
}

int Student::getId(){
    return Id;
}

std::string Student::getName(){
    return Name;
}
