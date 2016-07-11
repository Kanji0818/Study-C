#include <stdio.h>

int main (void){

	int x,y,z;

	printf("input English score.\n");
	scanf("%d",&x);

	printf("input Japanese score.\n");
	scanf("%d",&y);

	printf("input Math score.\n");
	scanf("%d",&z);


	printf("Your score average is %d.\n",x+y+z/3);

	return 0;	
}