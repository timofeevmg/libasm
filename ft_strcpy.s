global _ft_strcpy

section .text
_ft_strcpy:
	xor		rax, rax
	xor		rcx, rcx
	cmp		rsi, 0
	je		.exit
	cmp		rdi, 0
	je		.exit
	cmp		rsi, rdi
	je		.exit

.loop:
	cmp		byte [rsi + rcx], 0
	je		.return
	mov		dl, [rsi + rcx]
	mov		[rdi + rcx], dl
	inc		rcx
	jmp		.loop

.return:
	mov		byte [rdi + rcx], 0
	mov		rax, rdi
	ret

.exit:
	mov		rax, rdi
	ret