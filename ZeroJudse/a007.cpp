#include <stdio.h>
#include <stdlib.h>
int p[1000000]= {2, 3, 5};
int p_cnt = 3;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void build_p();
int is_prime(int);

int main(int argc, char *argv[]) {
	int num;
	build_p();
	while(scanf("%d", &num)!=EOF){
		if(is_prime(num)){
			printf("質數\n");
		}
		else
			printf("非質數\n");
	}
	return 0;
}
void build_p(){
	int i, j = 2;
	for(i = 7; i <= 50000; i+=j){
		if(is_prime(i)){
			p[p_cnt] = i;
			p_cnt++;
		}
		j = 6 - j;
	}
}
int is_prime(int a){
	int i;
	for(i = 0; i < p_cnt && p[i]*p[i]<=a;i++){
		if(a%p[i] == 0){
			return 0;
		}
	}
	return 1;
}
