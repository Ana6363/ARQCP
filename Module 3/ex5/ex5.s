.section .data
    .global vec1
    .global num

.section .text
    .global vec_sum


vec_sum:
    
    movq vec1(%rip), %rcx
    movl num(%rip), %edx
    decl %edx

loop:
    cmpl $0, %edx
    je end

    addl (%rcx), %rax
    incl %rcx
    decl %edx
    jmp loop

end:
    ret