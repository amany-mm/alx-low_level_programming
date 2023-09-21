section .data
    hello db "Hello, Holberton",10,0  ; The string to be printed, followed by a newline and null terminator

section .text
    global main
    extern printf

main:
    push rbp
    mov rdi, hello   ; Load the address of the hello string into rdi
    call printf      ; Call the printf function
    pop rbp
    mov rax, 0x60    ; syscall number for exit
    xor rdi, rdi     ; status code 0
    syscall