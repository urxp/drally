%include "macros.inc"

    extern  __CHK
    
    extern  __CEXT_V(___182818h)
    extern  __CEXT_V(___182824h)
    extern  __CEXT_V(___182830h)
    extern  __CEXT_V(___18283ch)
    extern  __CEXT_V(___182848h)
    extern  __CEXT_V(___182854h)
    extern  __CEXT_V(MENU_BPA)
    extern  __CEXT_V(BPA_Buffer)
    extern  __CEXT_V(VGABufferPtr_0)

    extern  __CEXT_F(read__bpa)
    extern  __CEXT_F(loadPalette)
    extern  __CEXT_F(writeColor__video)
    extern  __CEXT_F(decode2__bpk)
    extern  __CEXT_F(popScreen)
    extern  __CEXT_F(fadeinScreen)
    extern  __CEXT_F(waitSync__dr)
    extern  __CEXT_F(lastScanCode__keyboard)
    extern  __CEXT_F(fadeoutScreen)

%include "layout.inc"

section @text

;; 3d38ch
__GDECL(__CEXT_F(apogee_gt_remedy))
		push    30h
		call    __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 4
		xor     edx, edx
		mov     [esp], edx
___3d3a4h:
		xor     eax, eax
		mov     al, [esp]
		push    eax
		push    byte 0
		push    byte 0
		push    byte 0
		call    __CEXT_F(writeColor__video)
		mov     ebx, [esp]
		inc     ebx
		mov     [esp], ebx
		cmp     ebx, 100h
		jl      ___3d3a4h
		mov     eax, __CEXT_V(___182818h)
		mov     ebx, __CEXT_V(___182824h)
		mov     edx, __CEXT_V(BPA_Buffer)
		call    __CEXT_F(loadPalette)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     esi, [__CEXT_V(VGABufferPtr_0)]
		xor     edi, edi
		push    esi
		mov     [esp+8], edi
		call    __CEXT_F(decode2__bpk)
		call    __CEXT_F(popScreen)
		call    __CEXT_F(fadeinScreen)
___3d403h:
		mov     ebp, [esp]
		call    __CEXT_F(waitSync__dr)
		inc     ebp
		call    __CEXT_F(lastScanCode__keyboard)
		mov     [esp], ebp
		test    al, al
		jne     ___3d420h
		cmp     ebp, 0b4h
		jl      ___3d403h
___3d420h:
		call    __CEXT_F(fadeoutScreen)
		mov     eax, __CEXT_V(___182830h)
		mov     ebx, __CEXT_V(___18283ch)
		mov     edx, __CEXT_V(BPA_Buffer)
		call    __CEXT_F(loadPalette)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     edx, [__CEXT_V(VGABufferPtr_0)]
		push    edx
		call    __CEXT_F(decode2__bpk)
		call    __CEXT_F(popScreen)
		xor     ebx, ebx
		call    __CEXT_F(fadeinScreen)
		mov     [esp], ebx
___3d463h:
		mov     ecx, [esp]
		call    __CEXT_F(waitSync__dr)
		inc     ecx
		call    __CEXT_F(lastScanCode__keyboard)
		mov     [esp], ecx
		test    al, al
		jne     ___3d480h
		cmp     ecx, 0b4h
		jl      ___3d463h
___3d480h:
		call    __CEXT_F(fadeoutScreen)
		mov     eax, __CEXT_V(___182848h)
		mov     ebx, __CEXT_V(___182854h)
		mov     edx, __CEXT_V(BPA_Buffer)
		call    __CEXT_F(loadPalette)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     edi, [__CEXT_V(VGABufferPtr_0)]
		xor     ebp, ebp
		push    edi
		mov     [esp+8], ebp
		call    __CEXT_F(decode2__bpk)
		call    __CEXT_F(popScreen)
		call    __CEXT_F(fadeinScreen)
___3d4c4h:
		call    __CEXT_F(waitSync__dr)
		inc     dword [esp]
		call    __CEXT_F(lastScanCode__keyboard)
		test    al, al
		jne     ___3d4deh
		cmp     dword [esp], 0b4h
		jl      ___3d4c4h
___3d4deh:
		call    __CEXT_F(fadeoutScreen)
		add     esp, byte 4
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
