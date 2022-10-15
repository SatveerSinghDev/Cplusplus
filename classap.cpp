#include<iostream>
using namespace std;
class sumofap
{    
	  int a,d,n,term,sum;
	  public:
	  
	  sumofap()
	  {    
		  term=sum=0;
	}  
	     int sumcal()
	    {   
			term=a; 
			  for(int i=0;i<n;i++)
			     {   
					 sum=sum+term;
					 term=term+d;
				 }
				 
			
				return sum;
		}	
	  
	  void indata()
	  {    
		      cout<<"enter the first term and the common difference=";
              cin>>a>>d;
              cout<<"enter the number of terms=";
              cin>>n;
              sum=sumcal();
           
        }      
	   
		
		void showdata()
		{     
			cout<<"the sum is="<<sum;
		}	   
};		
				 
int main()
 {    
    sumofap a;
    
     a.indata();
     a.showdata();
 return 0;
 }      
