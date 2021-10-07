#include <iostream>

using namespace std;

enum scale {ounces, kilograms};

class ZooAnimal
{
private:
    char *name;
    int BarNumber;
    int weightDate;
    int weight;
    ZooAnimal *mother;
public:
    void Create (char*, int, int, int); // create function
    void Destroy (); // destroy function
    void changeWeight (int pounds);
    inline void changeWeightDate (int today){ this->weightDate = today; }
    char* reptName ();
    int reptWeight ();
    void reptWeight (scale which);
    inline int reptWeightDate ();
    int daysSinceLastWeighed (int today);
    void MotherOf (ZooAnimal& mother) {this->mother=&mother;}
};


void ZooAnimal::Create(char * M, int DW,int BarNO, int Wh)
{
            this->name = M;
            this->weightDate = DW;
            this->BarNumber = BarNO;
            this->weight = Wh;
}

inline int ZooAnimal::reptWeightDate()
{
    return this->weightDate;
}

char* ZooAnimal::reptName ()
{
    return name;
}

int main()
{
    ZooAnimal child_Lion, mother_Lion;
    child_Lion.Create("Cub", 10, 203, 40);
    mother_Lion.Create("lioness", 1502, 90, 110);
    child_Lion.MotherOf(mother_Lion);
    cout << "Cub's weightDate:" << child_Lion.reptWeightDate()<< endl;
    cout << "the mother of Cub's name is:" << mother_Lion.reptName() << endl;

}
