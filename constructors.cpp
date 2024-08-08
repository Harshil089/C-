#include<iostream>
#include<stdio.h>
using namespace std;

class Data
{
    public:
        string name = "Harshil";
        int roll = 25;
        float marks = 9.14;   
};

int main()
{
   Data ob;
    cout<<"Name: "<<ob.name<<endl;
    cout<<"Roll No. "<<ob.roll<<endl;
    cout<<"Marks Obtained: "<<ob.marks<<endl;
}

