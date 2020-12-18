//why C is best
//square and cube functions implemented

int square();
int cube();

#include<stdio.h>

int main()
{
	int n,x,y;
	
	printf("Enter no \n");
	scanf("%d",&n);
	x=square(n);
	y=cube(n);
	
	 
	printf("This is square %d\n",x);
	
	printf("This is cube %d\n",y);
	
	printf("Thank you for using my program");
	
	return 0;
}

//this function caqlculates square
int square(int n)
{
	return n*n;
}

//cube branch
//this function calculates cube
int cube(int n)
{
	return n*n*n;
}

//this comment does nothing
//also does nothing 
//lets change something




