#include<iostream>
#include<string.h>
using namespace std;
class clstring
{
 char s1[100],s2[100],i,j;
 public:
 void indata()
 { 
 cout<<"Enter first string: ";
 cin.getline(s1,100);
 cout<<"Enter Second string: ";
 cin.getline(s2,100);
 }
 void clst()
 {
 i=0;
 j=0;
  while(s1[i]!='\0')
  {
   i++;
  }
  while(s2[j]!='\0')
  {
   j++;
  }
 if(i!=j)
 {
 
 cout<<"strings are not equal\n";}
 else 
 cout<<"strings are equal";
 }
};
 int main()
 {
	 clstring l;
	 l.indata();
	 l.clst();
	 return 0;
  }	 
	 
	 
