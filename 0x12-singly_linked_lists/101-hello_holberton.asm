section .data
message: db 'Hello, Holberton', 0
format:	db "%s", 10, 0

 section .text
 global main
 extern printf

main:
    mov edi, format
    lea rsi, [message]
    mov eax, 0
    call printf

    mov eax, 0
    ret

