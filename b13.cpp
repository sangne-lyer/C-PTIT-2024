#include<stdio.h>

int tongchuthuong(char s[]){
	int sum = 0;
	for(int i = 0; s[i] != 0; i++){
		if(s[i] >= 'a' && s[i] <= 'z') ++sum;
	}
	return sum;
}

void doctep(char s[]){
	FILE *f;
	f = fopen("input.txt", "r");
	fgets(s, 1000, f);
	fclose(f);
}

int main(){
	char s[1000];
	doctep(s);
	int un_capslock = tongchuthuong(s);
	printf("%d", un_capslock);
}
