#include<stdio.h>

main()
{
    int a[100];
    int *p;
    p = &a;
    
	int n,i;
    printf("Enter size of array = ");
    scanf("%d",&n);
   
    for(i=0;i<n;i++){
    	printf("a[%d] = ",i);  
    	scanf("%d",&a[i]);
	}
	
	for(i=0; i<n;i++){
		printf("square = %d\n",*(p+i)**(p+i));
	}
}
