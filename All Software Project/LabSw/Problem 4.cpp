 
  //Multiplication of Table

#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std;

int table(int n)
{
    int t=1;
   
  cout<<"Table of " <<n << " is: " <<endl;
 
  for(int i=1; i<=10; i++)
  {
     t=n*i;
   
     cout<<n <<" * " <<i <<" = " <<t <<endl;
   
  }
 
  return 0;
}
int main()
{

  int m=0;

  cout<<"Enter Number:"<<endl;;
  cin>>m;

  table(m);

}