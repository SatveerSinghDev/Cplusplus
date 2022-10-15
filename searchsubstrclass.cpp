#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class stringsub
{   
	int i,j,pos;
	char s[40],subs[20];
	public:
	
	 stringsub()
	 {    
		 j=pos=0;
		 
	}
	
	void indata()
	{   
		cout<<"enter the string - ";
       gets(s);
      cout<<"enter the substring - ";
      gets(subs)	;
     
    }   
	
	void csubstr()
	{ 
		for (i=0;s[i]!='\0';i++)
   {
     if(s[i]==subs[j])
     {
        pos=i+1;
        
       while(s[i]==subs[j])
         {
             i++;
             j++;
          }
            
            if(subs[j]=='\0')
              {
                 cout<<"search for substring is successful at position "<<pos;

              }
              
          else
           {
              i=pos;
              pos=0;
           }
       }
   }
 
 
        if(pos==0)
          cout<<"search for substring is unsuccessful";
          
          
 } 
 
}s;   
int main()
{
  s.indata();
  s.csubstr();
  return 0;
 
   
  
          

}

