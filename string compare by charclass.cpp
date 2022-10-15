#include<iostream>
#include<string.h>
using namespace std;
class comc
{
 
 char a[100],b[100];
 int c=0,i=0;
 public:
 void indata()
 {
 cout<<"\n ENTER THE STRING 1 :\n ";
 cin.getline(a,100);
 cout<<"\n ENTER THE STRING 2 :\n";
 cin.getline(b,100);
 }
 void stringcompare()
 {
 while(a[i]!='\0' && b[i]!='\0')
 {
  if(a[i]==b[i])
  {
   c++;
  }
  else
  { 
	    cout<<" THE TWO STRINGS ARE NOT EQUAL";
  }
  i++;
 }

 if(i==c)
 {
  cout<<"\nTHE GIVEN TWO STRINGS ARE ONE & SAME ";
 }
}
};
int main()
{
	comc c;
	 c.indata();
	c.stringcompare();
	return 0;
}	
