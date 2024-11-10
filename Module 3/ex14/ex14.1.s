.section .data
    .global ptr1
    .global num

.section .text
    .global vec_diff

vec_diff:
    movq ptr1(%rip), %rcx
    movq num(%rip), %rdx
    movq $0, %r8

loop:
    cmpq $0, %rdx
    je end

    movq (%rcx), %r9
    call exists
    cmpq $0, %rax
    je next

    addq $4, %rcx
    decq %rdx
    incq %r8
    jmp loop

next:
    addq $4, %rcx
    decq %rdx
    jmp loop

end:
    movq %r8, %rax
    ret
