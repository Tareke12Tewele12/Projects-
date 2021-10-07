#include <iostream>

using namespace std;

class Area
{
   private:
      double length,width;

   public:
      double SetArea(void);
      void SetLength( double len );
      void SetWidth( double wid );

};

double Area::SetArea(void)
{
   return length * width;
}

void Area::SetLength( double len )
{
   length = len;
}
void Area::SetWidth( double wid )
{
   width = wid;
}

int main() {
   Area Rect;
   double AreaRect = 0.0;
   cout<< " Enter Value of Length and width to Cal Area of Rectangle"<<endl;
   double x,y;
   cin>>x>>y;

   Rect.SetLength(x);
   Rect.SetWidth(y);

   AreaRect = Rect.SetArea();
   cout << "The Area of the Rectangle is : " << AreaRect <<endl;

}
