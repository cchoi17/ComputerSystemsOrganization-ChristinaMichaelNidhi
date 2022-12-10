            global  _paritygen
            extern  _printf
            extern  _scanf
            default rel

            section     .text

            mov     rax, [num]
            mov     rdx, rax

getInput: 
           lea     rdi, [prompt1]
           call    _printf
           mov     rsi, num
           lea     rdi, [format]
           call    _scanf            

top:
            and     rax, 0x01       ;AND bit string with 0x01 to see if bit string has a 1 in final location
            cmp     rax, 0x01       ;COMPARE the final bit 
            JE      count           ;if the final bit is a 1, jump the count
            SHR     rdx, 1          ;shift the bit string to the right
            mov     rax, rdx        ;move the value in rax to rdx
            JMP     top             ;JUMP to the top of the "loop"

count:      mov     rcx, [counter]
            inc     rcx
            SHR     rdx, 1
            mov     rax, rdx
            JMP     top

            section .bss
counter:    resd    8
num:        resd    8

            section .data   
prompt1:    db      "Enter a bit-string: ", 0x00
format:     db      "%d", 0x00                   
