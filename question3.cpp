#include<iostream>
using namespace std;
class Complex
{
int a,b;
public:
void setdata(int x,int y)
{
    a=x;b=y;
}
void display();
friend Complex operator+(Complex,Complex);
};
void Complex:: display()
{
    cout<<a<<endl<<b<<endl;
}
Complex operator+(Complex S,Complex C)
{
    Complex temp;
    temp.a=S.a+C.a;
    temp.b=S.b+C.b;
    return temp;
}
int main()
{
    Complex s1,s2,s;
    s1.setdata(3,4);
    s2.setdata(7,5);
    s=s1+s2;
    s.display();
}