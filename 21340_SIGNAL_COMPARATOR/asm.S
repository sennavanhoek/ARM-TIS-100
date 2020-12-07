////////////////////////
// REG -> MEM PROBLEM
// IN.A = X1
// OUT.G = [X0]
// OUT.E = [X0, #8]
// OUT.L = [X0, #16]
////////////////////////
    .global asm_code

asm_code:
	CMP X1, #0
	CSET X2, LT
	STR X2, [X0, #16]
	CSET X2, GT
	CSET X3, EQ
	STP X2, X3, [X0]
	RET
