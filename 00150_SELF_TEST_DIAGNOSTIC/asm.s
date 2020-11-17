////////////////////////
// REG -> MEM PROBLEM
// IN.X = X1
// IN.A = X2
// OUT.X = [X0]
// OUT.A = [X0, #8]
////////////////////////
   .section  ASM_CODE,"ax"
    .align 3
    .global asm_code
    .type asm_code, @function

asm_code:
	STP X1, X2, [X0]
	RET
