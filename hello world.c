#include<stdio.h>

int main() {
	
	int x; //宣言
	scanf("%d", &x);   //代入

	int y;
	scanf("%d", &y);

	int z;
	//z = x + y;
	//z = x - y;
	//z = x * y;
	z = (x + y) / 2;
	z = z + 5;


	printf("z : %d \n",z);


	//printf("Hello World!\n");
	//pritntf("hello world\n");

 	return 0;
}
