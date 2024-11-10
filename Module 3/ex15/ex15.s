.section .data
    .global ptr1
    .global num

.section .text
    .global sum_third_byte

sum_third_byte:
    movq ptr1(%rip), %rcx      
    movl num(%rip), %edx       
    movq $0, %rax              

loop:
    cmpq $0, %rdx              
    je end                     

    movq (%rcx), %r8           
    shr $16, %r8               
    and $0xFF, %r8             
    addq %r8, %rax             

    addq $8, %rcx              
    decq %edx                  
    jmp loop                   

end:
    ret                        