#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,p=0;
    cout <<"enter the number of times the pattern is to be repeated"<<endl;
    cin>>n;
    cout<<"the required pattern is as fallows"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<(pow(11,p))<<endl;
        p++;
    }
    return 0;
}
