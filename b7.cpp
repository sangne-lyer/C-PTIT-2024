#include<stdio.h>

int demso(float a[], int n, float x){
	int count = 0;
	for(int i = 0; i < n; i++){
		if(a[i] == x) ++count;
	}
	return count;
}

void doctep(float a[], int &n, float &x){
	FILE *f;
	f = fopen("input.txt", "r");
	fscanf(f, "%d", &n);
	for(int i = 0; i < n; i++){
		fscanf(f,"%f", &a[i]);
	}
	fscanf(f, "%f", &x);
	fclose(f);
	
}

int main(){
	int n;
	float x;
	float a[100];
	doctep(a, n, x);
	int count = demso(a, n, x);
	printf("%d", count);
	return 0;
}
