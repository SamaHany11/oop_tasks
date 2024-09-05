#include <iostream>
#include <vector>

using namespace std;


class Person
{
protected:
    string name;
    int age;


public:
    Person()
    {
        name="";
        age=0;



    }
    Person(string name, int age)
    {
        this->name=name;
        this->age=age;



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
    Patient(string name, int age, string diagnosis,int patient_id):Person(name,age)
    {
        this->patient_id=patient_id;
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
    int get_patient_age()
    {
        return age;

    }
    string get_patient_name()
    {
        return name;

    }
    string get_patient_diagnosis()
    {
        return diagnosis;

    }


    friend istream &operator>>(istream &in, Patient &p);


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
    Doctor(string name, int age, string specialization,int doctor_id):Person(name,age)
    {
        this->doctor_id=doctor_id;
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
    friend istream &operator>>(istream &in, Doctor &p);
};
class Appointment
{
protected:

    string doctor_name;
    string patient_name;
    string date;

public:
    Appointment()
    {

        doctor_name=" ";
        patient_name=" ";
        date=" ";

    }
    Appointment(string doctor_name,string patient_name,string date)
    {

        this->doctor_name= doctor_name;
        this->patient_name= patient_name;
        this->date=date;

    }
    void display()
    {

        cout<<"patient_name: "<<patient_name<<endl<<"doctor_name: "<<doctor_name<<endl<<"date: "<<date<<endl;
    }
    friend istream &operator>>(istream &in, Appointment &p);

};
class Hospital
{

protected:

    vector<Patient>patients;
    vector<Doctor>doctors;
    vector<Appointment>appointments;
    Patient p;
public:

    void add_patient( Patient obj1)
    {
        patients.push_back(obj1);

    }
    void add_doctor(Doctor obj2)
    {
        doctors.push_back(obj2);

    }
    void add_appointment( Appointment obj3)
    {
        appointments.push_back(obj3);

    }
    void displaypatients()
    {
        if (patients.empty())
        {
            cout << "No patients to display." << endl;
        }
        else
        {
            for (int i=0; i<patients.size(); i++)
            {
                cout<<endl<<"patient "<<i+1<<":"<<endl;
                patients[i].display();
            }
        }
    }
    void displaydoctors()
    {
        if (doctors.empty())
        {
            cout << "No doctors to display." << endl;
        }
        else
        {
            for (int i=0; i<doctors.size(); i++)
            {
                cout<<endl<<"doctor "<<i+1<<":"<<endl;
                doctors[i].display();
            }
        }
    }
    void displayappointments()
    {
        if (appointments.empty())
        {
            cout << "No appointments to display." << endl;
        }
        else
        {
            for (int i=0; i<appointments.size(); i++)
            {
                cout<<endl<<"appointment "<<i+1<<":"<<endl;
                appointments[i].display();
            }
        }
    }
    void getPatientById(int id)
    {
        for (int i = 0; i < patients.size(); i++)
        {
            if (patients[i].get_patient_id() == id)
            {
                cout<<"information of the patient you searched for: "<<endl;
                patients[i].display();
                return;
            }

        }
        cout<<"patient not found"<<endl;
    }
    void getdoctortById(int id)
    {
        for (int i = 0; i < doctors.size(); i++)
        {
            if (doctors[i].get_doctor_id() == id)
            {
                cout<<"information of the doctor you searched for: "<<endl;
                doctors[i].display();
                return;
            }

        }
        cout<<"doctor not found"<<endl;
    }

};
istream &operator>>(istream &in, Patient &p)
{
    in>>p.age>>p.name>>p.diagnosis>>p.patient_id;
    return in;

}
istream &operator>>(istream &in, Doctor &p)
{
    in>>p.doctor_id>>p.name>>p.age>>p.specialization;
    return in;

}
istream &operator>>(istream &in, Appointment &p)
{
    in>>p.doctor_name>>p.patient_name>>p.date;
    return in;

}

int main()
{
    cout<<"                                         * WELCOME TO OUR HOSPITAL SYSTEM *                                     "<<endl;
    cout<<"1.Show patients information"<<endl;
    cout<<"2.Show doctors information"<<endl;
    cout<<"3.Show appointment information"<<endl;
    cout<<"4.Show all information"<<endl;
    cout<<"5.Add new patient"<<endl;
    cout<<"6.Add new doctor"<<endl;
    cout<<"7.Add new appointment"<<endl;
    cout<<"8.Find patient"<<endl;
    cout<<"9.Find doctor"<<endl;
    cout<<"10.Exit"<<endl;
    Patient obj1("hamsa",19,"Diabetes",1);
    Hospital obj6;
    int patient_id;
    int doctor_id;
    Patient obj2;
    Doctor obj4;
    Appointment obj7;
    Doctor obj3("aser",23,"Internist",1);
    Appointment obj5("aser","hamsa","5/9/2024");
    obj6.add_patient(obj1);
    obj6.add_doctor(obj3);
    obj6.add_appointment(obj5);

    while(true)
    {
        cout<<"Please enter your choice "<<endl;
        int choice;
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"------------------------------------------------------------------"<<endl;
            cout<<"all patients information: "<<endl;
            obj6.displaypatients();
            cout<<"------------------------------------------------------------------"<<endl;
            break;
        case 2:
            cout<<"------------------------------------------------------------------"<<endl;
            cout<<"all doctors information: "<<endl;
            obj6.displaydoctors();
            cout<<"------------------------------------------------------------------"<<endl;
            break;
        case 3:
            cout<<"------------------------------------------------------------------"<<endl;
            cout<<"all appointments information: "<<endl;
            obj6.displayappointments();
            cout<<"------------------------------------------------------------------"<<endl;
            break;
        case 4:
            cout<<"------------------------------------------------------------------"<<endl;
            cout<<"all patients information: "<<endl;
            obj6.displaypatients();
            cout<<"------------------------------------------------------------------"<<endl;
            cout<<"all doctors information: "<<endl;
            obj6.displaydoctors();
            cout<<"------------------------------------------------------------------"<<endl;
            cout<<"all appointments information: "<<endl;
            obj6.displayappointments();
            break;
        case 5:
            cout<<"enter new patient information(age& name&  diagnosis& id): "<<endl;
            cin>>obj2;
            cout<<"patient added Successfully"<<endl;
            obj6.add_patient(obj2);
            obj6.displaypatients();
            break;
        case 6:
            cout<<"enter new doctor information(id& name& age &specialization): "<<endl;
            cin>>obj4;
            cout<<"------------------------------------------------------------------"<<endl;
            cout<<"doctor added Successfully"<<endl;
            obj6.add_doctor(obj4);
            obj6.displaydoctors();
            break;
        case 7:

            cout<<"enter new appointment information(doctor name &patient name &date): "<<endl;
            cin>>obj7;
            cout<<"------------------------------------------------------------------"<<endl;
            cout<<"appointment added Successfully"<<endl;
            obj6.add_appointment(obj7);
            obj6.displayappointments();
            break;
        case 8:
            cout<<"Enter the Patient ID you want to search for"<<endl;
            cin>>patient_id;
            obj6.getPatientById(patient_id);
            break;
        case 9:
            cout<<"Enter the Doctor ID you want to search for"<<endl;
            cin>>doctor_id;
            obj6.getdoctortById(doctor_id);
            break;
        case 10:
            cout<<"THANKS  "<<endl;
            return 0;
        default:
            cout<<"Enter a correct choice"<<endl;
        }
    }

    return 0;
}
