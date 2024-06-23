#include<stdio.h>

void doctep(int &n){
	FILE *f;
	f = fopen("input.txt", "r");
	fscanf(f, "%d", &n);
	fclose(f);
}
long long giaithua(int n){
	int res = 1;
	for(int i = 1; i < n; i++){
		res *= i;
	}
	return res;
}
int main(){
	int n;
	doctep(n);
	FILE *f;
	f = fopen("output.txt", "w");
	fprintf(f, "%lld", giaithua(n));
	fclose(f);
}
