#include<iostream>
using namespace std;
class Myclass
{
    public:
    void mygrandparentfunction()
    {
        cout<<"Name: Niranjan Balashankar Buch."<<endl<<"Age: 92"<<endl;
    }
};
class myOtherClass
{
    public:
    void myparentfunction()
    {
        cout<<"Name: Amit Niranjan Buch."<<endl<<"Age: 54"<<endl;
    }
};
class MyChildClass: public Myclass, public myOtherClass{

};
int main()
{
    MyChildClass myobj;
    myobj.mygrandparentfunction();
    myobj.myparentfunction();
    return 0;
}
//method overloading(compile time polymorphism) and overriding
//grandparent name and age and parent also