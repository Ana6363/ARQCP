.global .data
.global op1
op1: .short 10
.global op2
op2: .short 20


.global .text
.global verify_flags


verify_flags:
    movw op1(%rip), %cx
    movw op2(%rip), %dx

    addw %cx, %dx
    jo overflow
    jc carry

    ret

jo:
    movl $1, %eax
    ret

carry:

    movl $1, %eax
    ret