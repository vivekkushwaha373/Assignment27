#include<iostream>
#include<cstring>
using namespace std;
class CString
{
public:
char str[20];
public:
void operator+(CString C)
{int i,y;
 char *ptr;
 for(i=0;str[i]!='\0';i++)
 {
    
    ptr[i]=str[i];
 }
 for(y=0 ;C.str[y]!='\0';y++)
 {

    ptr[i]=C.str[y];
    i++;
 }
 
 ptr[i]='\0';

cout<<ptr;

}
void setvalue(char *ptr)
{
strcpy(str,ptr);

}
operator==(CString C)
{
    if(strcmp(str,C.str)==0)
    cout<<"Strings are equal"<<endl;
    else
    cout<<"Strings are unequal"<<endl;
}
};
int main()
{  
  CString s1,s2;
  
  s1.setvalue("Hello");
  s2.setvalue("Veeru");
 
  cout<<s1.str;
  cout<<s2.str<<endl;
  s1==s2;
  s1+s2;
  return 0;
}