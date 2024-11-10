.section .data
    .global ptr1
    .global num
    .global x

.section .text
    .global exists

exists:
    movq ptr1(%rip), %rcx
    movq num(%rip), %rdx
    movq x(%rip), %r8
    movq $0, %rax

loop:
    cmpq $0, %rdx
    je check
    movq (%rcx), %r9

    cmpq %r8, %r9
    je found

    addq $4, %rcx
    decq %rdx
    jmp loop

found:
    incq %rax
    addq $4, %rcx
    decq %rdx
    jmp loop

check:
    cmpq $1, %rax
    jg dup
    movq $0, %rax
    jmp end

dup:
    movq $1, %rax


end:
    ret
