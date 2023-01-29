#include <iostream>
using namespace std;

union onechoice 
{
    int money;
    char lotteryletter;
    float cakes;
};
int main()
{
    union onechoice c;
    c.money=100;
    // c.lotteryletter='C';
    // c.cakes=10000;
    cout<<c.money<<endl;
    // cout<<c.lotteryletter<<endl;
    // cout<<c.cakes<<endl;
    return 0;
}