#include "drally.h"

	extern byte ___1a1028h[];
	extern byte ___1de7d0h[];
	extern byte ___1a0ef8h[];
	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___1a0fech[];
	extern byte ___185c0bh[];
	extern byte ___1a1108h[];
	extern byte ___1a01e0h[];
	extern byte ___1a1ef8h[];
	extern byte ___196ab0h[];
	extern byte ___1a0fb0h[];
	extern byte ___185c7ah[];
	extern byte ___1a10b8h[];

void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___12e78h_cdecl(dword, dword, dword, dword);
void ___38184h_cdecl(dword, dword);
void ___35dd0h(void);
void ___35f34h_cdecl(dword, dword, dword);
char * itoa_watcom106(int value, char * buffer, int radix);

static const int EasyPoints[3] = {3, 2, 1};
static char Points[8];

static char * fmtPoints(int val){

	return itoa_watcom106(val, strcpy(Points, "+")+1, 10)-1;
}

// EASY RACE RESULTS
void ___36068h_cdecl(dword A1){

    dword   eax, ebx, ecx, edx, edi, esi, ebp;
    byte    esp[8];
	int 	i, j, n;
	byte 	px;

 
	if(D(___1a1028h)){

		___35f34h_cdecl(0, 3, 0);
		B(esp) = B(___1a0ef8h+3);
		B(esp+1) = B(___1a0ef8h+2);
		B(esp+2) = B(___1a0ef8h+1);
		B(esp+3) = B(___1a0ef8h);
	}
	else {

		n = -1;
		while(++n < 4){

			if(D(0x54*n+D(___1a1028h)+___1de7d0h+0x40) == 1) B(esp) = B(n+___1a0ef8h);
			if(D(0x54*n+D(___1a1028h)+___1de7d0h+0x40) == 2) B(esp+1) = B(n+___1a0ef8h);
			if(D(0x54*n+D(___1a1028h)+___1de7d0h+0x40) == 3) B(esp+2) = B(n+___1a0ef8h);
			if(D(0x54*n+D(___1a1028h)+___1de7d0h+0x40) == 4) B(esp+3) = B(n+___1a0ef8h);
		}
	}

	if(A1 == 0){

		___35dd0h();

		j = -1;
		while(++j < 0x14){

			i = -1;
			while(++i < 0x110){

				if((px = B(D(___1a0fech)+0x110*j+i))) B(D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0xd362+0x280*j+i) = px;
			}
		}

		___12e78h_cdecl(D(___1a1108h), ___185c0bh, "Easy Race Results", 0xd890);
		___38184h_cdecl(0x4, esp);
	}

	n = -1;
	while(++n < 3){

		if((A1 == 0)&&(D(0x6c*B(esp+n)+___1a01e0h+0xc) != 0x64)){

			if((B(esp+n) == D(___1a1ef8h))&&(D(___196ab0h) == 1)) break;

			j = -1;
			while(++j < 0x12){

				i = -1;
				while(++i < 0x2a){

					if((px = B(D(___1a0fb0h)+0x2a*j+i))) B(D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0x280*(0x13*B(esp+n)+0x57)+0xd9+0x280*j+i) = px;
				}
			}
		}

		if((D(0x6c*B(esp+n)+___1a01e0h+0xc) != 0x64)&&((B(esp+n) != D(___1a1ef8h))||(D(___196ab0h) != 1))){

			D(0x6c*B(esp+n)+___1a01e0h+0x44) += EasyPoints[n];
			___12e78h_cdecl(D(___1a10b8h), ___185c7ah, fmtPoints(EasyPoints[n]), 0x280*(0x13*B(esp+n)+0x59)+0xe6);
		}

	}

	if(A1 == 0){
	
		___12e78h_cdecl(D(___1a1108h), ___185c0bh, "Press any key to continue...", 0x46b6e);
		___12cb8h__VESA101_PRESENTSCREEN();
	}
}
