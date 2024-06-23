#include<stdio.h>

float lonnhat(float a[], int n){
	float max = a[0];
	for(int i = 0; i < n; i++){
		if(a[i] > max) max = a[i];
	}
	return max;
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
	float max = lonnhat(a, n);
	printf("%.2f", max);
}
