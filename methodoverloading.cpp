#include<iostream>
using namespace std;
class Calculator
{
    public:
    int add(int a, int b)
    {
        return a+b;
    }

    int add(int a, int b, int c)
    {
        return a+b+c;
    }
    int add(double a, double b)
    {
        return a+b;
    }
};
    int main()
    {
        Calculator obj;
        cout<<"Sum: "<<obj.add(5,10)<<endl;
        cout<<"Sum: "<<obj.add(5,10,15)<<endl;
         cout<<"Sum: "<<obj.add(0.5,15.5)<<endl;
         return 0;
    }