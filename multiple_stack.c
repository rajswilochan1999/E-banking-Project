#include<stdio.h>
#include<stdlib.h>
int stack[100];
int topA=-1;
int topB=100;
int res;
void pushA(int a)
{
  if(topA==topB-1)
  {
  	printf("Overflow");
	  }	
	  else
	  {
	  	topA++;
	  	stack[topA]=a;
	  }
}
int popA()
{
	if(topA==-1)
	{
		printf("Unerflow");
	}
	else
	{
		res=stack[topA];
		topA--;
	}
	return res;
}
void display_stackA()
{
	int i;
	if(topA==-1)
	{
		printf("Empty array");
	}
	else
	{
		for(i=topA;i>=0;i--)
		{
			printf("%d",stack[i]);
		}
	}
	
}
void pushB(int b)
{
	if(topB-1==topA)
	{
		printf("Overflow");
	}
	else{
		topB--;
		stack[topB]=b;
	}
}
int popB()
{
	if(topB==100)
	{
		printf("Underflow");
	}
	else
	{
		res=stack[topB];
		topB++;
	}
}
void display_stackB()
{
	int i;
	if(stack[topB==100])
	{
		printf("Empty array");
	}
	else
	{
		for(i=topB;i<100;i++)
		{
			printf("%d",stack[i]);
		}
	}
}
int main()
{
	int option,val;
	do
	{
	
	printf("Enter 1 to push in A\n 2 to push in B\n 3 to popA\n 4 to popB\n 5 to displayA \n 6 to displayB\n");
	scanf("%d",&option);
	switch(option){
	
	case 1:
		printf("Enter the no to be pushed");
		scanf("%d",&val);
		pushA(val);
		break;
	case 2:
		printf("Enter the no to be pushed");
		scanf("%d",&val);
		pushB(val);
		break;
	case 3:
		val=popA();
		printf("Element to be popped is 5");
	case 4:
		val=popB();
		printf("Element to be popped is 5");
	case 5:
		display_stackA();
		break;
	case 6:
		display_stackB();
		break;
	default:
		printf("Please a valid input");
	}
		
		
		
	
}
while(option!=7);
}

