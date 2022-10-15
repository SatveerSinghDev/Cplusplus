#include<iostream>
using namespace std;
class charc
{
int i,c;
char s[100],b;
public:
void indata()
{c=0;
cout<<"enter the string:";
cin.getline(s,100);
cout<<"enter the character you want to check:";
cin>>b;
}
void check()
{
for (i=0;s[i]!='\0';i++)
{
	if((s[i]==b||(s[i]==b-32)||(s[i]==b+32)))
    c++;
}
if(c==0)
cout<<"the character is not present" ;
else
{
cout<<"the charcter is present\n";
cout<<"and number of occurences of "<<b<<" is :"<<c;
}
}
};
int main()
{
	charc c;
	c.indata();
	c.check();
	return 0;
}	
