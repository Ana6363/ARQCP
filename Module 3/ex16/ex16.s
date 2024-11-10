.section .data
    .global vec1
    .global vec2
    .global num

.section .text
    .global swap

swap:
    movq vec1(%rip), %rcx
    movq vec2(%rip), %rdx
    movq num(%rip), %rdi

loop:
    cmpq $0, %rdi
    je end

    movb (%rcx), %r8b
    movb (%rdx), %r9b
    movb %r9b, (%rcx)
    movb %r8b, (%rdx)

    incq %rcx
    incq %rdx
    decq %rdi
    jmp loop

end:
    ret