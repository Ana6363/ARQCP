.section .data
.global A
A: .long 20
.global B
B: .byte 10
.global C
C: .short 30
.global D
D: .short 40

.section .text
sum_and_subtract;

sum_and_subtract:
    movl A(%rip), %eax
    movb B(%rip), %cl
    movw C(%rip), %dx
    movw D(%rip), %si

    movzlq %eax, %rax
    movzbq %cl, %rcx
    movzwq %dx, %rdx
    movzwq %si, %rsi

    subq %rax, %rdx
    addq %rsi, %rdx
    subq %rcx, %rdx

    movq %rdx, %rax

    ret