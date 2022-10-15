#include<iostream>
using namespace std;
class primenum
{
int i,j,c,f;
public:
void showprime()
{ c=0;
  f=0;	
cout<<"first 500 prime  numbers are\n";
for(i=3;i>0;i++)
{
for(j=2;j<=i/2;j++)
{
  if(i%j==0)
  {
  f=1; 
  break;
  }
}
  if(f==0)
  {
   cout<<"\n"<<c<<":-"<<i;
   c++;
  }
f=0;
  if(c==500)
  break;
 }
} 	
};	
int main()
{ primenum p;
	p.showprime();
	return 0;
}

