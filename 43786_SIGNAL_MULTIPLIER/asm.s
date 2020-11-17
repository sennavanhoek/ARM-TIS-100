////////////////////////
// REG -> REG PROBLEM
// IN.A = X0
// IN.B = X1
// OUT = X0
////////////////////////
   .section  ASM_CODE,"ax"
    .align 3
    .global asm_code
    .type asm_code, @function
    
asm_code:
	MUL X0, X0, X1
	RET
