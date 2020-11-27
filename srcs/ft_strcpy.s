global	ft_strcpy

section	.text
; rsi = src
; rdi = dest

ft_strcpy:
	mov		rax, 0				; int rax = 0;

copy_str:
	cmp		BYTE [rsi + rax],0	; if (rsi[rax] == 0)
	je		end					; 	goto end
	mov		cl, [rsi + rax]		; cl = rsi[rax]
	mov		[rdi + rax], cl		; rdi[rax] = cl
	inc		rax					; rax++
	jmp		copy_str			; goto copy_str

end:
	mov		cl, 0				; cl = '\0'
	mov		[rdi + rax], cl		; rdi[rax] = cl
	mov		rax, rdi			; rax = rdi
	ret							; return rax (soit l'adresse de rdi)
