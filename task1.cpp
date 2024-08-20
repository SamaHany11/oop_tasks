#include <iostream>

using namespace std;


class Person
{
protected:
    string name;
    int age;
    static int counter;

public:
    Person()
    {
        name="";
        age=0;
        counter++;

    }
    Person(string name, int age)
    {
        this->name=name;
        this->age=age;
counter++;

    }
    virtual void display()
    {

    }


};
class Patient:public Person
{
    int patient_id;
    string diagnosis;
public:
    Patient():Person()
    {
        patient_id=0;
        diagnosis="";

    }
    Patient(string name, int age, string diagnosis):Person(name,age)
    {
        this->patient_id=counter;
        this->diagnosis=diagnosis;

    }
    void display()
    {
        cout<<"patient name: "<<name<<endl<<"patient age: "<<age<<endl<<"patient id: "<<patient_id<<endl<<"patient diagnosis: "<<diagnosis<<endl;

    }
    int get_patient_id()
    {
        return patient_id;

    }

};
class Doctor:public Person
{
    int doctor_id;
    string specialization;
public:
    Doctor():Person()
    {
        doctor_id=0;
        specialization="";
    }
    Doctor(string name, int age, string specialization):Person(name,age)
    {
        this->doctor_id=counter;
        this->specialization=specialization;

    }
    void display()
    {
        cout<<"doctor name: "<<name<<endl<<"doctor age: "<<age<<endl<<"doctor id: "<<doctor_id<<endl<<"doctor specialization: "<<specialization<<endl;

    }
    int get_doctor_id()
    {
        return doctor_id;

    }

};
int Person::counter=0;


int main()
{

    Patient obj1("sama",19,"Diabetes");
Patient obj2("malak",14,"animea");
    Doctor obj3("aser",23,"Internist");
     Doctor obj4("aysel",26,"dentist");
    cout<<" Patients information: "<<endl<<endl;
    obj1.display();
    cout<<"------------------------------------------------------------------"<<endl;
    obj2.display();
        cout<<"------------------------------------------------------------------"<<endl<<" Doctors information: "<<endl<<endl;
    obj3.display();
     cout<<"------------------------------------------------------------------"<<endl;
       obj4.display();
    return 0;
}
