.section .data
.global op1
op1: .long 10
.global op2
op2: .long 20
.global op3
op3: .long 30

.section .text
.global sum3ints

sum3ints:
    movl op1(%rip), %eax
    movl op2(%rip), %ecx
    movl op3(%rip), %edx

    movzlq %eax, %rax
    movzlq %ecx, %rcx
    movzlq %edx, %rdx

    addq %rcx, %rax
    addq %rdx, %rax

    ret