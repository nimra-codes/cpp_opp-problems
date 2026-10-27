#include<iostream>
using namespace std;

class Student{
  private:
    string name;
    int rollNo;
  public:
    void display()
    {
      cout<<"\nName: "<<name<<endl;
      cout<<"Roll No.: "<<rollNo<<endl;
    }
 
    friend void setData(Student &obj);
};

void setData(Student &obj)
{
    obj.rollNo = 12;
    obj.rollNo ++;
}

int main()
{
    Student s;
    setData(s);
    s.display();
    return 0;
}