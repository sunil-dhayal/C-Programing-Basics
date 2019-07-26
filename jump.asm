section .data
	msg: db "value %d is positive",10,0
	msg2: db "value %d is negative",10,0
	msg3: db "value %d is zero",10,0

section .text
	extern printf
	global jump
jump:
	push ebp
	mov ebp,esp
	mov esi,[esp+8]
	mov eax,[esi]
	add eax,0
	
	JNS elseifZero
	push eax
	push msg2
	call printf
	JMP endCheck
		
elseifZero:
	JNZ elsePos
	push eax
	push msg3
	call printf
	JMP endCheck
		
elsePos:
	push eax
	push msg
	call printf
		
endCheck:
	add esp,8
	mov esp,ebp
	pop ebp
