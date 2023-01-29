#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of elements to be inserted in the array"<<endl;
    cin>>n;
    int ar[n];
    cout<<"enter the elements of the array"<<endl;
    for ( int i = 0; i < n; i++)
    {
       cout<<"enter value for ar["<<i<<"]  "<<endl;
       cin>>ar[i];
    }
    cout<<"the elements of the array are as fallows"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"ar["<<i<<"]  = "<<ar[i]<<endl;
    }
    int*p=ar;
    cout<<p<<endl;
    cout<<ar<<endl;
    cout<<(p+2)<<endl;
    cout<<(ar+2)<<endl;
    cout<<*ar<<endl;
    cout<<*p<<endl;
    cout<<*(p+1)<<endl;
    cout<<*(ar+2)<<endl;
    return 0;
}
