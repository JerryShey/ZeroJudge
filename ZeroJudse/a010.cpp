#include <stdio.h>
#include <stdlib.h>
int p[1000000] = {2,3,5};
int p_cnt = 3;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void build_p();
int is_crime(int);

int main(int argc, char *argv[]) {
	build_p();
	int num, i, h = 0;
	while(scanf("%d", &num)!=EOF){
		h = 0;
		for(i = 0;p[i] <= num;){
			if(num % p[i] == 0){
				h++;
				num = num / p[i];
			}
			else{
				if(h == 1){
					printf("%d * ", p[i]);
					i++;
					h = 0;
				}
				else if(h > 1){
					printf("%d^%d * ", p[i], h);
					i++;
					h = 0;
				}
				else{
					i++;
					h = 0;
				}
			}
		}
		if(h == 1)
			printf("%d\n", p[i]);
		else
			printf("%d^%d\n", p[i], h);
	}
	return 0;
}

void build_p(){
	int i, j = 2, k;
	for(i = 7; i <= 1000000; i+=j){
		if(is_crime(i)){
			p[p_cnt] = i;
			p_cnt++;
		}
		j = 6 - j;
	}
}
int is_crime(int a){
	int i;
	for(i = 0; i < p_cnt && p[i]*p[i]<=a;i++){
		if(a%p[i] == 0){
			return 0;
		}
	}
	return 1;
}
