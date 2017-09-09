#include<stdio.h>
#include<malloc.h>
#include<curses.h>

void main(){
	int *p, *head, n;
	printf("\nEnter the no. of elements for an array: ");
	scanf("%d",&n);
	p=(int *)malloc(sizeof(int));
	head=p;
	int i=0;
	printf("\n\nEnter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",p);
		p++;
	}

	printf("\n\nElements of the Array\n\n");
	printf("\nPos.  Element\n");
	for(i=0;i<n;i++)
	{
		printf("%2d\t %d\n",i+1, *(head+i));
	}

//	printf("Choose anyone of the following option:\n");
//	printf("1.delete an element.\n2.insert an element\n3.insert an element in between\n4.sort in ascending order\n5.sort in descending order\n0.Exit\n");
//	int choice;
//	scanf("%d",&choice);

/*	printf("\nEnter the position of the element to delete: ");
	int pos;
	scanf("%d",&pos);
	for(i=pos-1;i<n-1;i++)
	{
		*(head+i)=*(head+i+1);
	}
	*(head+n-1)=0;

	printf("\n\nprinting the elements\n\n");
	for(i=0;i<n-1;i++)
		printf("%2d\t %d\n",i+1, *(head+i));

	printf("\nEnter the element to insert at the end: ");
	int emt;
	scanf("%d",&emt);
	*p=emt;
	n++;
	printf("\nArray after entering the element.\n\n");
	for(i=0;i<n;i++)
		printf("%2d\t %d\n",i+1, *(head+i));

        printf("\nEnter the position at which u want to enter the element: ");
int pos, emt;
scanf("%d",&pos);
printf("\nEnter the element: ");
scanf("%d",&emt);
for(i=n;i>=pos-1;i--)
{
	*(head+i+1)=*(head+i);
}
*(head+pos-1)=emt;
n++;
for(i=0;i<n;i++)
printf("%2d\t %d\n",i+1, *(head+i));
*/

printf("\nSorting Array in ascending order.\n");
printf("\nPosition Element\n");
int j, temp;
for(i=n-1;i>0;i--)
{
	for(j=0;j<i;j++)
	{
		if(*(head+j)>*(head+j+1))
		{
			
			temp=*(head+j);
			*(head+j)=*(head+j+1);
			*(head+j+1)=temp;
		}
	}
}

for(i=0;i<n;i++)
printf("%2d\t %d\n",i+1, *(head+i));

}
