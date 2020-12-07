////////////////////////
// REG -> MEM PROBLEM
// IN.X = X1
// IN.A = X2
// OUT.X = [X0]
// OUT.A = [X0, #8]
////////////////////////
    .global asm_code

asm_code:
	STP X1, X2, [X0]
	RET
