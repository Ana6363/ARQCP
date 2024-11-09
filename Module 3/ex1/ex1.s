.section .data
    .global ptr1
        .equ COUNT, '5'

.section .text
    .global five_count


five_count:
    movq $0, %rcx

    movq ptr1(%rip), %rcx

    movq $0, %rax


loop:
    cmqp $0, %rcx
    je end
    
    cmpq $COUNT, %rcx
    je increment

    addq $1, %rcx
    jmp loop


increment:
    addq $1, %rax
    addq $1, %rcx

    jmp loop



end:
    ret