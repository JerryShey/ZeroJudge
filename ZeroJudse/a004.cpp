#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int year;
	while(scanf("%d", &year)!=EOF){
		if(year%4)
			printf("���~\n");
		else{
			if(year%100){
				printf("�|�~\n");
			}
			else{
				if(year%400)
					printf("���~\n");
				else
					printf("�|�~\n");
			}
		}
	}
	return 0;
}

