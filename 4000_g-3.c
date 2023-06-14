#include<stdio.h>

swap(int *n1,int *n2)
{
	int *temp;
	temp = *n1;
	*n1 = *n2;
	*n2 = temp;

	printf("A = %d\n",*n1);
	printf("B = %d",*n2);
}
main()
{
	int a,b;
	printf("Enter value of A = ");
	scanf("%d",&a);
	printf("Enter value of B = ");
	scanf("%d",&b);
	swap(&a,&b);
}
