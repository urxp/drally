#include "drally.h"

	extern byte ___1a1ef0h[];
	extern byte ___24cc54h[];

void dRally_Sound_pushEffect(byte channel, byte n, dword unk, dword a0, dword a1, dword a2);
void ___2d294h(void);
void ___281d0h_cdecl(dword, dword, dword, dword);
void ___27f80h_cdecl(dword, dword, dword, dword);
void ___12cb8h__VESA101_PRESENTSCREEN(void);

// SOMETHING WITH LOANSHARK
void ___2deb0h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;


		ecx = D(___1a1ef0h);
		if(ecx != 1) goto ___2df2fh;
		eax = 0x1;
		ecx = D(___24cc54h);
		ebx = 0;
		edx = 0x1a;
		dRally_Sound_pushEffect(eax, edx, ebx, ecx, 0x28000, 0x8000);
		ecx = 0x72;
		ebx = 0;
		edx = 0xf3;
		D(___1a1ef0h) = ebx;
		___2d294h();
		ebx = 0x6c;
		eax = 0xa;
		___281d0h_cdecl(eax, edx, ebx, ecx);
		ecx = 0x72;
		ebx = 0x6c;
		edx = 0x73;
		eax = 0xa;
		___27f80h_cdecl(eax, edx, ebx, ecx);
		___12cb8h__VESA101_PRESENTSCREEN();
___2df2fh:
		return;
}
