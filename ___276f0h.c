#include "drally.h"

typedef char char40[40];

	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern void * ___1a1e98h;
	extern byte ___1a1ef8h[];
	extern byte ___18e298h[];
	extern byte ___1a01e0h[];
	extern byte ___1a1eb8h[];
	extern __DWORD__ ___18643ch[][0xc];
	extern void * ___1a0198h[4];
	extern byte ___1a1ec0h[];

void ___259e0h_cdecl(dword, dword, dword, dword, dword);
void ___13094h_cdecl(const char *, dword);
dword ___25180h_cdecl(dword);
void ___12f60h_cdecl(dword, dword);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);
char * itoa_watcom106(int value, char * buffer, int radix);

static const char40 ___191880h[4][6] = {
	[0] = {
		[0] = "[Trackmaster 155 bought",
		[1] = "",
		[2] = "Warp 9, Captain. No problems with",
		[3] = "traction now. The finish line,",
		[4] = "she's closing fast.",
		[5] = ""
	},
	[1] = {
		[0] = "[Roadrunner NS 175 bought",
		[1] = "",
		[2] = "On these wheels, your vehicle",
		[3] = "starts like a nuclear blast, and",
		[4] = "stops you like a cardiac arrest.",
		[5] = ""
	},
	[2] = {
		[0] = "[Slidestop 200 bought",
		[1] = "",
		[2] = "Now fast talk to that asphalt,",
		[3] = "motormouth. Time to make some",
		[4] = "beautiful automobile poetry.",
		[5] = ""
	},
	[3] = {
		[0] = "[Racer-X230 bought",
		[1] = "",
		[2] = "Smart move, motorman. Now get out",
		[3] = "there, and do some dashing, dare-",
		[4] = "devilish damage.",
		[5] = ""
	}
};

// SHOP TIRES MAX UPGRADE UPDATE
void ___276f0h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x28];


		ecx = 0x60;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = ___1a1e98h+0x2400;
		ebx += 0x278f8;
		edx = ecx;
		L(edx) >>= 0x2;
___2771eh:
		H(ecx) = L(edx);
___27720h:
		eax = D(esi);
		D(ebx) = eax;
		ebx += 0x4;
		esi += 0x4;
		H(ecx)--;
		if(H(ecx)) goto ___27720h;
		ebx += 0x280;
		L(edx) <<= 0x2;
		ebx -= edx;
		L(edx) >>= 0x2;
		L(ecx)--;
		if(L(ecx)) goto ___2771eh;
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x2;
		eax -= edx;
		edx = 4*eax;
		ebx = D(edx+___1a01e0h+0x1c);
		eax = 8*ebx;
		eax -= ebx;
		eax <<= 0x3;
		eax -= ebx;
		eax <<= 0x5;
		eax = D(eax+___18e298h+0x6a4);
		ebx = D(edx+___1a01e0h+0x14);
		eax--;
		if(eax != ebx) goto ___277ddh;
		ecx = 0x40;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		edx = eax;
		eax = D(___1a1eb8h);
		esi = 4*edx;
		ebx += 0x2a0f8;
		esi -= edx;
		eax += 0x6000;
		esi <<= 0xb;
		edx = 0x60;
		esi += eax;
		L(edx) >>= 0x2;
___277b6h:
		H(ecx) = L(edx);
___277b8h:
		eax = D(esi);
		D(ebx) = eax;
		ebx += 0x4;
		esi += 0x4;
		H(ecx)--;
		if(H(ecx)) goto ___277b8h;
		ebx += 0x280;
		L(edx) <<= 0x2;
		ebx -= edx;
		L(edx) >>= 0x2;
		L(ecx)--;
		if(L(ecx)) goto ___277b6h;
		goto ___2789fh;
___277ddh:
		___259e0h_cdecl(0x78, 0x10d, D(___1a1ec0h), ___1a0198h[ebx], ___18643ch[ebx]);
		edx = D(___1a1ef8h);
		ebx = 8*edx;
		ebx -= edx;
		ebx <<= 0x2;
		ebx -= edx;
		ebx <<= 0x2;
		edx = D(ebx+___1a01e0h+0x1c);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x3;
		eax -= edx;
		edx = eax;
		eax = D(ebx+___1a01e0h+0x14);
		edx <<= 0x5;
		ebx = 0xa;
		eax = D(edx+eax*4+___18e298h+0x6c0);
		itoa_watcom106(eax, esp, ebx);
		strcpy(esp+0x14, "$");
		strcat(esp+0x14, esp);
		edx = ___25180h_cdecl(esp+0x14)+0x345f8;
		eax = esp+0x14;
		___12f60h_cdecl(eax, edx);
___2789fh:
		ecx = 0x77;
		ebx = 0x180;
		edx = 0x72;
		eax = 0x90;
		___13248h_cdecl(eax, edx, ebx, ecx, 1);
		___13094h_cdecl(___191880h[D(___1a01e0h+0x14+0x6c*D(___1a1ef8h))][0], 0x136aa);
		___13094h_cdecl(___191880h[D(___1a01e0h+0x14+0x6c*D(___1a1ef8h))][1], 0x15eaa);
		___13094h_cdecl(___191880h[D(___1a01e0h+0x14+0x6c*D(___1a1ef8h))][2], 0x186aa);
		___13094h_cdecl(___191880h[D(___1a01e0h+0x14+0x6c*D(___1a1ef8h))][3], 0x1aeaa);
		___13094h_cdecl(___191880h[D(___1a01e0h+0x14+0x6c*D(___1a1ef8h))][4], 0x1d6aa);
		___13094h_cdecl(___191880h[D(___1a01e0h+0x14+0x6c*D(___1a1ef8h))][5], 0x1feaa);
		return;
}
