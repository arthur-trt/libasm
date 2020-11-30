global	ft_strdup
extern	__errno_location
extern	malloc
extern	ft_strlen
extern	ft_strcpy


; rax	*ft_strdup(char const rdi)
ft_strdup:
	call		ft_strlen  wrt ..plt		; rax = ft_strlen(rdi)
	inc		rax				; rax++ (for '\0')
	mov		rbx, rdi			; rbx = rdi (rbx is use as temp storage)
	mov		rdi, rax			; rdi = rax
	call		malloc  wrt ..plt		; rax = malloc(rdi)
	cmp		rax, 0				; if (rax == NULL)
	je		err				; 	goto err
	mov		rdi, rax			; rdi = rax
	mov		rsi, rbx			; rsi = rbx
	call		ft_strcpy  wrt ..plt		; rax = ft_strcpy(rsi, rdi)
	ret						; return rax

err:
	neg		rax					; rax = -rax
	mov		rdi, rax			; rdi = rax
	call		__errno_location  wrt ..plt	; rerieve address of __erno_location
	mov		[rax], rdi			; put erno in return value of __erno_location
	mov		rax, -1				; rax = -1
	ret						; return rax
