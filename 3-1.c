//3-1

#include <stdio.h>

int main(void){

	int a,b; //変数定義
	printf("input number A.\n"); //input number Aと出力
	scanf("%d",&a); //aを入力

	printf("input number B.\n"); //input number Bと出力
	scanf("%d",&b); //bを入力

	if(a>b){ //A>Bのとき
		printf("%d\n",a); //aを出力
	}

	else{ //それ以外のとき
		printf("%d\n",b);//bを出力
	}

	return 0;
}