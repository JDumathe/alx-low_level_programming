section .data
	hello: db 'Hello, Holberton', 0
	format: db '%s\n', 0

section .text
	global main

main:
	; Push the format string onto the stack
	push qword format

	; Push the hello string onto the stack
	push qword hello

	; Call printf
	mov rax, 0        ; Clear rax register
	mov rdi, format   ; Move address of format to rdi
	mov rsi, hello    ; Move address of hello to rsi
	xor rdx, rdx      ; Set rdx to 0 for no floating point args
	call printf       ; Call printf

	; Restore stack pointer
	add rsp, 16       ; Add 16 bytes (2 quadwords) to rsp to remove args

	; Return 0
	mov rax, 0
	ret
