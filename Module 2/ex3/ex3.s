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
movq CONST(%rip), %rcx
movl CONST(%rip), %rax

movl op1(%rip), %edx
subl %rdx, %rcx

movl op2(%rip), %edx
subl %rdx, %rax

addl %rcx, %rax
addl CONST(%rip), %rax 
ret
