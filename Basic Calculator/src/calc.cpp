/*basic Calculator*/
#include<iostream>
#include<math.h>
using namespace std;
#include "calc.h"

Calc::Calc(int val)
{
	number_of_inputs=val;
}

void Calc::calculate()
{
	int input[number_of_inputs];
	int flag=1;
	char op;
	do
	{
		for (int i=0; i<number_of_inputs; i++)
		{
		cout<<"Enter the input variable: ";
		cin>>input[i];
		}
		cout<<"Enter the operator: ";
		cin>>op;
		if(op=='^')
			print(pow(input[0], input[1]));
		else if (op=='+')
			print(input[0] + input[1]);
		else if (op=='*')
			print(input[0] * input[1]);
		else if (op=='/')
			print(input[0]/input[1]);
		else
			cout<<"Invalid Operator!";
		cout<<endl<<"Want to continue? (Press 1 to continue, any other key to exit): ";
		cin>>flag;
	}while(flag==1);
}
void Calc::print(int num)
{
	cout<<"The result is: "<< num;
}
