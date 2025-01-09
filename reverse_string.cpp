#include<iostream>
#include<stdio.h>
#define max 100       //sizeof your string
using namespace std;
void string_reverse(char str[max],int i,int j)
{
	i=0;        //initialize i
	while(str[i]!='\0')  //traverse string at the end
	{
		i++;
	}
	j=0; //initialize j
	while(j<i)
	{
		char a;
		i--;
		a=str[j];
		str[j]=str[i];
		str[i]=a;
		j++;
	}
}
int main()
{
	char str[max];
	int i,j;
	cout<<"enter your string "<<endl;
	gets(str);
	string_reverse(str,i,j);
	cout<<"after reversel your string:"<<endl;
	cout<<str;
	return 0;
}