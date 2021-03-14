global _ft_read
extern ___error

section .text
_ft_read:
	mov		rax, 0x2000003
	syscall
	jc		.err
	ret

.err:
	mov		r8, rax
	call ___error
	mov		[rax], r8
	mov		rax, -1
	ret