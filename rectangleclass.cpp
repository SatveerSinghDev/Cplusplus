#include<iostream>
using namespace std;
class rectangle
{
float l,b,area,peri;
public:
void indata()
{
cout<<"enter length of rectangle:";
cin>>l;
cout<<"enter breadth of rectangle:";
cin>>b;
}
void cal()
{
area=l*b;
peri=(2*l)+(2*b);
cout<<"area="<<area<<"\nperimeter="<<peri;
}
};
 int main()
 {
	 rectangle r;
	 r.indata();
	 r.cal();
	 return 0;
 }	 
