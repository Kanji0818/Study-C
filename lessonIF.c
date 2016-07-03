#include <stdio.h>

int main() {
	int x;
	x = 3;


	// input y
	int y;
	scanf("%d", &y);

	if(y == 1){
		printf("y is 1\n");
	}
	else if(y == 2){
		printf("y is 2\n");
	}
	else if (y == 3){
		printf("y is 3\n");
	}
	

	else{
		printf("y is NOT %d\n", x);

	}
	return 0;
}
