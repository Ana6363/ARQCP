.section .data
    .global vec1
    .global num
    .global x

.section .text
    .global vec_search

vec_search:
    movq vec1(%rip), %rcx
    movq num(%rip), %rdx
    movq x(%rip), %r8

    cmpq $0, %rdx
    je not_found

loop:
    cmpq $0, %rdx
    je not_found

    cmpq %r8, (%rcx)
    je end

    incq %rcx
    decq %rdx

    jmp loop

not_found:
    movq $0, %rax
    ret

end:
    movq (%rcx), %rax
    ret