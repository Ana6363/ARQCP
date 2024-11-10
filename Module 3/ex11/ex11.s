.section .data
    .global ptr1
    .global num
    .equ COMP, 12


.section .text
    .global vec_greater12

vec_greater12:
    movq ptr1(%rip), %rcx
    movq num(%rip), %rdx
    movq $0, %rax

loop:
    cmpq $0, %rdx
    je end
    movq (%rcx), %r8

    cmpq $COMP, %r8
    jg greater

    addq $4, %rcx
    decq %rdx
    jmp loop

greater:
    incq %rax
    addq $4, %rcx
    decq %rdx
    jmp loop

end:
    ret
