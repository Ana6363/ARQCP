.section .data
    .global ptr1
    .global num
    .equ COMP, 50

.section .text
    .global vec_zero

vec_zero:
    movq ptr1(%rip), %rcx
    movq num(%rip), %rdx
    movq $0, %rax

loop:
    cmpq $0, %rdx
    je end
    movq (%rcx), %r8

    cmpq $COMP, %r8
    jg greater
    je greater

    addq $4, %rcx
    decq %rdx
    jmp loop

greater:
    incq %rax
    addq $4, %rcx
    decq %rdx
    jmp loop

end:
    ret