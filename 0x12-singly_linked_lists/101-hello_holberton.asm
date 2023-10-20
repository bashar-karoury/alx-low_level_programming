; ----------------------------------------------------------------------------------------
; Writes "Hello, Holberton" to the console.
; ----------------------------------------------------------------------------------------

          global    main

          section   .text
main:	  mov       rax, 1                  ; system call for write
          mov       rdi, 1                  ; file handle 1 is stdout
          mov       rsi, string             ; address of string to output
          mov       rdx, 17                 ; number of bytes including new line
          syscall                           ; call write system call
          mov       rax, 60                 ; system call for exit
          xor       rdi, rdi                ; exit code 0
          syscall                           ; call exit

          section   .data
string:  db        "Hello, Holberton", 10  
