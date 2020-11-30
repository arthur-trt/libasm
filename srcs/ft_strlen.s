global ft_strlen

section .text
ft_strlen:
	mov		rax, 0				; int rax = 0
	jmp		count				; goto count

count:
	cmp		BYTE [rdi + rax], 0		; if (str[rax] == 0)
	je		end				;	goto end;
	inc		rax				; rax++
	jmp		count				; goto cout

end:
	ret						; return rax
