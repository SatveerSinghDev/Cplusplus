#include<iostream>
using namespace std;
class summ
{ 
	int x;
	public:
	
	void indata()
	{    
		cout<<"enter positive integer-";
        cin>>x;
        cout<<"sum="<<sum(x); 
        
     }    
      
      int sum(int x);
      
};      

 int summ:: sum(int n)
 {
   if(n!=0)
   return n+sum(n-1);
   else
   return 0;
  }
   
int main()
{  
	summ s;
	s.indata(); 
	 return 0;
}	 	 
	     
