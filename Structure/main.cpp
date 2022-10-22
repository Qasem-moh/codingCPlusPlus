#include <iostream>

using namespace std;

//struct person {
//    char name[50];
//    int age;
//    float salary;
//};



struct Person {
    char name[50];
    int age;
    float salary;
};

Person getData(Person);

void displayData(Person);

Person getData(Person p) {

    cout << "Enter Full name: ";
    cin.get(p.name, 50);

    cout << "Enter age: ";
    cin >> p.age;

    cout << "Enter salary: ";
    cin >> p.salary;

    return p;
}

void displayData(Person p) {
    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
    cout << "Salary: " << p.salary;
}

int main() {
    Person p, temp;

    temp = getData(p);
//    p = temp;
    displayData(temp);

//    person p1;
//    cout << "Enter Full name: \n";
//    cin.get(p1.name, 50);
//    cout << "Enter age: \n";
//    cin >> p1.age;
//    cout << "enter your salary:\n ";
//    cin >> p1.salary;
//    cout << "your name is " << p1.name << " Your age is :" << p1.age << " your salary is " << p1.salary << endl;
//





    return 0;
}
