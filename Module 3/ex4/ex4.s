.section .data
    .global vec1
    .global num
        .equ ADD, 3


.section .text
    .global vec_add_three


vec_add_three:

    movq vec1(%rip), %rcx
    movq num(%rip), %rdx
    decq %rdx

loop:
    cmpq $0, %rdx
    je end

    addq $ADD, (%rcx)
    addq $4, %rcx
    decq %rdx
    jmp loop

end:
    ret


