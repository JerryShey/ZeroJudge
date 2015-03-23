#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int year;
	while(scanf("%d", &year)!=EOF){
		if(year%4)
			printf("平年\n");
		else{
			if(year%100){
				printf("閏年\n");
			}
			else{
				if(year%400)
					printf("平年\n");
				else
					printf("閏年\n");
			}
		}
	}
	return 0;
}

