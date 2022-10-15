#include<iostream>
#include<string.h>
using namespace std;
class print
{
 int i,f;
 char a[100];
 public:
 void instring()
 {
cout<<"enter the string:";
cin.getline(a,100);
 }
 void prettyprint()
 {
int b=strlen(a);
for(i=0;i<=b;i++)
{cout<<a[i];
f++;
if(f==1)
{cout<<"*";
f=0;}
}
}
};
int main()
{
	print p;
	p.instring();
	p.prettyprint();
	return 0;
}	
