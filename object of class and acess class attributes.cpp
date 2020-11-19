#include <iostream>

using namespace std; 

class Student
 
{

    public:

    string name;

    int rollno;
 
    float per; 

};
 
int main()

{

    Student std;

    std.name= "Ankit Pramod Shetty";

    std.rollno= 44;

    std.per= 8.76;

    cout<<"\n Student's name:"<<std.name;

    cout<<"\n Student's roll no:"<<std.rollno;

    cout<<"\n Student's per:"<<std.per;

    return 0;

}
