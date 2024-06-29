#include<stdio.h>

int tongchuso(char s[]){
	int count = 0;
	for(int i = 0; s[i] != 0; i++){
		if(s[i] >= '0' && s[i] <= '9') ++count;
	}
	return count;
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
	printf("%d", tongchuso(s));
	return 0;
}
