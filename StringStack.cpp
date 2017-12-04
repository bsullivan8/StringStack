#include "TrueStack.h"
#include <string.h>


std::string pop()
{
	if(isEmpty())
		return "empty Stack";
	else
	{
		std::string temp = stack[0];
		for(int i=1; i<stack.size();i++)
			stack[i-1] = stack[i];
		return temp;
	}

}

void push(std::string x)
{
	if(isEmpty())
		stack[0]=x;
	else
	{
		for(int i =0;i<stack.size();i++)
			{
				if(stack[i]==NULL)
					stack[i]=x;
			}
	}
}

bool isEmpty()
{
	if(stack[0]==NULL)
		return true;
	else
		return false;
}
