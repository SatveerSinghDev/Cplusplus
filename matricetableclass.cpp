#include<iostream>
using namespace std;
class tablem
{  
	int row,col;
	public:
	
	void indata()
	{   
		cout<<"enter the number of rows-";
        cin>>row;
        cout<<"enter the number of columns-";
        cin>>col;
        
     }   
	
	void showtable()
	{   
		for(int i=0;i<row;i++)
      { 
		 { 
		   cout<<"\n";
		 }
    for(int j=0;j<col;j++)
    {  
      cout<<"\t";
      cout<<"*";
    }  
   }
 }
 
};
int main()
{   
   tablem t;
   t.indata();
   t.showtable();
   return 0;
        
}    
