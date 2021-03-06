#include "drally.h"

#pragma pack(1)
typedef char char40[40];
typedef char char12[12];
typedef struct cardata_s {
    char12      		name;                           // +000
    __DWORD__   		price;                          // +00C
    char40      		txt_info[6];                    // +010
    char40      		txt_winfo[6];                   // +100
    char40      		txt_bought[6];                  // +1F0
    char40      		txt_engine_upgrades[4][6];      // +2E0
    __DWORD__   		n_engine_upgrades;              // +6A0
    __DWORD__   		n_tire_upgrades;                // +6A4
    __DWORD__   		n_armor_upgrades;               // +6A8
    __DWORD__   		price_engine_upgrades[4];       // +6AC
    __DWORD__   		price_tire_upgrades[4];         // +6BC
    __DWORD__   		price_armor_upgrades[4];        // +6CC
    __SIGNED_DWORD__   	price_repair;                   // +6DC
} cardata_t;

	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern void * ___1a1e98h;
	extern byte ___1a1ef8h[];
	extern cardata_t ___18e298h[6];
	extern byte ___1a01e0h[];
	extern byte ___1a1eb8h[];
	extern __DWORD__ ___1862bch[][0x18];
	extern void * ___1a01a8h[4];
	extern byte ___1a1ec8h[];

void ___259e0h_cdecl(dword, dword, dword, dword, dword);
void ___13094h_cdecl(const char *, dword);
dword ___25180h_cdecl(dword);
void ___12f60h_cdecl(dword, dword);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);
char * itoa_watcom106(int value, char * buffer, int radix);
	
static const char40 ___191100h[4][6] = {
	[0] = {
		[0] = "[4 cylinder motor installed",
		[1] = "",
		[2] = "This engine genie will let you",
		[3] = "win. It will grant your boy racer",
		[4] = "wishes.",
		[5] = ""
	},
	[1] = {
		[0] = "[Enhanced 4 cylinder installed",
		[1] = "",
		[2] = "Now any bitter regrets are in the",
		[3] = "past, just blurred, sweet street-",
		[4] = "lights speeding past fast.",
		[5] = ""
	},
	[2] = {
		[0] = "[V6 Injection motor installed",
		[1] = "",
		[2] = "If speeding is the 8th deadly sin,",
		[3] = "with this babe under your hood,",
		[4] = "you are now past redemption.",
		[5] = ""
	},
	[3] = {
		[0] = "[V8 Turbo Injection",
		[1] = "",
		[2] = "Gleaming pistons pumping in chorus",
		[3] = "with your hungry heart. This sweet",
		[4] = "symbiosis can cause addiction.",
		[5] = ""
	}
};

// SHOP ENGINE MAX UPGRADE UPDATE
void ___273d8h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp, p5;
	byte 	esp[0x28];


	ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0x27890;
	esi = ___1a1e98h;

	ecx = 0x60;
	while(1){

		H(ecx) = 0x60;
		while(1){

			B(ebx++) = B(esi++);
			H(ecx)--;
			if(H(ecx) == 0) break;
		}

		ebx += 0x280;
		ebx -= 0x60;
		L(ecx)--;
		if(L(ecx) == 0) break;
	}

	ebx = D(0x6c*D(___1a1ef8h)+___1a01e0h+0x10);
	eax = ___18e298h[D(0x6c*D(___1a1ef8h)+___1a01e0h+0x1c)].n_engine_upgrades;
	eax--;

	if(eax != ebx){

		___259e0h_cdecl(0x10, 0x10d, D(___1a1ec8h), ___1a01a8h[ebx], ___1862bch[ebx]);
		itoa_watcom106(___18e298h[D(0x6c*D(___1a1ef8h)+___1a01e0h+0x1c)].price_engine_upgrades[ebx+1], esp, 0xa);
		strcpy(esp+0x14, "$");
		strcat(esp+0x14, esp);
		___12f60h_cdecl(esp+0x14, ___25180h_cdecl(esp+0x14)+0x34590);
	}
	else {

		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0x2a090;
		esi = D(___1a1eb8h)+0x1800*eax;

		ecx = 0x40;
		while(1){

			H(ecx) = 0x60;
			while(1){

				B(ebx++) = B(esi++);
				H(ecx)--;
				if(H(ecx) == 0) break;
			}

			ebx += 0x280;
			ebx -= 0x60;
			L(ecx)--;
			if(L(ecx) == 0) break;
		}
	}

	___13248h_cdecl(0x90, 0x72, 0x180, 0x77, 1);
	___13094h_cdecl(___191100h[D(0x6c*D(___1a1ef8h)+___1a01e0h+0x10)][0], 0x136aa);
	___13094h_cdecl(___191100h[D(0x6c*D(___1a1ef8h)+___1a01e0h+0x10)][1], 0x15eaa);
	___13094h_cdecl(___191100h[D(0x6c*D(___1a1ef8h)+___1a01e0h+0x10)][2], 0x186aa);
	___13094h_cdecl(___191100h[D(0x6c*D(___1a1ef8h)+___1a01e0h+0x10)][3], 0x1aeaa);
	___13094h_cdecl(___191100h[D(0x6c*D(___1a1ef8h)+___1a01e0h+0x10)][4], 0x1d6aa);
	___13094h_cdecl(___191100h[D(0x6c*D(___1a1ef8h)+___1a01e0h+0x10)][5], 0x1feaa);
}
