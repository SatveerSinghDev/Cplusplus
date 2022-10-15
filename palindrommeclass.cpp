#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
class palin
{
int i,j,l,f;
char a[50];
public:
void checkpalin()
{ l=strlen(a);
   for(i=0;a[l]!='\0';++l);
   for(i=0,(j=l-1);(i<l/2);i++,j--)
   {
   if(a[j]==a[i])
   f=1;
   else
   f=0;
   }
  if(f==1)
  cout<<"the string is a palindrome";
  else
  cout<<"the string is not a palindrome";
}
void indata()
{
  char c[50];
  cout<<"enter a string:";
  cin>>c;
  strcpy(a,c);
}
};
int main()
{
  palin p;
  p.indata();
  p.checkpalin();
  return 0;
}
