.section .data
CONST: .long 20

.section .text
.global sum
.global another_sum

sum:
movl op1(%rip), %ecx
movl op2(%rip), %eax
addl %ecx, %eax
ret

another_sum:
movl op1(%rip), %ecx
movl op2(%rip), %eax

subl CONST(%rip), %ecx
subl CONST(%rip), %eax
addl %ecx, %eax

addl CONST(%rip), %eax
ret
