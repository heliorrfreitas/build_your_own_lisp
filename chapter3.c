#include<stdio.h>

typedef struct{
	float x;
	float y;
}	point;

int add_together(int x, int y){
	int result = x + y;
	return result;
}


void print_string_5_times_for_loop(char* string){
	int i = 0;
	for(; i < 5; i++)
		printf("%s\n", string);
}

void print_string_5_times_while_loop(char* string){
	int i = 0;
	while(i < 5){
		printf("%s\n", string);
		i += 1;
	}
}

void print_string_n_times(char* string, int n){
	int i = 0;
	for(; i < n; i++)
		printf("%s\n", string);
}

int main(int argc, char** argv){
	float result = 0.0;
	int number = add_together(5, 10);
	point p;
	p.x = 10.5;
	p.y = 3.4;

	result = p.x * number;
	printf("Using struct value and making math with it, result: %5.2f\n", result);

	print_string_5_times_for_loop("For loop!");
	print_string_5_times_while_loop("While loop!");
	print_string_n_times("Print string N times. N = 2", 2);

	return 0;	
}
