#include<stdio.h>
#include<conio.h>
#define MAX 6
int top= -1;stack[MAX],i,val;

//Creating PUSH Operation
void push (int num)
{
	if(top==MAX -1)
	{
		printf("OVERFLOW \n");
	}
	else
	{
		top=top+1;
		stack[top]=num;
	}
}

//Creating POP Operation
void pop()
{
	if(top==-1)
	{
		printf("UNDERFLOW \n");
	}
	else
	{
		val=stack[top];
		printf("The poped element is %d \n",val);
		top=top-1;
	}
}

//Displaying the Stack
void display()
{
	printf("Top is %d \n ",top);
	printf("The Stack is \n");
	for(i=0;i<=top;i++)
	{
		printf("%d \t", stack[i]);
	}

	printf("\n");
}

void main()
{
	clrscr();

	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	push(60);
	display();
	pop();
	pop();
	display();

	getch();
}