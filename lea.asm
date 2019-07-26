section .data

section .text
	global multi
	
multi:
	mov eax,[esp+4]
	lea eax,[eax*4]
	lea eax,[eax*8+eax]
	
	ret
