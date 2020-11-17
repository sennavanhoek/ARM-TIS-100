#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>


extern int64_t asm_code(int64_t*, int64_t, int64_t);

int main(int argc, char *argv[]) {
	//setup variabels for in and out
	int64_t in_x, in_a, out_asm;
	//setup list to return values with
	int64_t list[2] = {0,0};
	
	printf(" IN.X   IN.A     OUT.X       OUT.A\n");
	printf("╔════╗ ╔════╗ ╔════╦════╗ ╔════╦════╗\n");
	//run 20 times
	for(int i = 0; i < 20; i++) {
		//generade random input
		in_x = random() % 100;
		in_a = random() % 100;
		out_asm = asm_code(list, in_x, in_a);
		//print output
		printf("║%3ld ║ ║%3ld ║ ║%3ld ║%3ld ║ ║%3ld ║%3ld ║\n", in_x, in_a, in_x, list[0], in_a, list[1]);	
    	}
    	printf("╚════╝ ╚════╝ ╚════╩════╝ ╚════╩════╝\n");
}
