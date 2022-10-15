#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class stringpermu
{   
	char s[40];
	int temp;
	public:
	
	stringpermu()
	{temp=0;}
	 
	void indata()
	{   
		cout<<"enter the string-";
        gets(s);
        
     }  
     
     void permutat()
     {   
		 cout<<"all possible substrings are - \n";
   
        for(int i=1;i<=strlen(s);i++)
        {  
		    for(int j=0;j<=strlen(s)-i;j++)
             { 
			     temp=i+j-1;
           
                for(int k=j;k<=temp;k++)
              {
				 cout<<s[k];
			  }
              cout<<"\n"; 
             
          
          }
      }      
             
   }
   
} s;   
  
int main()

{   
   s.indata();
   s.permutat();
   return 0;
}   
