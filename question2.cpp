#include<iostream>
using namespace std;
class A
{
int a;
public:
A setdata(int n)
{
    a=n;
   
}
void display()
{
    cout<<a<<endl;
}
A operator++()
{
   
    A temp;
    temp.a=++a;
    return temp;
}
A operator++(int )
{
     A temp;
    temp.a=a++;
    return temp;
}
A operator--()
{
 A temp;
    temp.a=--a;
    return temp;
}
A operator--(int)
{
     A temp;
    temp.a=a--;
    return temp;
}
friend void operator==(ostream&,A);

};
void operator==(ostream &os,A S)
{
    os<<S.a<<endl;
}
int main()
{
A s1,s2;
s2.setdata(2);
s1.setdata(9);
(++s1).display();
(s1++).display();
(--s1).display();
(s1--).display();

cout==(s1);

    return 0;
}