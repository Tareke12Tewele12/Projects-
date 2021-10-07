#include<iostream>
using namespace std;
   int main()
    {
     int array[5],i;
     int *p=array;
     cout << " Enter the five numbers" << endl;
         for (int counter = 0; counter < 5; counter++)
         {
             cin >> *(p + counter);
         }
         cout << "\n" << endl;

     cout<<"Your numbers are:\n";
     for(i=0;i<5;i++)
        cout<<array[i]<<endl;

      int *newptr[array[i]];
      for(int k = 0; k<8; k++)
      {
          newptr[k] = &array[k];
      }
     for(int j = 0; j<8; j++)
     {
         for(; j > -1 && *newptr[j] < *newptr[j+1]; j--)
         {
             int *temp = newptr[j+1];
             newptr[j+1] = newptr[j];
             newptr[j] = temp;
         }
     }
     int lookuplocation;
     for(int i = 0; i<8; i++)
     {
         cout << *newptr[i];

         if(newptr[i] == &array[0])
         {
             cout << *newptr[i] << endl;

             cout << "\nSuccess!\n";
             lookuplocation = 0;
         }
     }
     for(int k = 0; k<8; k++)
     {
         cout << "Element " << k << ": " << *newptr[k] << endl;
         cout << "Element " << k << ": " << newptr[k] << endl;
     }
     return 0;

    }