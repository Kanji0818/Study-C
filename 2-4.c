//演習2-4

#include <stdio.h>
#include <math.h>

double culcurate (double q, double r); //グローバル宣言
double culcurate2 (double s, double t);


int main (void){

	double x,y; //変数定義

	printf("input v0(m/s).\n"); //input v0(m/s) と出力
	scanf("%lf",&x); //v0を入力

	if(x==0){  //v0=0のとき
		printf("vy = 0.\n");
	} 

	else if(x>0){
		printf("input radian.\n"); //input radianと出力
		scanf("%lf",&y); //radian を入力

		double result = culcurate (x,y);

		printf("vy = %f\n",result);
	}
	
	else if(x<0){
		printf("input radian.\n"); //input radianと出力
		scanf("%lf",&y); //radian を入力
			if(y>=0){
				y=y;
			}
			else{
				y=-y;
			}

		double result = culcurate2 (x,y);

		printf("vy = %f\n",result);
	}

	return 0;
}

double culcurate (double q, double r){
	double z;
	z = q * sin(r);
	return z;
}

double culcurate2 (double s, double t){
	double p;
	p = -s * sin(t);
	return p;
}