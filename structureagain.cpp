#include <iostream>
using namespace std;

typedef struct employee 
{
    int eID;
    char grade;
    float salary;
}em;
int main()
{
    em aschandel;
    aschandel.eID=20222022;
    aschandel.grade='A';
    aschandel.salary=1000000000;
    cout<<"The employee ID of AS Chandel is : "<<aschandel.eID<<endl;
    cout<<"The grade of AS Chandel is : "<<aschandel.grade<<endl;
    cout<<"The Salary of AS Chandel is : "<<aschandel.salary<<endl;
    return 0;
}