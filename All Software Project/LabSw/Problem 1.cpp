// Area and Circumference of circle

#include <iostream>
#include<cmath>
#include<conio.h>
using namespace std;

     // problem1
 
 
  float cirumference(float D)
  {
      float Cf,pi =3.14,area;
       area =pi/4*D*D;
       cout<<"the area of circle is  "<<area<<endl;
       Cf =pi*D;
       cout<<"the cirumference of the circle is "<<Cf<<endl;
       return 0;
  }
int main()
{

   float diameter;
    cout << "Enter a radius for Area of circle!" << endl;
    cin>> diameter;
    
    cirumference(diameter);
    return 0;
}