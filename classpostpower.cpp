#include<iostream>
#include<math.h>
using namespace std;
class powerp
{   
	int i,j,k;
	public:
	int powerr( int i,int j);
	 
	void indata ()
	{    
		cout<<"enter the value of base-";
        cin>>i;
        cout<<"enter the value of power(only positive)-";
        cin>>j;
        k=powerr(i,j);
        cout<<"the value of "<<i<<" to the power "<<j<<" is="<<k;
    }	
    
} ;   	
    
    
int powerp::powerr(int x,int n)

{   int l;
        
       if (n>0)
  { 
	  l=x*(pow(x,n-1));
      return l;
   }
  
   else 
   return 1;
}

int main()
{   
	powerp p;
	p.indata();
	return 0;
}
   
   














