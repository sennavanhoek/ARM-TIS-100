////////////////////////
// REG -> REG PROBLEM
// IN.A = X0
// OUT.A = X0
////////////////////////
    .global asm_code

asm_code:
	LSL X0, X0, #1
	RET
