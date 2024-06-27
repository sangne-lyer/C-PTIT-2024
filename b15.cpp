#include<stdio.h>

char *doichuthuong(char s[]){
	for(int i = 0; s[i] != 0; i++){
		if(s[i] >= 'A' && s[i] <= 'Z'){
			s[i] += 32;
		}
	}
	return s;
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
	char *res = doichuthuong(s);
	printf("%s", res);
}
