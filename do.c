#include <stdio.h>
// 2つの整数値を読み込んで、
//小さいほうの数以上で大きいほうの数以下の全整数を加えた値を表示する
int main(){

	int sum = 0;//合計
	int p = 0;
	int max, min;
	int a,b;
	
	printf("input 2 seisuu.\n");
	printf("seisuu a : "); scanf("%d",&a);
	printf("seisuu b : "); scanf("%d",&b);

	if (a > b){  // 大きいほうの判定に使用するif文
		max = a; min = b;
	}
	else {
		max = b; min = a;
	}


	do {
		sum = sum + (min + p);
		p = p + 1;
	} while ((min + p) <= max);

	printf("%d ijyou %d ika no zennseisuu no wa ha %d desu.\n",min, max, sum);

	return 0;
}
