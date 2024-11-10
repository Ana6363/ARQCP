.section .data
    .global ptr1
    .global ptr2
    .global ptr3

.section .text
    .global str_cat

str_cat:
    movq ptr1(%rip), %rcx
    movq ptr2(%rip), %rdx
    movq ptr3(%rip), %r8

loop:
    movb (%rcx), %dil
    cmpq $0, (%rcx)
    je loop2

    movb %dil, (%r8)
    addq $4, %r8
    addq $4, %rcx
    jmp loop

loop2:
    movb (%rdx), %dil
    cmpq $0, (%rdx)
    je end

    movb %dil, (%r8)
    addq $4, %r8
    addq $4, %rdx
    jmp loop2

end:
    movq %r8, %rax
    ret