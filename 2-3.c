#include <stdio.h>

int main (void){

	double x,y;

	printf("input x.\n");
	scanf("%lf",&x);

	printf("input y.\n");
	scanf("%lf",&y);

	printf("+ %f\n- %f\n* %f\n/ %f\n",x+y,x-y,x*y,x/y);

	return 0;
}