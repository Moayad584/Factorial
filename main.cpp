#include <iostream>

using namespace std;

int main()
{int i,n,z=1;
do{
    cout <<" enter the no. to get its factorial"<<endl;
     cin>>n;}while(n<0);

     for(i=n;i>=1;i--)
     {
        z*=i;
     }
     cout<<endl;
    cout << z << endl;
    return 0;
}
