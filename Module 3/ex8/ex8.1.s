.section .data
    .global num
    .global ptr1

.section .text
    .global sum_even

sum_even:
    movq num(%rip), %rcx
    movq ptr1(%rip), %rdx
    movq $0, %rdi

loop:
    cmpq $0, %rcx
    je end

    call is_even
    cmpq $1, %rax
    jne next

    incq %rdi
    incq %rdx
    decq %rcx

next:
    incq %rdx
    decq %rcx
    jmp loop

end:
    movq %rdi, %rax
    ret

