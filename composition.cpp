#include<iostream>
using namespace std;

class Engine{
    public:
     Engine()
     {
        cout<<"\nEngine Constructor."<<endl;
     }

     void start()
     {
        cout<<"Start the engine."<<endl;
     }

     ~Engine()
     {
        cout<<"Engine destructor."<<endl;
     }
};

class Wheel{
    public:
      Wheel()
      {
        cout<<"\nWheel Constructor."<<endl;
      }
     void move()
     {
        cout<<"Move the car."<<endl;
     }

     ~Wheel()
     {
        cout<<"Wheel Destructor."<<endl;
     }

};

class Car{  //parent class
     public:
       Engine E;  //Create object of engine class
       Wheel W;   //Create object of wheel class
       Car()
       {
        cout<<"\nCar Constructor."<<endl;
       }
       void start()
       {
        cout<<"Start the car."<<endl;
       }
       ~Car()
       {
        cout<<"Car destructor."<<endl;
       }
    };

    int main()
    {
        Car C;
        C; 
        C.start();  
        C.E.start();   //Call the function of child class.
        C.W.move();
        C.W.~Wheel();
        
        return 0;
    }