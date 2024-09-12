//Q1
#include<iostream>
#include<string>
using namespace std;
class Car{
    public:
    string brand;
    string model;
    string engine;
    int num_of_seats;
    void displayInfo(){
        cout<<"Brand: "<<brand<<endl;
        cout<<"Model: "<<model<<endl;       
        cout<<"Engine: "<<engine<<endl;
        cout<<"Number of Seats: "<<num_of_seats;
    }
};
int main(){
    Car obj;
    obj.brand="Toyota";
    obj.model="v1";
    obj.engine="v12";
    obj.num_of_seats=4;    
    obj.displayInfo();
    return 0;
}

//Q2
#include<iostream>
using namespace std;
class Rectangle{
    private:
    double length,width;
    public:
    Rectangle(double length,double width){
        this->length=length;
        this->width= width;
    }
    void display(){
        cout<<length<<endl;
        cout<<width<<endl;
    }
};
int main(){
    Rectangle rect1(12.5, 4.5);
    rect1.display();
    Rectangle rect2(rect1);
    rect2.display();
    return 0;

}
