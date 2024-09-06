#include <iostream>

using namespace std;
class Student
{
private:
    string name;
    string classs;
    int rollnum;
    int marks;
    string grade;
public:

    Student()
    {
        name="";
        classs="";
        rollnum=0;
        marks=0;

    }
    Student(string name,string classs,int rollnum,int marks)
    {

        this->name=name;
        this->classs=classs;
        this->rollnum=rollnum;
        this->marks=marks;

    }
    void calgrade(int marks)
    {
        if(marks>=90)
        {
            grade="A";
        }
        else if(marks<90&&marks>=80)
        {
            grade="B";
        }
        else if(marks<80&&marks>=60)
        {
            grade="c";
        }
        else if(marks<60&&marks>=50)
        {
            grade="D";
        }
        else if(marks<50)
        {
            grade="F";
        }

    }
    void display()
    {
        cout<<"Name: "<<name<<endl<<"Class: "<<classs<<endl<<"Roll Number: "<<rollnum<<endl<<"Marks: "<<marks<<endl<<"Grade: "<<grade<<endl;

    }




};
class Date
{
private:
    int day;
    int month;
    int year;

public:
    void setday(int day)
    {
        this->day=day;

    }
    void setmonth(int month)
    {
        this->month=month;

    }
    void setyear(int year)
    {
        this->year=year;

    }
    int getday()
    {
        return day;

    }
    int getmonth()
    {
        return month;

    }
    int getyear()
    {
        return year;

    }
    bool isvalid()
    {
        if(day>1&&day<5&&month>2&&month<10&&year>2020&&year<2025)
        {
            return true;
        }
        else
        {
            return false;
        }

    }

};

class Employee{
private:
    string name;
    int id;
    float salary;
public:
    Employee(){
         name="";
     id=0;
    salary=0.0;

    }
Employee(string name, int id, float salary){
    this->name=name;
    this->id=id;
    this->salary=salary;
}
void calsalary(){
    int workhours;
    cout<<"Enter Your Work Hours Per Week: ";
cin>>workhours;
if(workhours>=140){
    salary=25000;
}
else if(workhours<140&&workhours>=120){
    salary=20000;
}
else if(workhours<120&&workhours>=100){
    salary=15000;
}
else{
      salary=10000;
}
cout<<endl<<"Salary After Check Your Work Hours Is:  "<<salary<<endl;
}


 void display()
    {
        cout<<"Name: "<<name<<endl<<"Id: "<<id<<endl<<"Salary Before Check Your Work Hours Is: "<<salary<<endl;

    }




};

class Mother{
   public:
    virtual void display(){
    cout<<"In Mother Class"<<endl;
    }





};
class Daughter:public Mother{
    public:
        void display(){
    cout<<"In Daughter Class"<<endl;
    }
};
class Shape{
protected:
float width;
float height;
public:
   Shape(){
   width=0.0;
 height=0.0;


   }
   Shape(float width,float height){
   this->width=width;
 this->height=height;


   }
   virtual void calarea()=0;

};
class Triangle:public Shape{
private:

    float length1;
    float length2;
    float length3;

public:
    Triangle(){
    length1=0.0;
    length2=0.0;
    length3=0.0;

    }
Triangle(float width,float height,float length1,float length2,float length3):Shape(width,height){

this->length1=length1;
this->length2=length2;
this->length3=length3;

}
void determine(){
if(length1==length2&&length1==length3&&length2==length3){
    cout<<"Equilateral Triangle"<<endl;
    return;
}
if(length1==length2||length1==length3||length2==length3){
    cout<<"Isosceles Triangle"<<endl;
    return;
}
else{
    cout<<"Scalene Triangle"<<endl;
}


}
 void calarea(){
    cout<<"Area of Triangle is: "<<0.5*width*height<<endl;
    }


};
class Rectangle:public Shape{
public:

  Rectangle(float width,float height):Shape(width,height){

  }
    void calarea(){
    cout<<"Area of Rectangle is: "<<width*height<<endl;
    }



};
int main()
{

    Student student1("lara","class 2",21,90);
    student1.calgrade(90);
    cout<<"1.Student Class:   "<<endl;
    student1.display();
    Date date1;
    date1.setday(2);
    date1.setmonth(5);
    date1.setyear(2024);
    date1.getday();
    date1.getmonth();
    date1.getyear();
     cout<<"___________________________________________________________________________________"<<endl;
     cout<<"2.Date Class:   "<<endl;
    if(date1.isvalid())
    {
        cout<<"Date is valid"<<endl;
    }
    else
    {
        cout<<"Date is not valid"<<endl;
    }
    cout<<"___________________________________________________________________________________"<<endl;
     cout<<"3.Employee Class:   "<<endl;
Employee employee1("layan",28,25000);
employee1.display();
employee1.calsalary();

  cout<<"___________________________________________________________________________________"<<endl;

 cout<<"4.Triangle Class:   "<<endl;
Triangle triangle1(5,10,4,4,4);
triangle1.determine();
triangle1.calarea();
  cout<<"___________________________________________________________________________________"<<endl;
   cout<<"5.Daughter Class:   "<<endl;
  Daughter daughter1;
  daughter1.display();
    cout<<"___________________________________________________________________________________"<<endl;
      cout<<"6.Rectangle Class:   "<<endl;
    Rectangle rectangle1(3,6);
    rectangle1.calarea();
     cout<<"___________________________________________________________________________________"<<endl;

    return 0;
}
