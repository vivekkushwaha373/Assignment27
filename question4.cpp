#include<iostream>
using namespace std;
class Time
{
    private:
    int Hours;
    int Minutes;
    int Seconds;
    public:
    void operator>>(Time y)
    {
       
        cout<<"Enter Hours : ";
        cin>>Hours;
        cout<<"Enter Minutes: ";
        cin>>Minutes;
        cout<<"Enter Seconds: ";
        cin>>Seconds;
        cout<<endl;
    }
    void operator<<(Time y )
    {
        cout<<"Hours   : "<<Hours<<endl;
        cout<<"Minutes : "<<Minutes<<endl;
        cout<<"Seconds : "<<Seconds<<endl;
    }
    void operator==(Time t2)
    {
        if((Hours==t2.Hours) && (Minutes==t2.Minutes) && (Seconds==t2.Seconds))
        cout<<"Times are same";
        else
        cout<<"Times are different";
    }
};
int main()  
{
   Time t1,t2;
   cout<<"Enter first Time "<<endl;
   cout<<"-----------------"<<endl;
   t1>>t1;
   cout<<"First Time "<<endl;
   t1<<t1;
   cout<<"Enter Second Time "<<endl;
   cout<<"-----------------"<<endl;
   t2>>t2;
   cout<<"Second Time "<<endl;
   t2<<t2;
   cout<<endl;
   t1==t2;  
    return 0;
}