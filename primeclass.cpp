#include<iostream>
#include<math.h>
using namespace std;
class primeno
{
int n,i,f;
public:
void check()
{
f=0;
cout<<"enter a number:";
cin>>n;
for(i=2;i<=sqrt(n);i++)
{
if(n%i==0)
{
f=1;
break;}
}
if(f==0)
cout<<"prime number\n";
else
 cout<<"not a prime number\n";
}
};
int main()
{
	primeno p;
	p.check();
	return 0;
}
