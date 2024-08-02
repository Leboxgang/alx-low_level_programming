global main
extern printf

section .data
    format db 'Hello, Holberton', 10, 0  ; 10 is the newline character (LF)

section .text
main:
    ; Prepare the argument for printf
    mov rdi, format  ; Load the address of the format string into rdi
    xor eax, eax     ; Clear eax (no additional arguments to printf)

    ; Call printf
    call printf

    ; Exit the program
    mov eax, 0       ; Return code 0
    ret              ; Return from main
