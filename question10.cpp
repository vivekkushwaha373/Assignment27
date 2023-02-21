#include<iostream>
using namespace std;
class Matrix
{
int a[3][3];
public:
operator+()
{
   cout<<"Enter (3*3) matrix: "<<endl; 
   for(int j=0;j<3;j++)
    {
        for(int i=0;i<3;i++)
        {
            cin>>a[j][i];
        }
    }
   
}
Matrix operator+(Matrix s1)
{
    Matrix S;
    for(int j=0;j<3;j++)
    {
        for(int i=0;i<3;i++)
        {
            S.a[j][i]=s1.a[j][i]+a[j][i];
        }
    }

    return S;
}
operator-()
{
    cout<<"Matrix is : "<<endl;
    for(int j=0;j<3;j++)
    {
        for(int i=0;i<3;i++)
        {
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
};
int main()
{
    Matrix m1,m2,m3;
    +m1;
    -m1;
    +m2;
    -m2;
    m3=m1+m2;
    -m3;

    return 0;
}