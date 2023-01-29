#include <iostream>
using namespace std;
 enum example
    {
        a=9,b,c
    };
int main()
{
   example n=b;
   cout<<n<<endl;
   cout<<b<<endl;
   cout<<a<<endl;
   cout<<c<<endl;
   cout<<endl;
   cout<<"for second example"<<endl;
   cout<<endl;
   enum example2{p=3,q,r=9};
   example2 m=q;
   cout<<m<<endl;
   cout<<q<<endl;
   cout<<p<<endl;
   cout<<r<<endl;
   return 0;
}