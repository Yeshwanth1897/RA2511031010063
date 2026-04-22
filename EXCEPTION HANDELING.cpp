#include<iostream>
using namespace std;
int main(){
int a,b;
cout<<"enter first number:";cin>>a;
cout<<"enter second number:";cin>>b;
try
{
	if(b==0)
	throw b;
	cout<<"result="<<a/b;
}
catch(int x)
{
	cout<<"error:division by zero not allowed";
}
return 0;
}
