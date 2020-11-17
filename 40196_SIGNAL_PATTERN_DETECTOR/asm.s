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
	CMP X1, #2
	B.LE end
	MOV X2, #8
	MUL X2, X2, X1
	LDR X3, [X0, X2]
	CMP X3, #0
	B.NE end
	SUB X2, X2, #16
	ADD X0, X0, X2
	LDP X3, X4, [X0]
	CMP X3, #0
	B.NE end
	CMP X4, #0
	B.NE end
	MOV X0, #1
	RET
end:
	MOV X0, #0
	RET
