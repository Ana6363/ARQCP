.section .text
    .global sum
    .global sub
    .global mul
    .global div
    .global mod
    .global 2pow
    .global 3pow

sum:
    movl num1(%rip), eax
    movl num2(%rip), ecx

    addl ecx, eax
    ret

sub:
    movl num1(%rip), eax
    movl num2(%rip), ecx

    subl ecx, eax
    ret

mul:
    movl num1(%rip), eax
    movl num2(%rip), ecx

    imull ecx, eax
    ret

div:
    movl num1(%rip), eax
    movl num2(%rip), ecx

    xorl %edx, %edx
    idivl ecx

    ret

mod:
    movl num1(%rip), eax
    
    cmpl $0, %eax
    jl modless

    ret

modless:
    movl $0, %ecx

    subl %eax, %ecx
    movl %ecx, %eax

    ret

2pow:
    movl num1(%rip), %eax
    movl num1(%rip), %ecx

    imull %ecx, %eax

    ret

3pow:
    movl num1(%rip), %eax
    movl num1(%rip), %ecx
    movl num1(%rip), %edx

    imull %ecx, %eax
    imull %edx, %eax

    ret
