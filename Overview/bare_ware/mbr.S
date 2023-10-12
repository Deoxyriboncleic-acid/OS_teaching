#define SECT_SIZE 512

.code16

.global _start
_start:
    lea (msg), %si // load effective address of msg into si

again:
    movb    (%si), %al // move byte from si to al
    incw    %si // increment si
    orb     %al, %al // or al with al
    jz      done // jump if zero
    movb    $0x0e, %ah // move 0x0e into ah
    movb    $0x00, %bh // move 0x00 into bh
    int     $0x10 // interrupt 0x10
    jmp    again // jump to again

done:
    jmp done

msg:
    .asciz "Hello, World!\n"

.org SECT_SIZE - 2
.byte 0x55, 0xaa