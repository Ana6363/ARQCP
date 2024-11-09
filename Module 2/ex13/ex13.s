.section .data
    .global lenght1
    lenght1: .short 10
    .global lenght2
    lenght2: .short 20
    .global height
    height: .short 30

.section .text
    .global trapezie

trapezie:
    movw lenght1(%rip), %cx
    movw lenght2(%rip), %si
    movw height(%rip), %ax
    movw $2, %bx

    addw %si, %cx
    imulw %cx, %ax
    
    xorw %rdx, %rdx
    idivw %bx

    ret