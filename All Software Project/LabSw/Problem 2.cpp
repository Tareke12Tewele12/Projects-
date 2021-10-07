 
// Maximum and Minimum of number from the list of array.

#include <iostream>
#include<cmath>
#include<conio.h>
using namespace std;
double Max( int arr[],int size)
                   {
    int  i, max =0;
    for(i =0;i< size; i++)
    {
        if (arr[i]>max)
        {
            max =arr[i];
        }
    }
    return max;
                  }
double Min( int arr[],int size)
                   {
    int  i, min =3;
    for(i =0;i< size; i++)
    {
        if (arr[i]< min)
        {
            min =arr[i];
        }
    }
    return min;
                  }

int main()
{
    const int n =10;
    int values[n];     //{3,8,9,4,5,6};
    cout<<"Enter the Value for array from Keyboard"<<endl;
     for(int i=0;i<n; i++)
     {
      cin>>values[i];
     }
    cout<<" the maximum value of the table is = "<<Max(values,n)<<endl;
    cout<<" the minimum value of the table is = " <<Min(values,n)<<endl;
    return 0;
}
