%include "macros.inc"

    extern  __CHK
    extern  restore__keyboard
    extern  setmode3h__video
    extern  __CEXT_V(___1800c4h)
    extern  printf__clib3r
    extern  exit__clib3r

%include "layout.inc"

section @text

__GDECL(__CEXT_F(exitcb0))
		push    14h
		call    __CHK
		push    ebx
		push    ecx
		push    edx
		call    restore__keyboard
		call    setmode3h__video
		push    __CEXT_V(___1800c4h)
		call    printf__clib3r
		add     esp, 4
		mov     eax, 70h
		call    exit__clib3r
		pop     edx
		pop     ecx
		pop     ebx
		retn