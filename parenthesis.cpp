#include <iostream>
using namespace std;
int main()
{
	char exp[100], stack[100];
	int top = -1;
	cout<<"Aditi Ukharde";
	cout<<"Roll No:258";
	cout<<"Enter Expression:";
	cin>> exp;
	for(int i =0;exp[i] == '\0';i++ )
// Push opening brackets
if (exp[i] == '(' || exp[i] == '{'||exp[i] == '[')
{
	++top;
	stack[top] = exp[i];}
//check closing brackets
else if (exp[i] == ')')
{
	if (top == -1|| stack[top] != '(')
	{
		cout<<"	Not well parenthesized";
		return 0;
	}
	top--;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
}
else if (exp[i] == '}')
{
	if (top == -1 || stack[top] != '{' )
	{
		cout << "not well parenthesized";
		return 0;
	}
	top--;
	}
	else if (exp[i] == '[')
{
	if (top == -1 || stack[top] != ']')
	{
		cout << "not well parenthesized";
		return 0;
	}
	top--;
	}
	if(top == -1)
cout<<"Not well parenthesized";
else
cout<<"not well parenthesized";
return 0;
}
