
#include<iostream>
#include<cstring>
#include <cmath>
using namespace std;

class Addition
{
     private:
        double Num1,Num2;

      public:

      double Sum;

    Addition(double x, double y)
       {
     Num1 =x;
     Num2 =y;
     Sum =x+y;

      }

     void setvalue(double x,double y)  // Setter to access the string name from Private class
           {
         Num1 =x;
         Num2 =y;

           }
      double getvalueX()   // Getter: to get the string name from the private class
      {
         return Num1;
      }
      double  getvalueY()
      {
          return Num2;
      }

};

int main()

{
    double X,Y;
    cout<<"Enter the Value of X and y for Summation"<<endl;
    cin>>X>>Y;

   Addition Numbers( X, Y);

   cout<<"The value of x: "<<Numbers.getvalueX()<<endl;
   cout<<"The vlaue of y: "<<Numbers.getvalueY()<<endl;
   cout<<"The summation of x and Y is : "<<Numbers.Sum<<endl;


}
