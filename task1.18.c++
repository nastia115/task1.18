 Задача21
#include <math.h>
#include <iostream>
#include <cmath>
using namespace std;
int main() 
{    
float x1,y1;
	cout<<"x1:";
	cin>>x1;
	cout<<"y1:";
	cin>>y1;
	   float x2,y2;
	cout<<"x2:";
	cin>>x2;
	cout<<"y2:";
	cin>>y2;
	    float x3,y3;
	cout<<"x3:";
	cin>>x3;
	cout<<"y3:";
	cin>>y3;
	    float a,b,c;
	a= sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	b=sqrt(pow(x2-x3,2)+pow(y2-y3,2));
	c=sqrt(pow(x3-x1,2)+pow(y3-y1,2));
	cout<<"a:"<<a<<endl;
	cout<<"b:"<<b<<endl;
	cout<<"c:"<<c<<endl;
	    float S,p,P;
	p=(a+b+c)/2;
	S=sqrt(p*(p-a)*(p-b)*(p-c));
	P=a+b+c;
	cout<<"S:"<<S<<endl;
	cout<<"p:"<<p<<endl;
	cout<<"P:"<<P<<endl;
}
Задача 30
#include <math.h>
#include <iostream>
#include <cmath>
using namespace std;
int main() 
{    
double a, degrees;
	cout<<"a:";
	cin>>a;
	degrees=(a*180)/3,14;       
	cout<<"degrees:"<<degrees<<endl;
}
