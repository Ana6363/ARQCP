.section .data
    .global ptr1
    .global ptr2

.section .text
    .global str_copy_roman2


str_copy_roman2:
    movq ptr1(%rip), %rcx
    movq ptr2(%rip), %rdx

loop:
    movb (%rcx), %al
    cmpb $0, %al
    je end

    cmpb $'u', %al
    je u

    cmpb $'U', %al
    je U

    movb %al, (%rdx)
    incq %rdx
    incq %rcx
    jmp loop


u:
    movb $'v', (%rdx)
    incq %rdx
    incq %rcx
    jmp loop

U: 
    movb $'V', (%rdx)
    incq %rdx
    incq %rcx
    jmp loop

end:
    movq $0, (%rdx)
    ret