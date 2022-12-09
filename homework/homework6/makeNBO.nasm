
            global  _makeNBO
            extern  _makeNBO
            extern  _printf
            default rel 

            section .text

_main:      
            mov     rdi, [test1]
            call    _makeNBO
            
            mov     rdi, [test2]    
            call    _makeNBO

            mov     rdi, [test3]
            call    _makeNBO

            pmov     rdi, [test4]
            call    _makeNBO

            mov     rdi, [test5]
            call    _makeNBO

            ret 

            section .data
test1:      db      101
test2:      db      100001
test3:      db      0
test4:      db      110101010
test5:      db      100000111
