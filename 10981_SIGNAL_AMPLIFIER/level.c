#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>


extern int64_t asm_code(int64_t);

int main(int argc, char *argv[]) {
	//setup variabels for in and out
	int64_t in_a, out_a, out_asm;
	
	printf(" IN.X     IN.A\n");
	printf("╔════╗ ╔════╦════╗\n");
	//run 20 times
	for(int i = 0; i < 20; i++) {
		//generade random input
		in_a = random() % 100;
		//calculate solution
		out_a = in_a*2;
		out_asm = asm_code(in_a);
		printf("║%3ld ║ ║%3ld ║%3ld ║\n", in_a, out_a, out_asm);	
    	}
    	printf("╚════╝ ╚════╩════╝\n");
}
