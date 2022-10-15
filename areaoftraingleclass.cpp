#include<iostream>
#include<math.h>
using namespace std;
class triangle
{ int a,b,c;
  float x,s;
  public:
void calc()
{ if(a==b&&b==c)
 {
	 x=0.432*a*a;
 cout<<"triangle is equilateral\n";
 cout<<"area of triangle is\n "<< x;
 }
 else
 {
	 s=(a+b+c)/2;
 x=sqrt(s*(s-a)*(s-b)*(s-c));
 cout<<"area of triangle is\n "<< x;
 }
}
void insid()
{
cout<<"enter first side of the trinagle:\n";
cin>>a;
cout<<"enter second side of the triangle:\n";
cin>>b;
cout<<"enter third side of the triangle:\n";
cin>>c;
}	
};
int main()
{    triangle t;
	t.insid();
	t.calc();
	return 0;
}	
