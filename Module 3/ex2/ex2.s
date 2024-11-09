.section .data
    .global ptr1
    .global ptr2

.section .text
    .global str_copy_roman

str_copy_roman:

    movq ptr1(%rip), %rcx
    movq ptr2(%rip), %rdx

loop:
    movb (%rcx), %al
    cmpb $0, %al
    je end

    cmpb $'u', %al
    je u

    movb %al, (%rdx)
    incq %rdx
    incq %rcx
    jmp loop


u:
    movb $'v', (%rdx)
    incq %rdx
    incq %rcx
    jmp loop



end:
    movq $0, (%rdx)
    ret