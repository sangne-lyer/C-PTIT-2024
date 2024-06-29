#include<stdio.h>
#include<math.h>

float ex(float x, float c){
	int gt = 1;
	float sum = 0;
	for(int i = 1; (pow(x, i) / gt) <= c; i++){
		gt *= i;
		sum += pow(x, i) / gt;
	}
	return 1 + sum;
}

int main(){
	float x, c;
	scanf("%f %f", &x, &c);
	printf("%f", ex(x, c));
}
