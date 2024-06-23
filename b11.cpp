#include<stdio.h>

float lonnhat(float a[], int n){
	float min = a[0];
	for(int i = 0; i < n; i++){
		if(a[i] < min) min = a[i];
	}
	return min;
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
	float min = lonnhat(a, n);
	printf("%.2f", min);
}
