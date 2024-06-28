#include<stdio.h>

int kiemtrasapxep(float a[], int n){
	int checker = 1;
	for(int i = 0; i < n-1; i++){
		if(a[i] > a[i+1]){
			checker = 0;
			break;
		}
	}
	return checker;
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
	float a[1000];
	int n = 0;
	doctep(a, n);
	if(kiemtrasapxep(a, n)) printf("\nYES");
	else printf("NO");
	return 0;
}
