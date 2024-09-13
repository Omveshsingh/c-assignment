#include<string>
#include<iostream>
using namespace std;
class Student{
    private:
    string Name;
    int Registration_no;
    int Roll_no;
    public:
    Student(string str, int reg,int roll){
        this->Name=str;
        this->Registration_no=reg;
        this->Roll_no=roll;
    }
    void display(){
        cout<<"Name: "<<this->Name<<endl;
        cout<<"Registration Number: "<<this->Registration_no<<endl;
        cout<<"Roll Number: "<<this->Roll_no;
    }
};
int main(){
    Student obj("John",1232,40);
    obj.display();
    return 0;
}