////////////////////////
// MEM -> MEM PROBLEM
// IN = [X1]
// IN Length = X2
// OUT is a 2D array
// OUT.S = [[X0]]
// OUT.L = [[X0], #8]
////////////////////////
   .section  ASM_CODE,"ax"
    .align 3
    .global asm_code
    .type asm_code, @function
    
asm_code:
	LDR X4, [X0], #8
	LDR X3, [X0]
seq_start:
	MOV X7, #0
	SUBS X2, X2, #1
	B.EQ done
	LDR X5, [X1], #8
	STR X5, [X4]
	CMP X5, #0
	B.EQ zero
seq_add:
	ADD X7, X7, #1
	STR X7, [X3]
	SUBS X2, X2, #1
	B.EQ done
	LDR X6, [X1], #8
	CMP X6, #0
	B.EQ zero
	ADD X5, X5, X6
	STR X5, [X4]
	B seq_add
zero:
	STR X7, [X3], #8
	STR X6, [X4, #8]!
	B seq_start
done:
	RET
