////////////////////////
// REG -> REG PROBLEM
// IN.A = X0
// IN.S = X1
// IN.B = X2
// OUT = X0
////////////////////////
   .section  ASM_CODE,"ax"
    .align 3
    .global asm_code
    .type asm_code, @function
    
asm_code:
	CMP X1, #0
	ADD X3, X0, X2
	CSEL X0, X3, X0, EQ
	CSEL X0, X2, X0, GT
	RET
