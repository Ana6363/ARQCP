.section .data
    .global vec1
    .global num

.section .text
    .global array_sort

array_sort:
    movq vec1(%rip), %rcx
    movq num(%rip), %rdi

loop:
    cmpq $0, %rdi
    je end

    movq %rcx, %r8
    movq %rdi, %r9

loop2:
    decq %r9

    cmpq $0, %r9
    je loop3

    addq $2, %r8

    movq $0, %rax
    movq $0, %rdx

    movw (%r9), %dx
    movw (%rcx), %ax

    cmpw %dx, %ax
    jg loop2

    movw %dx, (%rcx)
    movw %ax, (%r9)

    jmp loop2

loop3:
    addq $2, %rcx

    decq %rdi
    jmp loop

end:
    ret