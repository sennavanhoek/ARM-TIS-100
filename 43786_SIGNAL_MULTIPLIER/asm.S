////////////////////////
// REG -> REG PROBLEM
// IN.A = X0
// IN.B = X1
// OUT = X0
////////////////////////
    .global asm_code

asm_code:
	MUL X0, X0, X1
	RET
