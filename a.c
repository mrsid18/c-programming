#include<stdio.h>
#include<math.h>
void main(){
	int i, n, j;
	printf("enter a no.: ");
	scanf("%d",&n);

	for(i=0;i>=0;i++)
	{
		if(n>0){
		if(pow(2,i)>n){
			printf("1 ");
			n=n-pow(2,i-1);
		
			for(j=i-2;j>=0;j--)
			{
			
				if(pow(2,j)>n)
					printf("0 ");
				else
					continue;
			}i=-1;
					}
		}
		else break;
	}
}
