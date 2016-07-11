#include <stdio.h>

int main(){

	char a;
	scanf("%c",&a);

	char b;

	if(a < 'a'){
		b = a;
	}

	else {
		b = a - 32;
	}

	printf("%c\n",b);

	return 0;

}