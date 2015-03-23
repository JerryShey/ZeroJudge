#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
	char s[999];
	while(gets(s)!=0){
		int i;
		for(i = 0; i < strlen(s); i++){
			printf("%c", s[i]-7);
		}
		printf("\n");
	}
	return 0;
}

