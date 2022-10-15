#include<iostream>
#include<math.h>
using namespace std;
class powerneg
{    
	int a,b;
	float c;

	public:
	float pow(int a,int b);
	
	void indata()
	{   
		cout<<"enter value of base-";
	   cin>>a;
	   cout<<"enter value of power (+/-)-";
	   cin>>b;
	   c=pow(a,b);
	   cout<<"the value of "<<a<<" to the power "<<b<<" is="<<c;
	   
	 }
	 
};	 
	   
		
float powerneg:: pow(int x,int n)
{    
    if(n==0)
    {
		return 1;
     }
      else
      return (x*pow(x,n-1));		
}
int main()
{    
	powerneg p;
	p.indata();
	   return 0;
}
