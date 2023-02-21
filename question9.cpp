#include<iostream>
using namespace std;
class mystring
{
    char str[100];
    public:
    void operator!()
    {
     for(int i=0;str[i]!='\0';i++)
     {
        if(str[i]>=65 && str[i]<=90)
        str[i]=str[i]+32;
        else
        str[i]=str[i]-32;
     }
    }
    void setcharacter(char *ptr)
    {
        int i=0;
        for(i=0;ptr[i]!='\0';i++)
        {
            str[i]=ptr[i];
        }
         str[i]='\0';
    }
    void display()
    {
        cout<<str<<endl;
    }
};
int main()
{
    mystring s1;

    s1.setcharacter("viVeK");
    s1.display();
    !s1;
    s1.display();
    return 0;
}