global	_ft_strlen

section	.text
_ft_strlen:
	xor		rax, rax
	xor		rcx, rcx
	cmp		rdi, 0
	je		.return

.loop:
	cmp		byte [rdi + rcx], 0
	je		.return
	inc		rcx
	jmp		.loop

.return:
	mov		rax, rcx
	ret