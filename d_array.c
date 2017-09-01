#include<stdio.h>
#include<memory.h>
#include<malloc.h>

void main(){
	int *p, i;
	printf("\n\nProgram for dynamic pointer\n\n");
	int n;
	printf("enter the no. of elements for an array.");
	scanf("%d",&n);
	fflush(stdin);

//	int value;
	int *head;
	p=(int *)malloc(sizeof(int));
	head=p;

	printf("\n\naddress of head = %u and p = %u\n",head, p);

	printf("\nEnter the elements of array.\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",p);
	//	*p=value;
		fflush(stdin);
		p++;
	//	printf("\naddress of p = %u",p);
	}

	printf("\nElements Entered\n\n");
	for(i=0;i<n;i++)
		printf("%d\n",*(head+i));
}

