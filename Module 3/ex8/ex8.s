.section .data
    .global num

.section .text
    .global is_even

is_even:
    movq num(%rip), %rax
    
    xorq %rdx, %rdx
    idivq $2

    cmpq $0, %rdx
    jne odd

    movq $1, %rax
    jmp end

odd:
    movq $0, %rax
    jmp end

end:
    ret