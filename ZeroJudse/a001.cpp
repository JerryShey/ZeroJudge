#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char s[99];
	while(scanf("%s", s)!=EOF){
		printf("hello, %s\n", s);
	}
	return 0;
}

