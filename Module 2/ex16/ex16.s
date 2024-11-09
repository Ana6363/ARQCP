.section .data
    .global num1
    num1: .long 10

.section .text
    .global steps

steps:
    
    movq num1(%rip), %rax
    movq num1(%rip), %r8d 
    movq $3, %rcx

    xorq %rdx, %rdx
    idivq %rcx

    movq $6, %rcx
    addq %rcx, %rax

    movq $3, %rcx
    imulq %rcx, %rax

    movq $12, %rcx
    addq %rcx, %rax

    subq %r8d, %rax

    movq $4, %rcx
    subq %rcx, %rax

    movzlq %rax, %rax
    ret

