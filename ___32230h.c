#include "drally.h"

	extern byte ___1a1028h[];
	extern byte ___1a0ef8h[];
	extern byte ___19bd60h[];
	extern byte ___1a1ef8h[];
	extern byte ___199f54h[];
	extern byte ___1a01e0h[];
	extern byte ___185a14h_UseWeapons[];
	extern byte ___185ba9h[];
	extern byte ___1a10cch[];

void ___12e78h_cdecl(dword, dword, dword, dword);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___17324h(void);
dword __GET_TIMER_TICKS(void);
void srand_watcom106(dword);
int rand_watcom106(void);
char * itoa_watcom106(int value, char * buffer, int radix);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);
void ___13094h_cdecl(const char *, dword);

dword ___32230h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp, p5;
	byte	esp[0x84];


		D(esp+0x80) = 0x2d;
		edx = D(___1a1028h);
		L(eax) = B(edx*4+___1a0ef8h);
		B(esp+0x78) = L(eax);
		L(eax) = B(edx*4+___1a0ef8h+1);
		B(esp+0x79) = L(eax);
		L(eax) = B(edx*4+___1a0ef8h+2);
		B(esp+0x7a) = L(eax);
		L(eax) = B(edx*4+___1a0ef8h+3);
		ebp = 0xa5;
		B(esp+0x7b) = L(eax);
		edx ^= edx;
		eax ^= eax;
		esi = D(___19bd60h);
		ebx = D(___1a1ef8h);
		ecx ^= ecx;
___3229ah:
		if(eax == ebx) goto ___322a8h;
		if(ecx != esi) goto ___322a8h;
		D(edx+___1a01e0h+0xc) = esi;
___322a8h:
		eax++;
		edx += 0x6c;
		if((int)eax < 0x14) goto ___3229ah;
		if(D(___199f54h) == 0) goto ___322c1h;
		eax ^= eax;
		goto ___3265eh;
___322c1h:
		eax = 0x1;
		ecx = D(___1a1ef8h);
		esi ^= esi;
		edx ^= edx;
		D(esp+0x7c) = eax;
		eax ^= eax;
___322d6h:
		ebx = D(edx+___1a01e0h+0x44);
		if((int)esi >= (int)ebx) goto ___322e6h;
		if(eax == ecx) goto ___322e6h;
		esi = ebx;
___322e6h:
		eax++;
		edx += 0x6c;
		if((int)eax < 0x14) goto ___322d6h;
		if(D(___19bd60h) != 0) goto ___32654h;
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x2;
		eax -= edx;
		eax <<= 0x2;
		if((int)esi < (int)D(eax+___1a01e0h+0x44)) goto ___32654h;
		if(D(___185a14h_UseWeapons) == 0) goto ___32654h;
		if(D(eax+___1a01e0h+0x68) != 1) goto ___32654h;
		eax ^= eax;
___3233bh:
		edx ^= edx;
		L(edx) = B(esp+eax+0x78);
		edx = 0x6c*edx;
		eax++;
		L(edx) = B(edx+___1a01e0h+0x48);
		B(esp+eax+0x33) = L(edx);
		if((int)eax < 4) goto ___3233bh;
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x2;
		eax -= edx;
		edi = B(esp+0x34);
		if(edi != D(eax*4+___1a01e0h+0x48)) goto ___3237bh;
		edi = B(esp+0x35);
___3237bh:
		edx = D(___1a1ef8h);
		esi = 8*edx;
		esi -= edx;
		esi <<= 0x2;
		esi -= edx;
		eax ^= eax;
		esi <<= 0x2;
___32394h:
		edx ^= edx;
		L(edx) = B(esp+eax+0x34);
		if((int)edx >= (int)edi) goto ___323a8h;
		if(edx == D(esi+___1a01e0h+0x48)) goto ___323a8h;
		edi = edx;
___323a8h:
		eax++;
		if((int)eax < 4) goto ___32394h;
		esi ^= esi;
___323b0h:
		eax ^= eax;
		L(eax) = B(esp+esi+0x78);
		eax = 0x6c*eax;
		if(edi == D(eax+___1a01e0h+0x48)) goto ___323c4h;
		esi++;
		goto ___323b0h;
___323c4h:
		eax = __GET_TIMER_TICKS();
		srand_watcom106(eax);
		eax = rand_watcom106();
		edx = eax;
		ecx = 0x19;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ecx);
		edi = edx+ecx;
		edx ^= edx;
		L(edx) = B(esp+esi+0x78);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x2;
		eax -= edx;
		ebx = 0xa;
		edx = esp+0x6c;
		D(eax*4+___1a01e0h+0xc) = edi;
		eax = edi;
		eax = itoa_watcom106(eax, edx, ebx);
		edx ^= edx;
		L(edx) = B(esp+esi+0x78);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x2;
		ecx = 0xc3;
		eax -= edx;
		esi = ___1a01e0h;
		eax <<= 0x2;
		edi = esp+0x5c;
		esi += eax;
		ebx = 0x1ca;
		strcpy(edi, esi);
		edx = ebp;
		eax = D(esp+0x80);
		___13248h_cdecl(eax, edx, ebx, ecx, 1);
		edx = ebp+0x28;
		eax = 4*edx;
		eax += edx;
		edx = D(esp+0x80);
		eax <<= 0x7;
		edx += eax;
		edx += 0x38;
		edi = esp;
		___13094h_cdecl("Money talks, and [the damage is", edx);
		strcpy(edi, "[done, ");
		esi = esp+0x6c;
		edi = esp;
		strcat(edi, esi);
		esi = "% worth! Sabotage says that";
		edi = esp;
		edx = ebp+0x38;
		strcat(edi, esi);
		eax = 4*edx;
		eax += edx;
		esi = D(esp+0x80);
		eax <<= 0x7;
		eax += esi;
		edx = eax+0x38;
		___13094h_cdecl(esp, edx);
		edi = esp;
		strcpy(edi, "[");
		esi = esp+0x5c;
		edi = esp;
		strcat(edi, esi);
		esi = " is going down{ and staying";
		edi = esp;
		edx = ebp+0x48;
		strcat(edi, esi);
		eax = 4*edx;
		eax += edx;
		edi = D(esp+0x80);
		eax <<= 0x7;
		eax += edi;
		edx = eax+0x38;
		___13094h_cdecl(esp, edx);
		edx = ebp+0x58;
		eax = 4*edx;
		eax += edx;
		eax <<= 0x7;
		edx = edi+eax;
		edx += 0x38;
		___13094h_cdecl("down. That's dough baked luck for", edx);
		edx = ebp+0x68;
		eax = 4*edx;
		eax += edx;
		eax <<= 0x7;
		eax += edi;
		edx = eax+0x38;
		___13094h_cdecl("you. And luck, she ain't no lady.", edx);
		___13094h_cdecl("", edi+0x280*(ebp+0x73)+0x38);
		___12e78h_cdecl(D(___1a10cch), ___185ba9h, "CONTINUE", 0x280*(ebp+0x96)+0xc0);
		___12cb8h__VESA101_PRESENTSCREEN();
		___17324h();
		return D(esp+0x7c);
___32654h:
		esi ^= esi;
		D(esp+0x7c) = esi;
		eax = D(esp+0x7c);
___3265eh:
		return eax;
}
