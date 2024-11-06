.section .data
.global op1
op1: .short 10

.section .text
.global swap

swap:
    movw op1(%rip), %ax
    movb %ah, %ch
    movb %al, %ah
    movb %ch, %al
    ret