 
//Truth Table with three  logical inputs

#include <iostream>
#include<cmath>
#include<conio.h>
using namespace std;

bool Truth_Table()
      {
    
    bool output;
    int p, q, t;
    cout <<"AND and OR Operator for three inputs"<<endl;
    cout<< "Logical AND :"<<endl;
    cout << "| a | b | c |output"<<endl;
    for(p = 0; p<=1; p++)
      {
        for (q = 0; q<=1; q++)
            {
                for (t = 0; t<=1; t++){
                    output = p && q && t;
                    cout << "| "<< p<< " | "<< q<<" | "<< t<<" | "<<output <<endl;
                }
            }
    }
    
   cout<< " Logical OR " <<endl;
    for(p = 0; p<=1; p++)
      {
        for (q = 0; q<=1; q++)
            {
                for (t = 0; t<=1; t++){
                    output= p || q || t;
                    cout << "| "<< p<< " | "<< q<<" | "<< t<<" | "<<output <<endl;
                }
            }
    }
        
   return 0;
}

int main()
{
  cout<<"Truth table for AND and OR Logical Operators"<<endl;
	Truth_Table();
    return 0;
}