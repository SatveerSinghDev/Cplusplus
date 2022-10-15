#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
using namespace std;
class sine
{
int n;
float accu,term,deno,x,sinval,sinx;
public:
void invalue()
{
cout<<"enter value of x\n";
cin>>x;
x=x*(3.142/180.0);
sinval=sin(x);
cout<<"enter the accuracy\n";
cin>>accu;
}
void cal()
{
term=x;
sinx=term;
n=1;
do
{
deno=2*n*(2*n+1);
term=-term*x*x/deno;
sinx=sinx+term;
n=n+1;
}while(accu <=fabs(sinval-sinx));
cout<<"sum of the sine series =\n"<<sinx;
}
};
int main()
{
	sine s;
	s.invalue();
	s.cal();
	return 0;
}	














