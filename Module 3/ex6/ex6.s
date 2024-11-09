.section .data
    .global ptr1
    .equ ADD, 1

.section .text
    .global encrypt

encrypt:
    
    movq ptr1(%rip), %rcx
    movq $0, %rax

loop:
    cmpq $0, (%rcx)
    je end

    cmpq $'a', (%rcx)
    je a

    cmpq $' ', (%rcx)
    je space

    addq ADD, (%rcx)
    incq %rax

a:
    incq %rcx
    jmp loop

space:
    incq %rcx
    jmp loop

end:
    ret