#include<iostream>
using namespace std;
class Myclass
{
    public:
    void myfunction()
    {
        cout<<"Some content written in Parent class."<<endl;
    }
};
class myOtherClass
{
    public:
    void myotherfunction()
    {
        cout<<"Some content written in another class."<<endl;
    }
};
class MyChildClass: public Myclass, public myOtherClass{

};
int main()
{
    MyChildClass myobj;
    myobj.myfunction();
    myobj.myotherfunction();
    return 0;
}
//method overloading and overriding
//grandparent name and age and parent also