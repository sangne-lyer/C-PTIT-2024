#include<stdio.h>

float tongduong(float a[], int n){
	int sum = 0;
	for(int i = 0; i < n; i++){
		if(a[i] >= 0) sum += a[i];
	}
	return sum;
}

void doctep(float a[], int &n){
	FILE *f;
	f = fopen("input.txt", "r");
	fscanf(f, "%d", &n);
	for(int i = 0; i < n; i++){
		fscanf(f, "%f", &a[i]);
	}
	fclose(f);
}

int main(){
	float a[100];
	int n;
	doctep(a, n);
	float sum = tongduong(a, n);
	printf("%.2f", sum);
	return 0;
}
