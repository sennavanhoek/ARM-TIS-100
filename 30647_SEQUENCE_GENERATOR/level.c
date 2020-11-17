#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

extern int64_t* asm_code(int64_t*, int64_t, int64_t);
//╩ ╦ ╚ ╝ ╔ ╗ ║ ═
int main(int argc, char *argv[]) {
	int runs = 10;
	//setup variabels for in and out
	int64_t in_a, in_b;
	int64_t out_list[runs*4];
	//setup list to return values with
	int64_t out_list_asm[runs*4];
	int64_t *pointer = out_list_asm;
	
	printf(" IN.A   IN.B      OUT\n");
	printf("╔════╗ ╔════╗ ╔════╦════╗\n");
	//run runs times
	for(int i = 0; i < runs; i++) {
		//generade random input
		in_a = random() % 100;
		in_b = random() % 100;
		//calculate solution
		out_list[i*3] = in_a > in_b ? in_a : in_b;
		out_list[i*3+1] = in_a < in_b ? in_a : in_b;
		out_list[i*3+2] = 0;
		pointer = asm_code(pointer, in_a, in_b);
		printf("║%3ld ║ ║%3ld ║ ║%3ld ║%3ld ║\n", in_a, in_b, out_list[i], out_list_asm[i]);	
    	}
    	for(int i = runs; i < runs*3; i++) {
		printf("║    ║ ║    ║ ║%3ld ║%3ld ║\n", out_list[i], out_list_asm[i]);	
    	}
    	printf("╚════╝ ╚════╝ ╚════╩════╝\n");
}
