#include<stdio.h>
#include<malloc.h>
#include<curses.h>
void print();
void delete();
void insert();
void sort(char x);
int i=0, *head, n;
void main(){
	int *p;
	printf("\nEnter the no. of elements for an array: ");
	scanf("%d",&n);
	p=(int *)malloc(sizeof(int));
	head=p;
	//int i=0;
	printf("\n\nEnter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",p);
		p++;
	}

	printf("\n\nElements of the Array\n\n");
	printf("\nPos.  Element\n");
/*	for(i=0;i<n;i++)
	{
		printf("%2d\t %d\n",i+1, *(head+i));
	}*/
	print();

	printf("Choose anyone of the following option:\n");
ch:
	printf("1.delete an element.\n2.insert an element\n3.sort in ascending order\n4.sort in descending order\n0.Exit\n");
	int choice;
	scanf("%d",&choice);

	switch(choice)
	{
		case 1: delete();
			break;

		case 2: insert();
			break;

		case 3: sort('a');
			break;

		case 4: sort('d');
			break;

		case 0: break;

		default: printf("\nIncorrect choice\nPlease enter ur choice again...\n");
			 goto ch;
			 
	}
	return;


}
       void delete()
       {
       printf("\nEnter the position of the element to delete: ");
	int pos;
	scanf("%d",&pos);
	for(i=pos-1;i<n-1;i++)
	{
		*(head+i)=*(head+i+1);
	}
	*(head+n-1)=0;
	n--;
	print();
	}
 
        void print(){
	//printf("\n\nprinting the elements\n\n");
	for(i=0;i<=n-1;i++)
		printf("%2d\t %d\n",i+1, *(head+i));

	}

/*        void insert(){
	printf("\nEnter the element to insert at the end: ");
	int emt;
	scanf("%d",&emt);
	*p=emt;
	n++;
	printf("\nArray after entering the element.\n\n");
	for(i=0;i<n;i++)
		printf("%2d\t %d\n",i+1, *(head+i));*/

        void insert(){
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
         }

void sort(char x){
//printf("\nSorting Array in ascending order.\n");
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
if(x=='a')
{
for(i=0;i<n;i++)
printf("%2d\t %d\n",i+1, *(head+i));
}

else
{
	for(i=n-1;i>=0;i--)
		printf("%2d\t %d\n",i+1, *(head+i));
}
}


