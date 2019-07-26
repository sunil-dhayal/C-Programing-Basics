%macro multiply 2 
      mov eax,%1
      mov edx,%2
      mov ecx,0

notzero: 
	add ecx,eax
	dec edx
	jnz notzero

%endmacro
	
section	.text
	global macmulti
	
macmulti:  
	mov eax,[esp+4]
	mov edx,[esp+8]
	multiply eax,edx
	mov eax,ecx     
	ret
