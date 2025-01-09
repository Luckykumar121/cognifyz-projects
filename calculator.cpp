#include<iostream>
#include<iomanip>
using namespace std;
template <class T>
void calc(T n1,T n2)
{
	T result;
	int x,y;
	x=n1;   //conversion float to int 
	y=n2;   //conversion float to int 
	char operation;
	cout<<"Entr operation which you want"<<endl;
	cout<<"(+) for Addition"<<endl;
	cout<<"(-) for Subtraction"<<endl;
	cout<<"(*) for Multiplication"<<endl;
	cout<<"(/) for Divison"<<endl;
	cout<<"(%) for Remainder"<<endl;
	cin>>operation;
	switch(operation)
	{
	case '+':
		result=n1+n2;
		cout<<"Addition:"<<result;
		break;
	case '-':
		result=n1-n2;
		cout<<"Subtraction:"<<result;
		break;
	case '*':
		result=n1*n2;
		cout<<"Multiplication:"<<result;
		break;
	case '/':
		if(n2==0)
		{
			cout<<"Mathematical error";
		}
		else
		{
		result=n1/n2;
		cout<<"Division:"<<std::fixed<<std::setprecision(9)<<result;     //setprecision use for  floating value division
	    }
		break;
	case '%':
		result=x%y;
		cout<<"Remainder:"<<result;
		break;
	default:
		cout<<"You Entered a wrong operation";

	}
}
int main()
{
	double a,b;
	cout<<"Enter the first number"<<endl;
	cin>>a;
	cout<<"Enter the second number"<<endl;
	cin>>b;
	//call calculator function
	calc(a,b); 
}