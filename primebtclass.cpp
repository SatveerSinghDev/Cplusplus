#include<iostream>
#include<math.h>
using namespace std;
class prime
{
int a,b,i,f;
public:
void enterin()
{
cout<<"enter first number:\n";
cin>>a;
cout<<"enter second number:\n";
cin>>b;
cout<<"prime numbers between\n "<<a <<" and "<< b <<" are\n";
}
void findp()
{
while(a<b)
{
f=0;
for(i=2;i<=sqrt(a);++i)
{
if(a%i==0)
{
f=1;
break;
}
}
if(f==0)
cout<< a <<" ";
++a;
}
}
};
int main()
{
	prime b;
	b.enterin();
	b.findp();
	return 0;
}	
