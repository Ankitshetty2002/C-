#include <iostream>

using namespace std;

class Employee

{

    public:

    string name;

    string shift;

    float salary;

    void insert(string n,string h,float s)

    {

        name=n;

        shift=h;

        salary=s;

    }

    void display()

    {

        cout<<name<<" "<<shift<<" "<<salary<<"\n";

    }

};

int main()

{

    Employee e1;

    Employee e2;

    Employee e3;

    e1.insert("Manohar","day",35000);

    e2.insert("Ramesh","day",40000);

    e3.insert("Prasad","night",45000);

    e1.display();

    e2.display();

    e3.display();

    return 0;

}


    
