.section .data
    .global ptr1
    .equ REMOVE, 1

.section .text
    .global decrypt

decrypt:
    movq ptr1(%rip), %rcx
    movq $0, %rax

loop:
    cmpq $0, (%rcx)
    je end

    cmpq $'a', (%rcx)
    je a

    cmpq $' ', (%rcx)
    je space

    subq REMOVE, (%rcx)
    incq %rax

a:
    addq $4, %rcx
    jmp loop

space:
    addq $4, %rcx
    jmp loop

end:
    ret