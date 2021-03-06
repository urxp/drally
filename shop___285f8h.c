#include "drally.h"

#define COOXY(x,y) (0x280*(y)+(x))
#define COO10UV(u,v) (0x10*(v)+(u))

	extern byte ___24cc54h[];
	extern byte ___1a1ec4h[];
	extern byte ___1a1ee4h[];
	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___1a1e78h[];

void dRally_Sound_pushEffect(byte channel, byte n, dword unk, dword a0, dword a1, dword a2);
void ___25a74h(void);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___28470h(void);
void ___281d0h_cdecl(dword, dword, dword, dword);
void ___27f80h_cdecl(dword, dword, dword, dword);
void ___25e40h(void);
void ___262b4h(void);
void ___26650h(void);
void ___269e4h(void);

void shop___285f8h(void){

	int 	i, j;
	byte 	px;

	dRally_Sound_pushEffect(1, 0x1a, 0, D(___24cc54h), 0x28000, 0x8000);

	switch(D(___1a1ec4h)){
	case 0:
		D(___1a1ee4h) = (D(___1a1ee4h)+5)%6;
		___25a74h();

		j = -1;
		while(++j < 0x40){

			i = -1;
			while(++i < 0x10){

				px = B(D(___1a1e78h)+COO10UV(i, j+0x80));
				if(px != 0) B(D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+COOXY(i, j+0x8d)) = px;
			}
		}

		___12cb8h__VESA101_PRESENTSCREEN();
		___25a74h();
		___28470h();

		j = -1;
		while(++j < 0x40){

			i = -1;
			while(++i < 0x10){

				px = B(D(___1a1e78h)+COO10UV(i, j));
				if(px != 0) B(D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+COOXY(i, j+0x8d)) = px;
			}
		}

		___12cb8h__VESA101_PRESENTSCREEN();
		break;
	case 1:
		D(___1a1ec4h) = 0;
		___25a74h();
		___281d0h_cdecl(0xa, 0xf3, 0x6c, 0x72);
		___27f80h_cdecl(0, 0x73, 0x80, 0x72);
		___12cb8h__VESA101_PRESENTSCREEN();
		break; 
	case 2:
		D(___1a1ec4h) = 1;
		___25e40h();
		___281d0h_cdecl(0x72, 0xf3, 0x6c, 0x72);
		___27f80h_cdecl(0xa, 0xf3, 0x6c, 0x72);
		___12cb8h__VESA101_PRESENTSCREEN();
		break;
	case 3:
		D(___1a1ec4h) = 2;
		___262b4h();
		___281d0h_cdecl(0xda, 0xf3, 0x6c, 0x72);
		___27f80h_cdecl(0x72, 0xf3, 0x6c, 0x72);
		___12cb8h__VESA101_PRESENTSCREEN();
		break;
	case 4:
		D(___1a1ec4h) = 3;
		___26650h();
		___281d0h_cdecl(0x142, 0xf3, 0x6c, 0x72);
		___27f80h_cdecl(0xda, 0xf3, 0x6c, 0x72);
		___12cb8h__VESA101_PRESENTSCREEN();
		break;
	case 5:
		D(___1a1ec4h) = 4;
		___269e4h();
		___281d0h_cdecl(0x1aa, 0xf3, 0x6c, 0x72);
		___27f80h_cdecl(0x142, 0xf3, 0x6c, 0x72);
		___12cb8h__VESA101_PRESENTSCREEN();
		break;
	default:
		break;
	}
}
