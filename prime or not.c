#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,check;
	printf("enter the no to check if it prime or not\n");
	scanf("%d",&n);
	check=primeornot(n,n/2);
	if(check==1)
	{
		printf("%d is a prime no",n);
	}
	else
	{
		printf("%d is not a prime no",n);
	}
	
}
int primeornot(int n,int i)
{
	if(n==1||n==0)
	{
		printf("%d it is not a composite no and\t",n);
		return 0;
	}
	else if(i==1)
	{
		return 1;
	}
	else if(n%i==0)
	{
		return 0;
	}
	else
	{
		return primeornot(n,i-1);
	}
	
}
