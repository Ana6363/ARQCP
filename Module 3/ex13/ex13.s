.section .data
    .global ptr1
    .global num


.section .text
    .global keep_positives

keep_positives:
    movq ptr1(%rip), %rcx
    movq num(%rip), %rdx
    movq $0, %r8

loop:
    cmpq $0, %rdx
    je end
    
    cmpq $0, (%rcx)
    jge next

    movw %r8d, (%rcx)

next:
    addq $4, %rcx
    decq %rdx
    incq %r8d
    jmp loop

end:
    ret

