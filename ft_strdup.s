global _ft_strdup
extern _malloc

section .text
_ft_strdup:
	xor		rax, rax
	xor		rcx, rcx

.len_loop:
	cmp		byte [rdi + rcx], 0
	je		.malloc
	inc		rcx
	jmp		.len_loop

.malloc:
	push	rdi
	inc		rcx
	mov		rdi, rcx
	call	_malloc
	pop		rdi

.copy_loop:
	mov		r8b, byte [rdi + rcx]
	mov		byte [rax + rcx], r8b
	dec		rcx
	cmp		rcx, 0
	jge		.copy_loop
	ret