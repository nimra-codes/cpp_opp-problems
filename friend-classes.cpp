#include<iostream>
using namespace std;

class X{
  private:
    friend class Y;
    int a, b, c;  
};

class Y{
    private:
   X obj;
   public:
   void setData()
   {
    obj.a = 23;
    obj.b = 25;
    obj.c = 16;
   }

   void display()
   {
    cout<<"\na= "<<obj.a<<endl;
    cout<<"b= "<<obj.b<<endl;
    cout<<"c= "<<obj.c<<endl;
   }
};

int main()
{
    Y y;
    y.setData();
    y.display();
    return 0;
}