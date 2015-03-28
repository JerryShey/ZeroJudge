#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b;
	while(scanf("%d %d", &a, &b) != EOF){
		int num = 1, i;
		for(i = a; i > a - b; i--){
			num *= i;
		}
		for(i = 1; i <= b; i++){
			num /= i;
		}
		printf("%d\n", num);
	}
	return 0;
}

