/*
cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRCAT
	extern 	__STRCPY
	extern	___19bd60h
	extern	___1a116ch
	extern	___185a58h
	extern	___1a1f4eh
	extern	___1a1ef8h
	extern	___1a01e0h
	extern	___23488h
	extern	___1866b8h
	extern	___135fch
	extern	___23230h
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___61278h
	extern	___623d4h
	extern	___1866b8h
	extern	___185b58h
	extern	CONNECTION_TYPE
	extern	___1866b8h
	extern	___2415ch
	extern	___13710h
	extern	___3ab5ch_cdecl
	extern	___199f9ch
	extern	___2b5f0h
	extern	___1caf4h

section .text

__GDECL(___1d00ch)
		push    18h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		mov     edx, [___19bd60h]
		test    edx, edx
		je      near ___1d21eh
		mov     ecx, ___1a116ch
		xor     esi, esi
		xor     edx, edx
		lea     ebx, [ecx+96h]
		mov     [___185a58h], esi
___1d03eh:
		mov     esi, ebx
		mov     edi, ecx
		call 	__STRCPY
		add     ecx, 96h
		mov     al, [edx+___1a1f4eh+1]
		add     ebx, 96h
		mov     [edx+___1a1f4eh], al
		inc     edx
		cmp     edx, byte 15h
		jl      short ___1d03eh
		mov     ebx, [___1a1ef8h]
		lea     edx, [ebx*8+0]
		sub     edx, ebx
		shl     edx, 2
		mov     esi, ___1a01e0h
		sub     edx, ebx
		mov     edi, ___1a116ch+0c4eh
		shl     edx, 2
		mov     eax, [ddash]
		add     esi, edx
		mov     [___1a116ch+0c4eh], eax
		call 	__STRCAT
		mov     esi, __dfr_180ca4h
		mov     ebx, 6
		call 	__STRCAT
		xor     ah, ah
		mov     edx, 64h
		mov     [___1a1f4eh+15h], ah
		mov     eax, edi
		call    near ___23488h
		mov     ebx, ___1a116ch
		xor     edx, edx
		lea     ecx, [ebx+96h]
___1d116h:
		mov     esi, ecx
		mov     edi, ebx
		call 	__STRCPY
		add     ebx, 96h
		mov     al, [edx+___1a1f4eh+1]
		add     ecx, 96h
		mov     [edx+___1a1f4eh], al
		inc     edx
		cmp     edx, byte 15h
		jl      short ___1d116h
		mov     ecx, 6dh
		mov     ebx, 27fh
		mov     edx, 173h
		mov     al, 0
		mov     edi, ___1866b8h+384h
		mov     [___1a116ch+0c4eh], al
		xor     eax, eax
		mov     esi, __dfr_180cc0h

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___135fch
	add 	esp, 10h

	
	push 	edx
	push 	ecx
	push 	eax
		call    ___23230h
	pop 	eax
	pop 	ecx
	pop 	edx


	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx


	push 	edx
	push 	ecx
	push 	eax
		call    ___61278h
	pop 	eax
	pop 	ecx
	pop 	edx


	push 	edx
	push 	ecx
	push 	eax
		call    ___623d4h
	pop 	eax
	pop 	ecx
	pop 	edx

		movsd   
		movsd   
		movsd   
		movsd   
		movsd   
		movsw   
		mov     dl, 1
		mov     edi, ___1866b8h+3b6h
		mov     esi, __dfr_180cd8h
		mov     [___185b58h], dl
		movsd   
		movsd   
		movsd   
		movsd   
		movsd   
		movsw   
		xor     dh, dh
		mov     esi, __dfr_180cf0h
		mov     [___185b58h+12h], dh
		mov     [___185b58h+13h], dh
		mov     [___185b58h+14h], dl
		mov     [___185b58h+15h], dl
		xor     edi, edi
		mov     [___185b58h+16h], dl
		mov     [___19bd60h], edi
		mov     [CONNECTION_TYPE], edi
		mov     edi, ___1866b8h+3e8h
		mov     [___185b58h+17h], dl
		mov     edx, 1
		movsd   
		movsd   
		movsd   
		movsd   
		movsw   
		movsb   

	push 	edx
	push 	ecx
	push 	eax
		call    ___2415ch
	pop 	eax
	pop 	ecx
	pop 	edx

		mov     eax, 2

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		mov     dword [___1a1ef8h], 13h
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___1d21eh:
		mov     eax, 2

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		xor     eax, eax

	push 	edx
	push 	ecx
	push 	eax
		call    ___3ab5ch_cdecl
	add 	esp, 4
	pop 	ecx
	pop 	edx
	
		test    eax, eax
		je      short ___1d29fh
		mov     dword [CONNECTION_TYPE], 2
		mov     ebx, [___1a1ef8h]
		lea     edx, [ebx*8+0]
		sub     edx, ebx
		shl     edx, 2
		xor     ecx, ecx
		sub     edx, ebx
		mov     [___199f9ch], ecx
		mov     ecx, [edx*4+___1a01e0h+2ch]

	push 	edx
	push 	ecx
	push 	eax
		call    ___2415ch
	pop 	eax
	pop 	ecx
	pop 	edx

		mov     ebx, [___1a1ef8h]
		lea     edx, [ebx*8+0]
		sub     edx, ebx
		shl     edx, 2
		sub     edx, ebx
		mov     [edx*4+___1a01e0h+2ch], ecx
	
	push 	edx
	push 	ecx
		call    ___2b5f0h
	pop 	ecx
	pop 	edx

	push 	edx
	push 	ecx
		call    ___1caf4h
	pop 	ecx
	pop 	edx
	
		test    eax, eax
		je      short ___1d29fh
		mov     edi, ___1866b8h+3e8h
		mov     esi, __dfr_180d04h
		movsd   
		movsd   
		movsd   
		movsd   
		movsw   
		movsb   
___1d29fh:
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

section .data
ddash:
	db 	"-- ",0
__dfr_180ca4h:
	db 	" has left from Death Rally.",0
__dfr_180cc0h:
	db	49h,6eh,69h,74h,69h,61h,6ch,69h,7ah,65h,20h,41h,20h,4eh,65h,77h,20h,47h,61h,6dh,65h,0,0,0
__dfr_180cd8h:
	db	4ah,6fh,69h,6eh,20h,41h,6eh,20h,45h,78h,69h,73h,74h,69h,6eh,67h,20h,47h,61h,6dh,65h,0,0,0
__dfr_180cf0h:
	db	4eh,65h,74h,77h,6fh,72h,6bh,20h,43h,6fh,6eh,6eh,65h,63h,74h,69h,6fh,6eh,0,0
__dfr_180d04h:
	db	44h,69h,73h,63h,6fh,6eh,6eh,65h,63h,74h,20h,4eh,65h,74h,77h,6fh,72h,6bh,0,0
*/
