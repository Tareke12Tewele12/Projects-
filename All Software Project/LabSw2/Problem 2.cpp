// Prompt the user to input ten integer values, Maximum, Minimum and Occurance

#include <iostream>

using namespace std;


int main()
{
    int Max, Min, Occur, Occur_Max;
    int arr[10] = {0};
    int arr_value[10] = { 0 };

    cout << "Enter the list of 10 values" << endl;
    int i;
    for (i = 0; i < 10; i++)
    {
        cin >> arr[i];
        for (int k = 0; k < i; k++)
        {
            if (arr[i] == arr[k])
            {
                arr_value[k]++;
                break;
            }
        }
    }
    Max = arr[0];
    Min = arr[0];

    Occur_Max = arr_value[0];
    Occur = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << arr_value[i];
    }

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > Max)
            Max = arr[i];
        if (arr[i] < Min)
            Min = arr[i];
        if (arr_value[i] > Occur_Max)
        {
            Occur = i;
            Occur_Max = arr_value[i];
        }

    }


    if (Occur_Max == 0)
    {
        cout << "all the values are occured just 1 time:" << endl;
        cout << "minimum value : " << Min << "maximum value :" << Max << endl;
    }
    else
        cout << "minimum value : " << Min << "maximum value :" << Max << "mod (most occured value)" << arr[Occur] << endl;


}
*/
