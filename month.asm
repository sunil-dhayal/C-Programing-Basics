section .data
	msg1: db "jan 31 days",10,0
	msg2: db "feb 28 days",10,0
	msg3: db "march 31 days",10,0
	msg4: db "april 30 days",10,0
	msg5: db "may 31 days",10,0
	msg6: db "jun 30 days",10,0
	msg7: db "july 31 days",10,0
	msg8: db "august 31 days",10,0
	msg9: db "sep 30 days",10,0
	msg10: db "oct 31 days",10,0
	msg11: db "nov 30 days",10,0
	msg12: db "dec 31 days",10,0
	msg13: db "Error! month not exist",10,0
	
section .text
	extern printf
	global month
	
month:
	push ebp
	mov ebp,esp
	mov eax,[esp+8]
	add eax,0
	
	mov edx,1
	cmp eax,edx
	JE jan

	mov edx,2
	cmp eax,edx
	JE feb

	mov edx,3
	cmp eax,edx
	JE mar
	
	mov edx,4
	cmp eax,edx
	JE apr

	mov edx,5
	cmp eax,edx
	JE may

	mov edx,6
	cmp eax,edx
	JE jun

	mov edx,7
	cmp eax,edx
	JE july

	mov edx,8
	cmp eax,edx
	JE aug

	mov edx,9
	cmp eax,edx
	JE sep
	
	mov edx,10
	cmp eax,edx
	JE oct

	mov edx,11
	cmp eax,edx
	JE nov

	mov edx,12
	cmp eax,edx
	JNE ass
	JE dec
	
jan:
	push msg1
	call printf
	JMP end

feb:
	push msg2
	call printf
	JMP end

mar:
	push msg3
	call printf
	JMP end

apr:
	push msg4
	call printf
	JMP end

may:
	push msg5
	call printf
	JMP end

jun:
	push msg6
	call printf
	JMP end

july:
	push msg7
	call printf
	JMP end

aug:
	push msg8
	call printf
	JMP end

sep:
	push msg9
	call printf
	JMP end

oct:
	push msg10
	call printf
	JMP end

nov:
	push msg11
	call printf
	JMP end

dec:
	push msg12
	call printf
	JMP end
	
ass:
	push msg13
	call printf
	
end:
	mov esp,8
	mov esp,ebp
	pop ebp

