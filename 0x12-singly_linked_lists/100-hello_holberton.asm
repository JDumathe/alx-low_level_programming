section .data
    hello: db "Hello, Holberton", 10, 0

section .text
    global _start

_start:
    ; call printf function
    push qword hello
    call printf
    add rsp, 8

    ; exit program
    mov eax, 60
    xor edi, edi
    syscall

