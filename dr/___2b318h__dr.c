#include "x86.h"

#pragma pack(1)

typedef struct pal3 {
    byte    __0;
    byte    __1;
    byte    __2;
} pal3;

typedef struct Driver {
    char    Name[0xc];      // +0
    dword   Damage;         // +ch
    dword   Engine;         // +10h
    dword   Tire;           // +14h
    dword   Armor;          // +18h
    dword   Car;            // +1ch
    dword   __20;
    dword   __24;
    dword   __28;
    dword   Color;
    dword   Money;          // +30h
    dword   __34;
    dword   __38;
    dword   CarPrice;       // +3ch
    dword   Face;           // +40h
    dword   Points;         // +44h
    dword   Standings;      // +48h
    dword   __4c;
    dword   __50;
    dword   __54;
    dword   __58;
    dword   __5c;
    dword   __60;
    dword   __64;
    dword   __68;
} Driver;

    extern dword MyID;
    extern Driver Roster[];
    extern int ___196ad8h;
    extern pal3 * bgcop_pal_p;
    extern pal3 * ___1a0fb8h;

	// 0.015625 (1/64)
    extern double ___1821e2h;

    extern byte ___19df50h[];
    extern byte ___19df54h[];
    extern byte ___1a1edch[];
    extern byte ___19df58h[];

    extern byte ___19eb50h[];


    void ___11564h(float, float, float);
    void ___24010h(float, float, float);

    void ___12940h(void);

    static dword idiv_quo(dword, dword, dword);
#if defined(__WATCOMC__)
    #pragma aux idiv_quo =      \
        "idiv   ebx"            \
        parm [eax] [edx] [ebx]
#endif

    static dword imul_edx(dword, dword);
    #pragma aux imul_edx =      \
        "imul edx"              \
        parm [eax][edx]         \
        value [edx]

    static dword imul_eax(dword, dword);
    #pragma aux imul_eax =      \
        "imul edx"              \
        parm [eax][edx]         \
        value [eax]


// 2b318h
void ___2b318h(void){

	dword 	n, i;
	dword 	eax, ebx, ecx, edx, esi, edi, ebp;

	___12940h();

	___11564h(
		(float)___1a0fb8h[Roster[MyID].Color].__0,
		(float)___1a0fb8h[Roster[MyID].Color].__1,
		(float)___1a0fb8h[Roster[MyID].Color].__2
	);

	___24010h(
		(float)___1a0fb8h[Roster[MyID].Color].__0,
		(float)___1a0fb8h[Roster[MyID].Color].__1,
		(float)___1a0fb8h[Roster[MyID].Color].__2
	);

	n = 0;

	while(n < 0x20){

		D(0x900+0xc*n+___19eb50h) =
			((int)(bgcop_pal_p[___196ad8h].__0 * ___1821e2h * n) << 0x10) / 0x64;
		D(0x900+0xc*n+___19eb50h+4) =
			((int)(bgcop_pal_p[___196ad8h].__1 * ___1821e2h * n) << 0x10) / 0x64;
		D(0x900+0xc*n+___19eb50h+8) =
			((int)(bgcop_pal_p[___196ad8h].__2 * ___1821e2h * n) << 0x10) / 0x64;

		n++;
	}

	ecx = 0xc0;

	while(ecx != 0x180){

		eax = D(ecx+___19df50h);
		edx = D(___1a1edch) << 0x10;
		esi = imul_eax(eax, edx);
		edx = imul_edx(eax, edx);
		eax = esi + 0x8000;
		if(eax < 0x8000) edx++;
		eax = eax >> 0x10;
		edx = edx << 0x10;
		eax = eax + edx;
		eax = eax + 0x8000;
		edx = eax & 0xffff0000;
		D(ecx+___19eb50h) = edx / 0x64;

		ecx +=4;
	}
}
