#include<iostream>
using namespace std;
int main()
{
	int sal; 
	int tax;
	cout<<"enter salary"<<endl;
	cin>>sal;
	if(sal>0 && sal<=150000)
	{
		tax=0;
	}
	else if(sal>150000 && sal<=300000)
	{
		tax=sal*0.1;
	}
	else if(sal>300000 && sal<=500000)
	{
		tax=sal*0.2;
	}
	else if(sal>500000)
	{
		tax=sal*0.3;
	}
	else if(sal<=0)
	{
		cout<<"enter a valid input"<<endl;
	}
	else
	{
		cout<<"enter a valid input"<<endl;
	}
	cout.precision(2);
	cout<<"income tax:"<<fixed<<tax;
	return 0;
}
