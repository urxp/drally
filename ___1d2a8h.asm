cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern	___19bd60h
	extern	___1d4e8h
	extern	___199fa4h
	extern	___61b88h
	extern	___1ca00h
	extern	___13710h
	extern	___3ab5ch
	extern	___1a1ef8h
	extern	___24e4d0h
	extern	___199fach
	extern	___1a020ch
	extern	___2415ch
	extern	___2b5f0h
	extern	___61cd0h
	extern	___1123ch
	extern	___1a1138h__VESA101h_DefaultScreenBufferB
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___13248h
	extern	___180aa8h
	extern	___185c0bh
	extern	___1a1108h
	extern	___12e78h
	extern	___180ac8h
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___60a84h
	extern	___5994ch
	extern	___199fa0h
	extern	___60b48h
	extern	___2ab50h
	extern	___13bd4h
	extern	___611c0h
	extern	___61278h
	extern	___186ad2h
	extern	___180d18h
	extern	___185b70h
	extern	___1caf4h

section .text

__GDECL(___1d2a8h)
		push    2ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 0ch
		mov     ebx, 0c5h
		mov     edx, 97h
		mov     ecx, [___19bd60h]
		mov     [esp+4], ebx
		mov     [esp], edx
		test    ecx, ecx
		je      short ___1d2e0h
		call    near ___1d4e8h
		jmp     near ___1d4ddh
___1d2e0h:
		mov     eax, [___199fa4h]
		call    near ___61b88h
		test    eax, eax
		jne     short ___1d2fdh
		call    near ___1ca00h
		add     esp, byte 0ch
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___1d2fdh:
		mov     eax, 2
		xor     edx, edx
		call    near ___13710h
		xor     eax, eax
		call    near ___3ab5ch
		test    eax, eax
		je      near ___1d4ddh
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		mov     esi, 1
		shl     eax, 2
		mov     edi, 4b00h
		sub     eax, edx
		mov     [___24e4d0h], esi
		mov     [___199fach], edi
		mov     ebx, [eax*4+___1a020ch]
		call    near ___2415ch
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     [eax*4+___1a020ch], ebx
		call    near ___2b5f0h
		call    near ___61cd0h
		test    eax, eax
		jne     short ___1d37ch
		call    near ___1123ch
___1d37ch:
		mov     ecx, 28f00h
		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     esi, 10680h
		add     edi, 10680h
		xor     edx, edx
		call 	__MOVS
		xor     eax, eax
		mov     ebx, 14eh
		call    near ___13710h
		mov     eax, 2
		xor     edx, edx
		mov     ecx, 41h
		call    near ___13710h
		push    byte 1
		mov     edx, [esp+8]
		mov     eax, [esp+4]
		call    near ___13248h
		mov     edx, [esp+4]
		add     edx, byte 0dh
		lea     eax, [edx*4+0]
		mov     ecx, [esp]
		add     eax, edx
		mov     ebx, ___180aa8h
		shl     eax, 7
		mov     edx, ___185c0bh
		add     ecx, eax
		mov     eax, [___1a1108h]
		add     ecx, byte 28h
		call    near ___12e78h
		mov     edx, [esp+4]
		mov     ebp, [esp]
		add     edx, byte 1eh
		mov     esi, [esp+4]
		lea     eax, [edx*4+0]
		mov     edi, [esp]
		add     eax, edx
		add     esi, byte 13h
		shl     eax, 7
		add     edi, byte 0fh
		add     eax, ebp
		mov     ebx, ___180ac8h
		lea     ecx, [eax+28h]
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		xor     ebp, ebp
		call    near ___12e78h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		call    near ___60a84h
		xor     ecx, ecx
		xor     ebx, ebx
___1d452h:
		cmp     ebp, 0ffh
		je      short ___1d4a8h
		call    near ___5994ch
		mov     dword [esp+8], 0ah
		xor     ecx, ecx
		mov     edx, ebx
		mov     cl, al
		sar     edx, 1fh
		mov     eax, ebx
		idiv    dword [esp+8]
		cmp     edx, byte 1
		jne     short ___1d48fh
		mov     eax, [___199fa0h]
		mov     edx, 2
		add     eax, byte 5
		call    near ___60b48h
		mov     ebp, eax
___1d48fh:
		call    near ___2ab50h
		call    near ___2ab50h
		mov     edx, esi
		mov     eax, edi
		call    near ___13bd4h
		inc     ebx
		cmp     ecx, byte 1
		jne     short ___1d452h
___1d4a8h:
		cmp     ecx, byte 1
		je      short ___1d4b6h
		xor     edx, edx
		xor     eax, eax
		call    near ___611c0h
___1d4b6h:
		call    near ___61278h
		cmp     ecx, byte 1
		je      short ___1d4ddh
		mov     edi, ___186ad2h
		xor     ah, ah
		mov     esi, ___180d18h
		mov     [___185b70h], ah
		call    near ___1caf4h
		movsd   
		movsd   
		movsd   
		movsd   
		movsw   
___1d4ddh:
		add     esp, byte 0ch
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
