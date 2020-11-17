#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

extern int64_t asm_code(int64_t*, int64_t);

int main(int argc, char *argv[]) {
	int64_t runs = 20;
	//setup variabels for in and out
	int64_t in[runs];
	int64_t out;
	int64_t out_asm;
	
	
	for(int i = 0; i < runs; i++) {
		//generade random input
		in[i] = random() % 100;
	}	

	printf("  IN       OUT\n");
	printf("╔════╗ ╔════╦════╗\n");
	//run runs times
	for(int i = 0; i < runs; i++) {
		out = 0;
		if (i != 0){
			if ( abs(in[i] - in[i-1]) > 9 ) {
				out = 1;
			}
		}
		out_asm = asm_code(in, i);
		printf("║%3ld ║ ║%3ld ║%3ld ║\n", in[i], out, out_asm);	
    	}
    	printf("╚════╝ ╚════╩════╝\n");
}
