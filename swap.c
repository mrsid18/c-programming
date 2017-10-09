#include<stdio.h>

void swap(int *a, int *b){
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
}

void main(){
	int a=10, b=20;
	printf("\n\nBefore swapping\n\na=%d  b=%d\n\n",a,b);
	swap(&a, &b);
	printf("After swapping\n\na=%d  b=%d\n\n",a, b);
}

