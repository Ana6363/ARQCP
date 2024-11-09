.section .data
    .global vec1
    .global num

.section .text
    .global vec_avg

vec_avg:

    call vec_sum

    movzlq num(%rip), %rcx

    cmpq $0, %rdx
    je div_by_zero

    xorq %rdx, %rdx
    idivq %rcx

    jmp end


div_by_zero:
    movq $0, %rax
    jmp end

end:
    ret
    