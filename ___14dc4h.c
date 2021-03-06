#include "drally.h"

#pragma pack(push,1)
typedef struct racer_s {
	char 	name[0xc];			//	+0
	dword 	damage;				// 	+0xc
	int 	engine;				// 	+0x10
	dword 	tires;				// 	+0x14
	dword 	armor;				//	+0x18
	dword 	car;				//	+0x1c
	char 	unk0[0xc];			// 	+0x20
	dword 	color;				// 	+0x2c
	int 	money;				//	+0x30
	char 	unk2[0x8];			// 	+0x34
	dword 	refund;				// 	+0x3c
	dword 	face;				// 	+0x40
	dword 	points;				// 	+0x44
	dword 	rank;				// 	+0x48
	dword 	wins;				// 	+0x4c
	dword 	races;				// 	+0x50
	char 	unk3[4];			// 	+0x54
	dword 	income;				// 	+0x58
	dword 	mines;				// 	+0x5c
	dword 	spikes;				// 	+0x60
	dword 	rocket_fuel;		// 	+0x64
	dword 	sabotage;			//	+0x68
} racer_t;

typedef char char80[80];
typedef struct eventtext_s {
	char80 	l0;
	char80 	l1;
	char80 	l2;
	char80 	l3;
	char80 	l4;
	char80 	l5;
	char80 	l6;
	char80 	l7;
	char80 	l8;
	char80 	l9;
} eventtext_t;
#pragma pack(pop)

	extern byte ___1a1ef8h[];

#define Racers ___1a01e0h
	extern racer_t ___1a01e0h[];


	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___1a1e74h[];
	extern byte ___1a1ef8h[];
	extern byte ___185ba9h[];
	extern byte ___1a10cch[];

static const eventtext_t l_data[6] = {
	{
		"",
		"",
		"[Not too shabby, driver.",
		"",
		"[Your wild winning streak has earned",
		"[you an extra 600 bucks.{ But don't",
		"get cocky, those other wannabe",
		"victory hounds are going to zero",
		"right into your blazing taillights.",
		"And they want to get you bad."
	},
	{
		"",
		"",
		"[Not too shabby, driver.",
		"",
		"[Your wild winning streak has earned",
		"[you an extra 1,000 bucks.{ But don't",
		"get cocky, those other wannabe",
		"victory hounds are going to zero",
		"right into your blazing taillights.",
		"And they want to get you bad."
	},
	{
		"",
		"",
		"[Not too shabby, driver.",
		"",
		"[Your wild winning streak has earned",
		"[you an extra 2,000 bucks.{ But don't",
		"get cocky, those other wannabe",
		"victory hounds are going to zero",
		"right into your blazing taillights.",
		"And they want to get you bad."
	},
	{
		"",
		"",
		"[Not too shabby, driver.",
		"",
		"[Your wild winning streak has earned",
		"[you an extra 3,000 bucks.{ But don't",
		"get cocky, those other wannabe",
		"victory hounds are going to zero",
		"right into your blazing taillights.",
		"And they want to get you bad."
	},
	{
		"",
		"",
		"[Not too shabby, driver.",
		"",
		"[Your wild winning streak has earned",
		"[you an extra 4,000 bucks.{ But don't",
		"get cocky, those other wannabe",
		"victory hounds are going to zero",
		"right into your blazing taillights.",
		"And they want to get you bad."
	},
	{
		"",
		"",
		"[Not too shabby, driver.",
		"",
		"[Your wild winning streak has earned",
		"[you an extra 5,000 bucks.{ But don't",
		"get cocky, those other wannabe",
		"victory hounds are going to zero",
		"right into your blazing taillights.",
		"And they want to get you bad."
	}
};




void ___13248h_cdecl(dword, dword ,dword, dword, dword);
void ___12e78h_cdecl(dword, dword, dword, dword);
void ___13094h_cdecl(const char *, dword);

// WINNING STREAK
void ___14dc4h(void){

	int 	m, n;
	byte 	px;


	___13248h_cdecl(0x21, 0x83, 0x1e2, 0xe6, 1);	

	n = -1;
	while(++n < 0x80){

		m = -1;
		while(++m < 0x68){

			px = B(D(___1a1e74h)+0x68*n+m);
			if(px != 0) B(D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0x1a42d+0x280*n+m) = px;
		}
	}

	n = 0;

	if(Racers[D(___1a1ef8h)].car == 5){

		n = 5;
		Racers[D(___1a1ef8h)].money += 0x1388;
	}

	if(Racers[D(___1a1ef8h)].car == 4){
	
		n = 4;
		Racers[D(___1a1ef8h)].money += 0xfa0;
	}

	if(Racers[D(___1a1ef8h)].car == 3){

		n = 3;
		Racers[D(___1a1ef8h)].money += 0xbb8;
	}

	if(Racers[D(___1a1ef8h)].car == 2){

		n = 2;
		Racers[D(___1a1ef8h)].money += 0x7d0;
	}

	if(Racers[D(___1a1ef8h)].car == 1){

		n = 1;
		Racers[D(___1a1ef8h)].money += 0x3e8;
	}

	if(Racers[D(___1a1ef8h)].car == 0){
			
		n = 0;
		Racers[D(___1a1ef8h)].money += 0x258;
	}

	___13094h_cdecl(l_data[n].l0, 0x154a1);
	___13094h_cdecl(l_data[n].l1, 0x17ca1);
	___13094h_cdecl(l_data[n].l2, 0x1a4a1);
	___13094h_cdecl(l_data[n].l3, 0x1cca1);
	___13094h_cdecl(l_data[n].l4, 0x1f4a1);
	___13094h_cdecl(l_data[n].l5, 0x21ca1);
	___13094h_cdecl(l_data[n].l6, 0x244a1);
	___13094h_cdecl(l_data[n].l7, 0x26ca1);
	___13094h_cdecl(l_data[n].l8, 0x294a1);
	___13094h_cdecl(l_data[n].l9, 0x2bca1);
	___12e78h_cdecl(D(___1a10cch), ___185ba9h, "CONTINUE", 0x316c0);
}
