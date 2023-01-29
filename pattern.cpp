#include<iostream>
using namespace std;
int main()
{
    int n;
    cout <<"enter the number of times the pattern is to be repeated"<<endl;
    cin>>n;
    cout<<"the required pattern is as fallows"<<endl;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
