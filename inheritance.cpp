#include<iostream>
using namespace std;

class MyClass
{
    public:
    void myfunction()
    {
        cout<<"Some content written in Parent Class";
    }
};
//derived class(child)
class MyChild: public MyClass
{

};
//derived class grandchild
class MyGrandchild: public MyChild{

};
int main()
{
    MyGrandchild myObj;
    myObj.myfunction();
    return 0;
}
//java does not support multiple inheritance