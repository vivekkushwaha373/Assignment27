#include<iostream>
using namespace std;
class Numbers
{
    int x,y,z;
    public:
      void operator-()
      {
         x=-x;
         y=-y;
         z=-z;

      }
      void setvalue(int x,int y,int z)
      {
        this->x=x;
        this->y=y;
        this->z=z;
      }
      void display()
      {
        cout<<"x="<<x<<endl<<"y="<<y<<endl<<"z="<<z<<endl;
      }
};
int main()
{
  Numbers c1;
  c1.setvalue(5,6,7);
  cout<<"Displaying values before negation "<<endl;
  cout<<"--------------------------------- "<<endl;
  c1.display();
  -c1;
  cout<<"Displaying values after negation "<<endl;
  cout<<"-------------------------------- "<<endl;
  c1.display();
  return 0;
}