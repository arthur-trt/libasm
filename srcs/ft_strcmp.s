global	ft_strcmp

section .text
; s1 = rdi
; s2 = rsi

ft_strcmp:
	mov		rax, 0				; int rax = 0
	jmp		compare				; goto compare

compare:
	mov		al, BYTE [rdi]			; al = *rdi;
	mov		bl, BYTE [rsi]			; bl = *rsi;
	cmp		al, 0				; if (al == '\0')
	je		end				; 	goto end
	cmp		al, bl				; if (al != bl)
	jne		end				;	goto end
	inc		rsi				; rsi++
	inc		rdi				; rdi++
	jmp		compare				; goto compare


; movzx = copy a register of inferior size in a bigger and fill the other bits with 0
end:
	movzx		rax, al				; rax = al
	movzx		rbx, bl				; rbx = bl
	sub		rax, rbx			; rax = rax - rbx
	ret						; return rax
