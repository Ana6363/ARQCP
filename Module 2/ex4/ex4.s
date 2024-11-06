.section .data
CONST: .long 20
.global op4
op4: .quad 10
.global op3
op3: .quad 10

.section .text
.global sum
.global another_sum
.global yet_another_sum

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

yet_another_sum:
movq op4(%rip), %rcx
movq op4(%rip), %rax

addq op3(%rip), %rcx
movq op2(%rip), %rdx

subq %rdx, %rcx
subq %rdx, %rcx

addq op1(%rip), %rcx
subq %rax, %rcx

movq %rcx, %rax
ret



