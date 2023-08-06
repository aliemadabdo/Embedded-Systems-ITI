#include <stdio.h> 

void print_labels(int* p, int* q, int* r);

int main(void){
	int x = 1234, y = 2786, z = 0;
	int *p = &x, *q = &y, *r = &z;
	
	print_labels(p, q, r);
	
	printf("Swappin pointers\n");
	r = p;
	p = q;
	q = r;
	
	print_labels(p, q, r);
	
	return 0;
}

void print_labels(int* p, int* q, int* r){

	printf("x = %d \n", *p);
	printf("y = %d \n", *q);
	printf("z = %d \n", *r);
	printf("p = 0x%p \n", p);
	printf("q = 0x%p \n", q);
	printf("r = 0x%p \n", r);
	printf("*p = %d \n", *p);
	printf("*q = %d \n", *q);
	printf("*r = %d \n", *r);
}
