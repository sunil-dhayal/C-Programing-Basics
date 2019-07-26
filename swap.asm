global exchange
    section .data
    
    section .text
exchange:
    mov esi,[esp+4] ;Source Index (SI) − It is used as source index for string operations.
    mov eax,[esi]   ;Destination Index (DI) − It is used as destination index for string operations.
    mov edi,[esp+8]  ;eax and ecx are data register
    mov edx,[edi]    ;esp is stack pointer register
    mov [esi],edx
    mov [edi],eax
