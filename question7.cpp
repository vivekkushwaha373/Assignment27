#include<iostream>
using namespace std;
class fraction
{
public:
long numerator;
long denominator;
public:
fraction()
{
     numerator=0; 
     denominator=0;
}
fraction operator++()
{
fraction c1;
c1.numerator=++numerator;
c1.denominator=++denominator;
return c1;
}
fraction operator++(int)
{
fraction c1;
c1.numerator=numerator++;
c1.denominator=denominator++;
return c1;
}
friend void operator>>(istream&,fraction&);
friend void operator<<(ostream&,fraction);
};
void operator>>(istream &i,fraction &s1)
{
  cout<<"Numerator: ";
  i>>s1.numerator;
  cout<<"Denominator: ";
  i>>s1.denominator;
}
void operator<<(ostream &o,fraction s2)
{
 o<<s2.numerator<<"/"<<s2.denominator;
 o<<endl;
}
int main()
{
    fraction f1,f2;
    cout<<"Enter first fraction value "<<endl;
    cin>>f1;
    cout<<"f1++ : ";
    f1++;
    cout<<(f1);
    cout<<"++f1 : ";
    ++f1;
    cout<<(f1);
    cout<<"Enter Second fraction value "<<endl;
    cin>>f2;
    f2=++f1;
    cout<<"f2=++f1"<<endl;
    cout<<"f1 : ";
    cout<<f1;
    cout<<"f2 : ";
    cout<<f2;
    f2=f1++;
    cout<<"f2=f1++"<<endl;
    cout<<"f1 : ";
    cout<<f1;
    cout<<"f2 : ";
    cout<<f2;
    return 0;
}
