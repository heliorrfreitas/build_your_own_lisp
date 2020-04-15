#include<stdio.h>

typedef struct{
	float x;
	float y;
}	point;

int add_together(int x, int y){
	int result = x + y;
	return result;
}


void print_string_5_times(char* string){
	int i = 0;
	for(; i < 5; i++)
		printf("%s\n", string);
}

int main(int argc, char** argv){
	float result = 0.0;
	int number = add_together(5, 10);
	point p;
	p.x = 10.5;
	p.y = 3.4;

	result = p.x * number;
	printf("Result: %5.2f\n", result);

	print_string_5_times("Hello, World!");


	return 0;	
}
