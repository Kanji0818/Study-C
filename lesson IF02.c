#include <stdio.h>

int main() {

	int x;
	printf("input x's score\n");
	scanf("%d", &x);

	int y;
	printf("input y's score\n");
	scanf("%d", &y);

	if(x > y){
		printf("x: %d\n", x);
	}

	if(y > x){
		printf("y: %d\n", y);
	}

	return 0;

}