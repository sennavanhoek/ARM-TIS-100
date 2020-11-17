////////////////////////
// REG -> MEM PROBLEM
// IN.A = X1
// IN.B = X2
// OUT = [X0]
// OUT points to the next position in the array
////////////////////////
   .section  ASM_CODE,"ax"
    .align 3
    .global asm_code
    .type asm_code, @function

asm_code:
	CMP X1, X2
	CSEL X3, X1, X2, GE
	STR X3, [X0], #8
	CSEL X3, X1, X2, LT
	STR X3, [X0], #8
	STR XZR, [X0], #8
	RET
