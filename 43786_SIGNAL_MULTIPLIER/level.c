#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

extern int64_t asm_code(int64_t, int64_t);

int main(int argc, char *argv[]) {
	//setup variabels for in and out
	int64_t in_a, in_b, out, out_asm;

	printf(" IN.A   IN.B       OUT\n");
	printf("╔════╗ ╔════╗ ╔═════╦═════╗\n");
	//run 20 times
	for(int i = 0; i < 20; i++) {
		//generade random input
		in_a = random() % 100;
		in_b = random() % 100;
		//calculate solution
		out = in_a * in_b;
		out_asm = asm_code(in_a, in_b);
		printf("║%3ld ║ ║%3ld ║ ║%4ld ║%4ld ║\n", in_a, in_b, out, out_asm);	
    	}
    	printf("╚════╝ ╚════╝ ╚═════╩═════╝\n");
}
