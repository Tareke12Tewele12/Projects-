// Problem 1 Simple Calculator

#include<iostream>
using namespace std;

int main()
{
   int Select;

  char Key;
   float num1, num2, x;

   cout << " Menu for mathematical opration:"
           "\n 1 =  Addition"
           "\n 2 =  Subtraction"
           "\n 3 =  Multiplication"
           "\n 4 =  Division"
           "\n 5 =  Modulus"<<endl;

   while (true)
   {
       cout << "Select one Mathematical opration:"<< endl;
       cin >> Select;
       cin.clear();
       if (Select > 5 || Select < 1)
       {
           cout << " operation out available menu list above. try to select a number beetween 1-5";
           continue;
       }

   switch (Select)
   {

      case 1:
         cout << "Enter two numbers to calculate addition: \n";
         cin >> num1 >> num2;
         x = num1 + num2;
         cout << "Sum  of the result is = " << x<<'\n';
         break;

      case 2:
         cout << "Enter two numbers to calculate Subtraction: \n";
         cin >> num1 >> num2;
         x = num1 - num2;
         cout << "Subtraction result is = " << x<<'\n';
         break;

      case 3:
         cout << "Enter two numbers to calculate Multiplication: \n";
         cin >> num1 >> num2;
         x = num1 * num2;
         cout << "Multiplication result is  = " << x<<'n'<<'\n';
         break;

      case 4:
         cout << "Enter Dividend:"<<'\n';
         cin >> num1;
         cout << "Enter Divisor: "<<'\n';
         cin >> num2;

         while(num2 == 0)
         {
            cout << "\n divisor must be out of zero."
                    "\n Enter divisor once again: "<<'\n';
            cin >> num2;
         }
         x = num1 / num2;
         cout << "\n Quotient = " << x<<'\n';
         break;

      case 5:
       long num3,num4,y;
         cout << "Enter two number to calculate Modulus: \n";
         cin >> num3>>num4;
         y = num3 % num4;
         cout<<" The result of Modulus is: "<<y<<endl;

      default: cout << "\n Something goes to Wrong!";
   }

       cout << "Do you want to proceed for another operation again? If yes, press y key" << endl;
               cin >> Key;
               cin.clear();
               if (Key == 'y')
                   ;
               else
                   break;
   }

 }