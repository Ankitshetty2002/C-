#include <iostream>

using namespace std;

int main()

{

    float n1,n2,n3;

    cout<<"Enter three numbers: ";

    cin>>n1>>n2>>n3;

    if(n1>n2)

      {

         if(n1>n3)

          cout<<"\n Largest number is "<<n1;

          else

          cout<<"\n Largest number is "<<n3;

      }

      else

      {

          if(n2>n3)

          cout<<"\n Largest number is "<<n2;

          else

          cout<<"\n Largest number is "<<n3;

      }

      return 0;

}
