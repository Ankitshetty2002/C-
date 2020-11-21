#include <iostream>

using namespace std;

int main()

{

    int n1,n2,s;

    cout<<"Enter two values: ";

    cin>>n1>>n2;

    cout<<"\n Before swapping: ";

    cout<<"\n num1= "<<n1<<"\n num2= "<<n2;

    s=n1;

    n1=n2;

    n2=s;

    cout<<"\n After swapping: ";

    cout<<"\n num1= "<<n1<<"\n num2= "<<n2;

    return 0;

}