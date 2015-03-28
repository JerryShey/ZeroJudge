#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer1, answer2, temp;
	int a, b, c;
	while(scanf("%d %d %d", &a, &b, &c)!=EOF){
		temp = b*b-4*a*c;
		if(temp<0)
			printf("No real root\n");
		else if(temp == 0){
			printf("Two same roots ");
			answer1 = (-b)/(2*a);
			printf("x=%d\n", answer1);
		}
		else{
			printf("Two different roots ");
			temp = sqrt(temp);
			answer1 = (temp - b)/(2*a);
			answer2 = -(temp + b)/(2*a);
			printf("x1=%d , x2=%d\n", answer1, answer2);
		}
	}
	return 0;
}

