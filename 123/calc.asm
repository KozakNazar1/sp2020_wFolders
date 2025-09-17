.686
.model flat, c
printf proto c : vararg
EXTERN K : DWORD
.data
msg db 'Output from asm module is: %d', 0
.code
calc PROC
push ebp
mov ebp, esp
mov eax, dword ptr[ebp + 8]
add eax, dword ptr[ebp + 12]
add eax, K
pop ebp
push eax
invoke printf, offset msg, eax
pop eax
ret
calc ENDP
END