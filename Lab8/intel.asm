.686P
.model flat,C

.data
symbol db 0
key db 0
off db 0

symbol2 db 0
keychar2 db 0
upper db 0

symbol3 db 0
max3 db 0
min3 db 0

symbol4 db 0
keychar4 db 0

.code
caesar proc
	push ebp
	mov ebp, esp
	mov al, byte ptr [ebp+8]
	mov symbol, al
	mov al, byte ptr [ebp+12]
	mov key, al
	xor eax, eax
	add al, symbol
islower:
	cmp al, 'a'
	jl isupper
	cmp al, 'z'
	jg stop
	mov off, 'a'
	jmp shift
isupper:
	cmp al, 'A'
	jl stop
	cmp al, 'Z'
	jg stop
	mov off, 'A'
shift:
	sub al, off
	add al, key
	cmp al, 0
	jge final
	add al, 26
final:
	mov dl, 26
	idiv dl
	xchg ah, al
	add al, off
stop:
	pop ebp
	ret
caesar endp


encrypt_vigenere proc
	push ebp
	mov ebp, esp
	mov al, byte ptr [ebp+8]
	mov symbol2, al
	mov al, byte ptr [ebp+12]
	mov keychar2, al
	mov upper, 0
	xor eax, eax
	add al, symbol2
islower:
	cmp al, 'a'
	jl isupper
	cmp al, 'z'
	jg stop
	jmp shift
isupper:
	cmp al, 'A'
	jl stop
	cmp al, 'Z'
	jg stop
	mov upper, 32
	add al, upper
shift:
	sub al, 'a'
	add al, keychar2
	sub al, 'a'
	cmp al, 0
	jge final
	add al, 26
final:
	mov dl, 26
	idiv dl
	xchg ah, al
	add al, 'a'
	sub al, upper
stop:
	pop ebp
	ret
encrypt_vigenere endp


decrypt_vigenere proc
	push ebp
	mov ebp, esp
	mov al, byte ptr [ebp+8]
	mov symbol2, al
	mov al, byte ptr [ebp+12]
	mov keychar2, al
	mov upper, 0
	xor eax, eax
	add al, symbol2
islower:
	cmp al, 'a'
	jl isupper
	cmp al, 'z'
	jg stop
	jmp shift
isupper:
	cmp al, 'A'
	jl stop
	cmp al, 'Z'
	jg stop
	mov upper, 32
	add al, upper
shift:
	sub al, keychar2
	cmp al, 0
	jge final
	add al, 26
final:
	mov dl, 26
	idiv dl
	xchg ah, al
	add al, 'a'
	sub al, upper
stop:
	pop ebp
	ret
decrypt_vigenere endp


atbash proc
	push ebp
	mov ebp, esp
	mov al, byte ptr [ebp+8]
	mov symbol3, al
islower:
	cmp al, 'a'
	jl isupper
	cmp al, 'z'
	jg stop
	mov max3, 'z'
	mov min3, 'a'
	jmp shift
isupper:
	cmp al, 'A'
	jl stop
	cmp al, 'Z'
	jg stop
	mov max3, 'Z'
	mov min3, 'A'
shift:
	sub al, max3
	neg al
	add al, min3
stop:
	pop ebp
	ret
atbash endp


end