global _ft_write
extern ___error

section .text
_ft_write:
	mov		rax, 0x2000004
	syscall
	jc		.err
	ret

.err:
	neg		rax
	mov		rdx, rax
	call ___error
	mov		[rax], rdx
	mov		rax, -1
	ret
