////////////////////////
// REG -> REG PROBLEM
// IN.A = X0
// OUT.A = X0
////////////////////////
   .section  ASM_CODE,"ax"
    .align 3
    .global asm_code
    .type asm_code, @function

asm_code:
	LSL X1, X1, #1
	RET
