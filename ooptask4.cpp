#include <iostream>

using namespace std;

class Person{
protected:
string name;
int age;
static int counter;
public:
    Person(){
    }
Person(string name ,int age){
this->name=name;
this->age=age;
counter++;
}
void setname(string name){
this->name=name;


}
void setage(int age){
this->age=age;


}
string getname(){
    return name;


}
int getage(){
    return age;


}
int getcounter(){
return counter;

}
 virtual void display(){
 }

~Person(){
    }

};
class Student:public Person{
protected:
    int id;
    char grade;
    public:
 Student(){
    }
Student(string name ,int age,int id,char grade):Person(name,age){
this->id=id;
this->grade=grade;

}
void setid(int id){
this->id=id;


}
void setgrade(char grade){
this->grade=grade;


}
char getgrade(){
    return grade;


}
int getid(){
    return id;


}

~Student(){
    }


void display(){

cout<<"student name: "<<name<<endl<<"student age: "<<age<<endl<<"student id: "<<id<<endl<<"student grade: "<<grade;

}

};
class Teacher:public Person{
int employeeid;
string subject;
public:
    Teacher(){
    }
Teacher(string name ,int age,int employeeid,string subject):Person(name,age){
this->employeeid=employeeid;
this->subject=subject;

}
void setemployeeid(int employeeid){
this->employeeid=employeeid;
}


void setsubject(string subject){
this->subject=subject;


}
string getsubject(){
    return subject;


}
int getemployeeid(){
    return employeeid;


}

~Teacher(){
    }

void display(){

cout<<"teacher name: "<<name<<endl<<"teacher age: "<<age<<endl<<"teacher id: "<<employeeid<<endl<<"teacher subject: "<<subject;

}


};



int Person::counter=0;


int main()
{
Person p;
Student s("sama",19,280,'A');
Teacher t("nada",45,124,"math");
s.display();
cout<<endl<<"-----------------------------------------------------------------------------------------"<<endl;
t.display();
cout<<endl<<"-----------------------------------------------------------------------------------------"<<endl;
cout<<"total count: "<<p.getcounter()<<endl;
cout<<endl<<"-----------------------------------------------------------------------------------------"<<endl;

    return 0;
}
