global sub
	section .text
sub:
    mov eax,[esi]
    mov edx,[edi]
    sub eax,edx
    ret
