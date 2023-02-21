#include<iostream>
using namespace std;
class Matrix
{
int a[3][3];
public:
void operator-(Matrix &C)
{
    cout<<"Enter matrix Element (3*3): "<<endl;
    for(int j=0;j<3;j++)
    {
    for(int i=0;i<3;i++)
    {
        cin>>C.a[j][i];
    }
    }

}
void operator-()
{
    for(int j=0;j<3;j++)
    {
    for(int i=0;i<3;i++)
    {
        a[j][i]=-a[j][i];
    }
    }
}
friend void operator-(Matrix,int);

};
void operator-(Matrix s1,int s2)
{
    cout<<endl<<"Matrix is: "<<endl;
     for(int j=0;j<3;j++)
    {
    for(int i=0;i<3;i++)
    {
        cout<<s1.a[j][i]<<" ";
    }
    cout<<endl;
    } 
    cout<<endl;
}
int main()
{
    Matrix s1;
    s1-s1;
    s1-7;
    -s1;
    s1-7;
    return 0;
}