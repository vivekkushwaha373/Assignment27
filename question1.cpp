#include<iostream>
using namespace std;
class Complex
{
    int real,complex;
    public:
    void setvalue(int a,int b)
    {
      real=a;
      complex=b;
    }
    void display()
    {
        cout<<real<<endl<<complex<<endl;
    }
    Complex operator+(Complex C)
    {
        Complex temp;
        temp.real=real+C.real;
        temp.complex=complex+C.complex;
        return temp;
    }
    Complex operator-(Complex C)
    {
      Complex temp;
        temp.real=real-C.real;
        temp.complex=complex-C.complex;
        return temp;  
    }
    Complex operator*(Complex C)
    {
      Complex temp;
        temp.real=real*C.real;
        temp.complex=complex*C.complex;
        return temp;
    }
    friend bool operator==(Complex,Complex);
    
};
bool operator==(Complex S,Complex C)
{
if(S.real==C.real && S.complex==C.complex)
return 1;
else
return 0;

}
int main()
{
    Complex s1,s2,s;
    int a;
    s1.setvalue(2,3);
    s2.setvalue(5,6);
    s=s1+s2;
    s.display();
    s=s1-s2;
    s.display();
    s=s1*s2;
    s.display();
    cout<<(s1==s2);
    
    return 0;
}