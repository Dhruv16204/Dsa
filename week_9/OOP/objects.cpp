//how to create objects
#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    //attributes
    int age;
    int nos;
    int id;
    string name;

    //constructor -> default hota hai -> whenever we create object of that class constuctor and destructor are automatically called.
    Student(){
        cout << this->name << " constructor called" << endl;
    }

    //parameterized constructor
    Student(int id, int age, string name, int nos) {
        cout << "Parameterized constructor called" << endl;
        this->id = id;
        this->age = age;
        this->name = name;
        this->nos = nos;
    }

    //copy constructor -> srcobj -> jo bhi object ko copy karna hai wo batata hai
    Student(const Student &srcobj) {
        cout << "copy constuctor called" << endl;
         this->id = srcobj.id;
        this->age = srcobj.age;
        this->name = srcobj.name;
        this->nos = srcobj.nos;
    }

    //behaviour , method, functions
    void study() {
        cout << this->name << " studing" << endl; //this -> abhi jo object hai uski baat kar rahe hai
    }
    void bunk() {
        cout << this->name << " bunking" << endl;
    }

    //destructor-> ~
    ~Student(){
        cout << this->name << " destructor called" << endl;
    }
};

int main() {
    //creating object
    // Student a;
    // a.age = 12;
    // a.id = 1;
    // a.nos = 3;
    // a.name = "sachin";

    // a.study();

    // Student b;
    // b.name = "Dhoni";
    // b.age = 19;
    // b.nos = 2;
    // b.id = 2;

    // b.study();

    // a.bunk();


    //parameterized ctor
    Student A(1,18,"Rahul",4);
    cout << "age:" << A.age << " name:" << A.name << " id:" << A.id <<endl;

    Student B(2,18,"Ronaldo",5);
    cout << "age:" << B.age << " name:" << B.name << " id:" << B.id <<endl << endl;

    //copy constuctor
    Student C = A;
    //another syntax-> Student C(A)
     cout << "age:" << C.age << " name:" << C.name << " id:" << C.id <<endl << endl;
    return 0;
}