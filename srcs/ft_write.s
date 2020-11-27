global ft_write
extern __errno_location

; syscall call assembly system function
; Calls the corresponding numbered function at rax.
; Here write is function 1
; Can be check with :
; #include <sys/syscall.h>
; #include <stdio.h>
;
; int	main(void)
; {
;	printf("SYS_write : %d\n", SYS_write);
;	return (0);
; }

ft_write:
	mov 	rax, 1				; rax = 1
	syscall						; syscall -> store return in rax
	cmp		rax, 0				; if (rax < 0)
	jl		err					;	goto err
	ret							; return (rax)

err:
	neg		rax					; rax = -rax
	mov		rdi, rax			; rdi = rax
	call	__errno_location	; rerieve address of __erno_location
	mov		[rax], rdi			; put erno in return value of __erno_location
	mov		rax, -1				; rax = -1
	ret							; return rax
