#include<stdio.h>

int main(){

	int x;
	printf("input Japanese Score\n");
	scanf("%d", &x);

	int y;
	printf("input Social Score\n");
	scanf("%d", &y);

	int z;
	printf("input Science Score\n");
	scanf("%d", &z);


	int A;
	A = (x+y+z)/3;

	printf("Your Average Score is %d \n", A);


}