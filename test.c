#include <stdio.h>
#include <stdlib.h>

int getFBNQ_R(int num){
	if(num == 0 || num == 1){
		return num;
	}
	return getFBNQ_R(num-1)+getFBNQ_R(num-2);
}

int getFBNQ(int num){
	int a = 0;
	int b = 1;
	int c = 0;
	int i = 0;
	if(num == 0 || num == 1){
		return num;
	}
	for(i=0;i<num-1;i++){
		c = a+b;
		a = b;
		b = c;	
	}
	return c;
}
int main()
{

	int i = 0;
	for(i = 0; i<10;i++){
		//printf("%d\n", getFBNQ_R(i));	
		printf("%d\n",getFBNQ(i));
	}
	return 0;
}
