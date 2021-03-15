global _ft_strdup
extern _malloc
extern ___error

section .text
_ft_strdup:
	xor		rax, rax
	xor		rcx, rcx
	xor		r8, r8

.lenth:
	cmp		byte [rdi + rcx], 0
	je		.malloc
	inc		rcx
	jmp		.lenth

.malloc:
	push	rdi
	inc		rcx
	mov		rdi, rcx
	call	_malloc
	jc		.err
	pop		rdi
	xor		rcx, rcx

.copy:
	cmp		byte [rdi + rcx], 0
	je		.ret
	mov		r8b, byte [rdi + rcx]
	mov		byte [rax + rcx], r8b
	inc		rcx
	jmp		.copy

.ret:
	mov		byte [rax + rcx], 0
	ret

.err:
	mov		r8, rax
	call ___error
	mov		[rax], r8
	mov		rax, 0
	ret