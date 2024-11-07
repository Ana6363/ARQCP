.global .data
    .global op1
    op1: .long 10
    .global op2
    op2: .long 5

.global .text
    .global isMultiple

isMultiple:
    movl op1(%rip), %ecx
    movl op2(%rip), %eax

    xorl %edx, %edx
    idivl %ecx
    cmpq $0, %rdx
    je isMultipleEnd

    movl $0, %eax
    ret

isMultipleEnd:
    movl $1, %eax
    ret