//function to generate random number using rand function in std library

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int random_generator(void);

int main(void)
{
	int random;
	
	random=random_generator();
	printf("random number generated is:%d\n",random);
	return 0;
}


int random_generator(void)
{
	srand(time(0));
	return (rand()%9);
}


