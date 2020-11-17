////////////////////////
// MEM -> REG PROBLEM
// IN = [X0]
// Current index in IN = X1
// OUT = X0
////////////////////////
   .section  ASM_CODE,"ax"
    .align 3
    .global asm_code
    .type asm_code, @function
    
asm_code:
	CMP X1, #0
	B.EQ zero
	MOV X2, #8
	MUL X3, X1, X2
	LDR X4, [X0, X3]
	SUB X3, X3, #8
	LDR X5, [X0, X3]
	SUBS X0, X4, X5
	B.PL positive
	NEG X0, X0
positive:
	CMP X0, #10
	CSET X0, GE
	RET
zero:
	MOV X0, #0
	RET
