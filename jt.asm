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

jt:
	dd label0
	dd label1
	dd label2
	dd label3
	dd label4
	dd label5
	dd label6
	dd label7
	dd label8
	dd label9
	dd label10
	dd label11
	dd label12

	
section .text
	align 32
	extern printf
	global jump1
	
jump1:
	push ebp
	mov ebp,esp
	
	mov eax,[esp+8]
	shl eax,2
	jmp dword[eax+jt]
	
label0:

label1:
	push msg1
	call printf
	JMP end
	

label2:
	push msg2
	call printf
	JMP end

label3:
	push msg3
	call printf
	JMP end

label4:
	push msg4
	call printf
	JMP end

label5:
	push msg5
	call printf
	JMP end

label6:
	push msg6
	call printf
	JMP end

label7:
	push msg7
	call printf
	JMP end

label8:
	push msg8
	call printf
	JMP end

label9:
	push msg9
	call printf
	JMP end

label10:
	push msg10
	call printf
	JMP end

label11:
	push msg11
	call printf
	JMP end

label12:
	push msg12
	call printf
	JMP end
	
end:
	add esp,8
	mov esp,ebp
	pop ebp
	
