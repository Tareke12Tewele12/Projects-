#include <iostream>

using namespace std;

void Sort_Asc(int* size)
{
     int min = size[0];
     int max = size[0];
     int m = 10, index = 0;
     int Sorted_Asc[10] = { 0 };
     int k = -1;

     while (m--)
     {
         k++;
         for (int i = 0; i < 17; i++)
         {
             if (size[i] > max)
             {
                 max = size[i];
                 index = i;
             }
             if (k == 0)
             {
                if (size[i] < min)
                    min = size[i];
             }
         }
         size[index] = min;
         Sorted_Asc[k] = max;
         max = size[0];
         index = 0;
     }

     for (int i = 0; i < 17; i++)
         cout << Sorted_Asc[i] << " ";
}

int main()
{
    int size[17] = { 3, 7, 8, -66, -90, 7, -155, 9, -11, -914, 15,66,44,100, 0, 12,22  };
    Sort_Asc(size);
}
