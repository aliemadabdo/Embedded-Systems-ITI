#include <stdio.h>

int main(void){
	int x = 1, y = 2;
	int v = x+++ +y;
	int z = x++ + ++x;

	printf("v:%d , z:%d", v, z);
	return 0;
}
