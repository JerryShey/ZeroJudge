#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num, r,d;
	while(scanf("%d", &num)!=EOF){
		int ary[5][num];
		int i, j;
		for(i = 0; i < num; i++){
			for(j = 0; j < 4; j++)
				scanf("%d", &ary[j][i]);
		}
		for(i = 0; i < num; i++){
			d = ary[1][i]-ary[0][i];
			r = ary[1][i]/ary[0][i];
			if(ary[2][i]-ary[1][i] == d)
				printf("%d %d %d %d %d\n"< ary[0][i], ary[1][i], ary[2][i], ary[3][i], ary[3][i]+d);
			else
				printf("%d %d %d %d %d\n"< ary[0][i], ary[1][i], ary[2][i], ary[3][i], ary[3][i]*r);
		}
	}
	return 0;
}

