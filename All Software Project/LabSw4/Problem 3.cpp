
#include<iostream>
#include<cstring>
#include <cmath>
#include<complex>
using namespace std;

class Complex
     {
 private:
    double Real;
    double Imag;
     public:

    void AcceptValue()
   {
       cin>>Real;
      cout<<"Then Imaginary part"<<endl;
       cin>>Imag;
   }

    void Sum(Complex C1, Complex C2)
    {
        Real=C1.Real+C2.Real;
        Imag=C1.Imag+C2.Imag;
    }
    
    void DisplayValues()
    {
        cout<<Real<<"+"<<Imag<<"i"<<endl;
    }
    
    };
int main()
    {
        Complex compx1,compx2,compx3;
        
        cout<<"Enter Real and Imaginary part of first complex number"<<endl;
        compx1.AcceptValue();
        cout<<"Enter real and imaginary part of second complex number"<<endl;
        compx2.AcceptValue();
        cout<<"Summation of the Two Complex Numbers is:"<<endl;
         compx3.Sum(compx1,compx2);
         compx3.DisplayValues();
    return 0;
    }
