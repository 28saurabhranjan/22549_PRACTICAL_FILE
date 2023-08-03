#include<iostream> 
using namespace std;

class Person
{
protected:
    string name;

public:
    Person(string Pname)
    {
        name = Pname;
    }
    virtual void display(void)
    {
        cout << "Name : " << name << endl;
    }
};
class Student : public Person
{
    string course;
    float marks;
    int year;

public:
    Student(string name, string Mcourse, float mark, int yrs) : Person(name)
    {
        course = Mcourse;
        marks = mark;
        year = yrs;
    }
    void display(void)
    {
        cout << "Name : " << name << endl;
        cout << "Course : " << course << endl;
        cout << "Marks : " << marks << endl;
        cout << "Year : " << year << endl;
    }
};
class Employee : public Person
{
    string department;
    float salary;

public:
    Employee(string Ename, string dept, float sal) : Person(Ename)
    {
        department = dept;
        salary = sal;
    }
    void display(void)
    {
        cout << "Name : " << name << endl;
        cout << "Department : " << department << endl;
        cout << "Salary : " << salary << endl;
    }
};
int main()
{
    Person *perPtr;
    Student S1("Ravi", "CS", 123, 2023);
    Employee E1("Anshu", "Tech", 900000);
    perPtr = &E1;
    cout << "Employee's details :" << endl;
    perPtr->display();
    perPtr = &S1;
    cout << endl;
    cout << "Student's details :" << endl;
    perPtr->display();
    return 0;
}