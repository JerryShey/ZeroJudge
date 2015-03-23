#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int M, D, S;
	while(scanf("%d %d", &M, &D)!=EOF){
		S = (M*2+D)%3;
		switch(S){
			case 0:
				printf("´¶³q\n");
				break;
			case 2:
				printf("¦N\n");
				break;
			case 3:
				printf("¤j¦N\n");
				break;
		}
	}
	return 0;
}

