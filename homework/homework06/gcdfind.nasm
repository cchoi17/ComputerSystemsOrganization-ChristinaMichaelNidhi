            global  _gcdfind
            extern _printf
            extern _scanf
            default rel

            section .text
_gcdfind:                           ; I added this for you... need an entry point!
            push    rbx 

getOne:     mov     rsi, val1
            lea     rdi, [prompt1] 
            call    _printf 
            lea     rdi, [format]
            mov     rsi, val1
            call    _scanf

getTwo:     lea     rdi, [prompt2]
            call    _printf 
            lea     rdi, [format]
            mov     rsi, val2
            call    _scanf
            

begin:      mov     rax, [val1]
            mov     rcx, [val2]


top:        xor     rdx, rdx 
            cmp     rcx, 0x00 ; b == 0?
            je      Done 
            idiv    rcx  
            mov     rax, rcx  
            mov     rcx, rdx 
            jmp     top 

Done: 
            mov     rsi, rax 
            lea     rdi, [prompt3]
            call    _printf
            pop     rbx 
            ret 

            section .bss
val1:       resd      8
val2:       resd      8

            section .data
format:     db      "%d", 0x00
prompt1:    db      "Enter a first number: ", 0x00
prompt2:    db      "Enter a second number: ", 0x00
prompt3:    db      "Your GCD is %d",0x0A, 0x00
