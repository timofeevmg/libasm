global _ft_strcmp

section .text
_ft_strcmp:
	xor		rax, rax
	xor		rcx, rcx
	xor		r8, r8
	xor		r9, r9

.loop:
	cmp		byte [rdi + rcx], 0
	je		.exit
	cmp		byte [rsi + rcx], 0
	je		.exit
	mov		r8b, byte [rdi + rcx]
	mov		r9b, byte [rsi + rcx]
	sub		r8b, r9b
	cmp		r8b, 0
	jne		.exit
	jmp		.loop

.exit:
	mov		al, r8b
	ret
