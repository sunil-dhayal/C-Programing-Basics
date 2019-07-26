global multi
	section .text
multi:  
    mov eax,[esi] 
    mov edx,[edi]
    mul edx
    ret
