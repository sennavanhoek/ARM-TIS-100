#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

extern int64_t asm_code(int64_t*, int64_t);

int main(int argc, char *argv[]) {
	//setup variabels for in and out
	int64_t in, out_g, out_e, out_l, out_asm;
	//setup list to return values with
	int64_t list[3] = {0,0,0};

	printf("  IN      OUT.G       OUT.E       OUT.L\n");
	printf("╔════╗ ╔════╦════╗ ╔════╦════╗ ╔════╦════╗\n");
	//run 20 times
	for(int i = 0; i < 20; i++) {
		//generade random input
		in = (random() % 4) - 2;
		//calculate solution
		out_g = in > 0 ? 1 : 0;
		out_e = in == 0 ? 1 : 0;
		out_l = in < 0 ? 1 : 0;
		out_asm = asm_code(list, in);
		//print results
		printf("║%3ld ║ ║%3ld ║%3ld ║ ║%3ld ║%3ld ║ ║%3ld ║%3ld ║\n", in, out_g, list[0], out_e, list[1], out_l, list[2]);	
    	}
    	printf("╚════╝ ╚════╩════╝ ╚════╩════╝ ╚════╩════╝\n");
}
