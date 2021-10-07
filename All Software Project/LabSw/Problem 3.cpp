
  //Fibonacci Series

#include <iostream>
#include<cmath>
#include<conio.h>
using namespace std;

 int Fibo(int n)
 {
     int f1 =0,f2=1,nextfibo =0;
     for(int i =1;i<=n; ++i)
     {
         if( i==1)
         {
             cout<<f1<<" ";
             continue;
         }

         if(i ==2)
         {
             cout<<f2<<" ";
             continue;
         }
         nextfibo =f1+f2;
         f1 =f2;
         f2 =nextfibo;
         cout<<nextfibo<< "  ";
     }
     return 0;
 }
 int main()
 {

  int M;
  cout<<" Enter value of M to calculate Fibonacci series"<<endl;
  cin>>M;
  cout<<Fibo(M)<< "  "<<endl;
  return 0;
 }
