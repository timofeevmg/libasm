global _ft_strcmp

section .text
_ft_strcmp:
	xor		rax, rax
	xor		rcx, rcx
	xor		r8, r8

.loop:
	mov		al, byte [rdi + rcx]
	mov		r8b, byte [rsi + rcx]
	inc		rcx
	cmp		rax, 0
	je		.ret
	cmp		r8, 0
	je		.ret
	cmp		rax, r8
	je		.loop

.ret:
	sub		rax, r8
	ret
