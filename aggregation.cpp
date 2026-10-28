#include<iostream>
#include<string>
using namespace std;

class Addres{
    public:
     string addres; 
      Addres(string a)
      {
        addres = a;
      }
};

class Employe{
   private: 
    string name;
    Addres *add;

    public:
      Employe(string n, Addres *ad)
      {
        name = n;
        add = ad;
      }
    void display()
    {
        cout<<"\nName: "<<name<<endl;
        cout<<"Addres: "<<add->addres<<endl;
    }
   
};

int main()
{
    Addres a("Punjab, Pakistan"), b("RYK, Punjab, Pakistan");
    Employe e("Nimra", &a), e1("Zunair", &b);
    e.display();
    e1.display();
    return 0;
}