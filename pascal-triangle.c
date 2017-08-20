#include<stdio.h>

void main(){
	int n, a[10]={0}, i, j, temp, s, temp1;
	printf("enter no. of lines: ");
	scanf("%d",&n);
	
	a[1]=1;a[2]=1;

	for(i=1;i<=n;i++)
	{
		for(s=1;s<=n-i+1;s++)
			printf(" ");

		temp=a[0];temp1=a[1];
		if(i==1)
			printf("  1");
                else{
		for(j=1;j<=i+1;j++)
		{

			a[j]=temp+temp1;
			
			printf("%2d",a[j]);
			temp=temp1;
			temp1=a[j+1];
		}
		}
		printf("\n");
	}
}
