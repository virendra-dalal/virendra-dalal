// Simple addition Program
#include<stdio.h>
int add();

int main() {
	printf("R kuch he kya ? \n");
	printf("%d\n",add());
	return 0;
}

int add(){
	printf("sum for Number 1 to 10 is :");
	int sum = 0;
	for(int i=1;i<11;i++){
		sum += i;
	}
	return sum;
}
