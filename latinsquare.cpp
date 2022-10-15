#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int main()
{
int n,i,j,z,c,x,k,l,p;
cout<<"enter no for whcih u want latinsquare:";
cin>>n;
int a[n][n];
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
  {
  a[i][j]=0;
  }
  }
  for(z=0,x=1;z<n;z++,x++)
  {
  for(c=0,k=x;c<n;c++,k++)
  {
  if(k<=n)
  {
  a[z][c]=k;
  }
  else
  {
  k=1;
  a[z][c]=k;
  }
  }
  }
  for(k=0;k<n;k++)
  {
  for(l=0;l<n;l++)
  {
  cout<<a[k][l]<<"\t";
  }
  cout<<"\n";
  }
cout<<"which row do u want to enter:";
cin>>k;
cout<<'\n';
for(p=0;p<n;p++)
cout<<a[k-1][p]<<'\t';
cout<<'\n';
cout<<"which column do u want to enter:";
cin>>k;
for(p=0;p<n;p++)
cout<<a[p][k-1]<<'\n';
return 0;
} 

  
