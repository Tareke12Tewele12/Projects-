// 10 values Sorted in Asending order Using Pointer.

#include<iostream>
#include<conio.h>

using namespace std;
int *SortAsc(int *p, int size);
   int main()
    {
     int arr[]={5,55,8,0,11,72,92,100,999,1};
     int *p=SortAsc(arr,10);
     int i;
     for(i=0;i<10;i++)
       cout<<*(p+i)<<endl;

     getch();
     return 0;

    }

int *SortAsc(int *p, int n)
     {
    int i,j;
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            if(*(p+j)<*(p+i))
              {
                int temp=*(p+j);
                *(p+j)=*(p+i);
                *(p+i)=temp;
                }
   return p;
    }
