#include <iostream>
#include <cstring>
#include<cmath>

using namespace std;

class ZooAnimal
{
private:
    char *name;
    int BarNumber;
    int weightDate;
    int weight;
public:
    void Create(char * M, int DW,int BarNO,int Wh)
    {
        this->name = M;
        this->weightDate = DW;
        this->BarNumber = BarNO;
        this->weight = Wh;
    }
    void Print()
    {
        cout << this->name << " " << this->BarNumber << " " << this->weightDate << " " << this->weight << endl;
    }
    void Destroy ();
    char* reptName ();
    int daysSinceLastWeighed (int today)
    {
        int startday, thisday;
        thisday = today/100*30 + today - today/100*100;
        startday = weightDate/100*30 + weightDate - weightDate/100*100;
        if (thisday < startday)
            thisday += 360;
        return (thisday-startday);
    }
};

void ZooAnimal::Destroy ()
{
    delete [] name;
}

// -------- member function to return the animal's name
char* ZooAnimal::reptName ()
{
    return name;
}

int main()
{
    ZooAnimal za;
    za.Create("Eagle", 10, 100,60);
    za.Print();
    cout << za.daysSinceLastWeighed(150) << endl;

    ZooAnimal bozo;
    bozo.Create ("bozo", 408, 1027, 400);
    cout << "The animal is called " << bozo.reptName() << endl;

    return 0;

}