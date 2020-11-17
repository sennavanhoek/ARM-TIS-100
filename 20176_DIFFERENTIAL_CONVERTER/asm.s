////////////////////////
// REG -> MEM PROBLEM
// IN.A = X1
// IN.B = X2
// OUT.P = [X0]
// OUT.N = [X0, #8]
////////////////////////
   .section  ASM_CODE,"ax"
    .align 3
    .global asm_code
    .type asm_code, @function

asm_code:
	SUB X3, X1, X2
	SUB X4, X2, X1
	STP X3, X4, [X0]
	RET
