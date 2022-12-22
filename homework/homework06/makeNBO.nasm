
            global  _main
            extern  _makeBigEndian64
            extern  _printf
            default rel 

            section .text

_main:      
            mov     rdi, [test1]
            call    _makeBigEndian64
            
            mov     rdi, [test2]    
            call    _makeBigEndian64

            mov     rdi, [test3]
            call    _makeBigEndian64

;            pmov     rdi, [test4]     ; what's a 'pmov'.... ???  :D
            mov     rdi, [test4]
            call    _makeBigEndian64

            mov     rdi, [test5]
            call    _makeBigEndian64

            ret 

            section .data
test1:      db      101
test2:      dq      100001
test3:      db      0
test4:      dq      110101010
test5:      dq      100000111
