cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1a1124h__VESA101h_ScreenBufferA
	extern	___1a1138h__VESA101h_DefaultScreenBufferB
	extern	___13710h
	extern	___13248h
	extern	___180d5ch
	extern	___185c0bh
	extern	___1a1108h
	extern	___12e78h
	extern	___180d9ch
	extern	___180dd8h
	extern	___180e14h
	extern	___180e54h
	extern	___180e8ch
	extern	___180ecch
	extern	___180f08h
	extern	___180848h
	extern	___185ba9h
	extern	___1a10cch
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___5994ch
	extern	___59b3ch

section .text

__GDECL(___1d83ch)
		push    1ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		mov     ecx, 4b000h
		mov     esi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edi, [___1a1124h__VESA101h_ScreenBufferA]
		call 	__MOVS
		mov     ecx, 28f00h
		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     esi, 10680h
		add     edi, 10680h
		xor     edx, edx
		call 	__MOVS
		xor     eax, eax
		mov     ebx, 26ch
		call    near ___13710h
		mov     eax, 2
		xor     edx, edx
		mov     ecx, 0c8h
		call    near ___13710h
		push    byte 1
		mov     edx, 0a3h
		mov     eax, 0ah
		call    near ___13248h
		mov     ecx, 1ce9bh
		mov     ebx, ___180d5ch
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		call    near ___12e78h
		mov     ecx, 1f69bh
		mov     ebx, ___180d9ch
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		call    near ___12e78h
		mov     ecx, 21e9bh
		mov     ebx, ___180dd8h
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		call    near ___12e78h
		mov     ecx, 2469bh
		mov     ebx, ___180e14h
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		call    near ___12e78h
		mov     ecx, 26e9bh
		mov     ebx, ___180e54h
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		call    near ___12e78h
		mov     ecx, 2969bh
		mov     ebx, ___180e8ch
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		call    near ___12e78h
		mov     ecx, 2be9bh
		mov     ebx, ___180ecch
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		call    near ___12e78h
		mov     ecx, 2e69bh
		mov     ebx, ___180f08h
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		call    near ___12e78h
		mov     ecx, 327e1h
		mov     ebx, ___180848h
		mov     edx, ___185ba9h
		mov     eax, [___1a10cch]
		call    near ___12e78h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		call    near ___5994ch
		call    near ___59b3ch
___1d9b9h:
		call    near ___5994ch
		test    al, al
		je      short ___1d9b9h
		call    near ___5994ch
		call    near ___59b3ch
		mov     ecx, 4b000h
		mov     esi, [___1a1124h__VESA101h_ScreenBufferA]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		call 	__MOVS
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
