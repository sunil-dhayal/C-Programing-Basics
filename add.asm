global add
	section .text
add:
    mov esi,[esp+4]
    mov eax,[esi]
    mov edi,[esp+8]  
    mov edx,[edi]
    add eax,edx
    ret
