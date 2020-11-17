#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

extern void asm_code(int64_t**, int64_t*, int64_t);

int main(int argc, char *argv[]) {
	int64_t runs = 20;
	//setup variabels for in and out
	int64_t in[runs];
	int64_t out_s_asm[] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
	int64_t out_l_asm[] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
	int64_t out_s[] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
	int64_t out_l[] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
	
	//setup list to return values with
	int64_t* out_lists_asm[2];
	out_lists_asm[0] = out_s_asm;
	out_lists_asm[1] = out_l_asm;
	
	for(int i = 0; i < runs; i++) {
		//generade random input
		if (random() % 3){
			in[i] = random() % 100;
		} else {
			in[i] = 0;
		}
	}
	asm_code(out_lists_asm, in, runs);
	
	//generate results
	int64_t sum = 0;
	int64_t length = 0;
	int s_index = 0;
	int l_index = 0;
	for(int i = 0; i < runs; i++) {		
		if (in[i] == 0){
			out_s[s_index] = sum;
			out_l[l_index] = length;
			sum = 0;
			length = 0;
			s_index ++;
			l_index ++;
		} else {
		sum += in[i];
		length ++;
		}
	}
	printf("  IN      OUT.S       OUT.L\n");
	printf("╔════╗ ╔════╦════╗ ╔════╦════╗\n");
	//run runs times
	int i = 0;
	for(; i < runs; i++) {
		if (out_s[i] == -1){
			break;
		}
		printf("║%3ld ║ ║%3ld ║%3ld ║ ║%3ld ║%3ld ║\n", in[i], out_s[i], out_lists_asm[0][i] , out_l[i], out_lists_asm[1][i]);	
    	}
    	for(; i < runs; i++) {
		printf("║%3ld ║ ║    ║    ║ ║    ║    ║\n", in[i]);	
    	}
    	printf("╚════╝ ╚════╩════╝ ╚════╩════╝\n");
}
