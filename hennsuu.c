#include <stdio.h>

int main(){

	int a[10],i;
	int sum=0;

	
	for(i=0; i<10; i++){
		scanf("%d",&a[i]);
		
		sum +=a[i];
	
		int max=a[0];
		int min=a[0];

		if(a[i]>max){
		max=a[i];
		}

		if(a[i]<min){
		min=a[i];
		}
	}


	printf("sum: %d\n",sum);
	printf("max: %d\n",max);
	printf("min: %d",min);

	return 0;

}