#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
class length
{
int lth;
char l[100];
public:
void cal()
{
cout<<"enter a string:";
cin.getline(l,100);
for(lth=0;l[lth]!=0;lth++);
cout<<"length of string  is \n"<<lth;
}
};
int main()
{
	length l;
	l.cal();
	return 0;
}
