// C++ Program for Maximum Value of Pointer

#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std;

int *PMax(int arr[],int m);
int main()
      {
   int n,i,*p;
   cout<<"Enter number of data values"<<'\n';
   cin>>n;
   int arr[n];
   for(i=0;i<n;i++)
     {
   cout<<"Enter value: "<<i+1<<":"<<'\n';
   cin>>arr[i];
      }
   p=PMax(arr,n);
   cout<<"The max value is: "<<*p;
   getch();
   return 0;
     }

int *PMax(int data[],int m)

{
  int *max=data;
  int i;
 for(i=1;i<m;i++)
  {
   if(*max<*(max+i)) *max=*(max+i);
  }
  return max;
}