cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___18334ch
	extern	___1a54d0h
	extern	___1831f4h
	extern	bpa_read
	extern	___243d6ch
	extern	bpk_decode2

section .text

__GDECL(___43de8h)
		push    18h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		mov     ebx, ___18334ch
		mov     edx, ___1a54d0h
		mov     eax, ___1831f4h
		call    near bpa_read
		push    ___1a54d0h
		mov     edx, [___243d6ch]
		push    edx
		call    near bpk_decode2
		pop     edx
		pop     ecx
		pop     ebx
		retn    
