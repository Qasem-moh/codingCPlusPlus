#include <iostream>

using namespace std;

//class room {
//public:
//    double length;
//    double breadth;
//    double height;
//
//    double calculateArea() {
//        return length * breadth;
//    }
//
//    double calculateVolume() {
//        return height * breadth * length;
//    }
//};

class room {
private:
    double length;
    double breadth;
    double height;

public:
    void intdata(double len,double brth,double hgt){
        length=len;
        breadth=brth;
        height=hgt;
    }
    double calculateArea() {
        return length * breadth;
    }

    double calculateVolume() {
        return length * breadth*height;
    }

};

int main() {
////    room room1;
////    room1.length = 42.5;
////    room1.breadth = 30.8;
////    room1.height = 19.2;
//////////////////////////////////////////////////////////
//    cout << "Area of room " << room1.calculateArea() << endl;
//    cout << "volume of room " << room1.calculateVolume() << endl;

room room1;
room1.intdata(32.3,22.3,365.2);
cout<<"volume"<<room1.calculateVolume()<<endl;
cout<<"area"<<room1.calculateArea()<<endl;
    return 0;
}
