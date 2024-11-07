.global .data
    .global A
    A: .long 10
    .global B
    B: .long 20
    .global C
    C: .long 30
    .global D
    D: .long 40

.global .text
    .global compute

compute:
    movl A(%rip), %eax
    movl A(%rip), %edi
    movl B(%rip), %ecx
    movl C(%rip), %r8d
    movl D(%rip), %esi

    imull %ecx, %eax
    imull %r8d, %edi

    addl %edi, %eax

    xorl %edx, %edx
    idivl %esi

    movzlq %eax, %rax

    ret