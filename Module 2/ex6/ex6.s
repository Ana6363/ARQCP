.section .data
.global op1
op1: .short 0x1234
.global op2 
op2: .short 0x5678

.section .text
.global change


change:

movw op1(%rip), %cx
movw op2(%rip), %dx

movb %dh, %al
imulb $2, %cl

movb %cl, %ah
ret