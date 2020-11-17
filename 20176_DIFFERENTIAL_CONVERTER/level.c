#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

extern int64_t asm_code(int64_t*, int64_t, int64_t);

int main(int argc, char *argv[]) {
	//setup variabels for in and out
	int64_t in_a, in_b, out_p, out_n, out_asm;
	//setup list to return values with
	int64_t list[2] = {0,0};

	printf(" IN.A   IN.B     OUT.P       OUT.N\n");
	printf("╔════╗ ╔════╗ ╔════╦════╗ ╔════╦════╗\n");
	//run 20 times
	for(int i = 0; i < 20; i++) {
		//generade random input
		in_a = random() % 100;
		in_b = random() % 100;
		//calculate solution
		out_p = in_a - in_b;
		out_n = in_b - in_a;
		out_asm = asm_code(list, in_a, in_b);
		printf("║%3ld ║ ║%3ld ║ ║%3ld ║%3ld ║ ║%3ld ║%3ld ║\n", in_a, in_b, out_p, list[0], out_n, list[1]);	
    	}
    	printf("╚════╝ ╚════╝ ╚════╩════╝ ╚════╩════╝\n");
}
