#include "drally_structs.h"

int rand_watcom106(void);

static __BYTE__ rolb(__BYTE__ b, int n){ return (b<<n)|(b>>(8-n)); }
static __BYTE__ rorb(__BYTE__ b, int n){ return (b>>n)|(b<<(8-n)); }

void dR_encodeSavedGame(saved_game_t * sg){

    int n;

	sg->key = rand_watcom106()%0xff;

    n = 0;
	while(++n < sizeof(saved_game_t)) *((__BYTE__ *)sg+n) = rorb(*((__BYTE__ *)sg+n)+0x11*n-sg->key, n%6);
}

void dR_decodeSavedGame(saved_game_t * sg){

    int n;

    n = 0;
    while(++n < sizeof(saved_game_t)) *((__BYTE__ *)sg+n) = rolb(*((__BYTE__ *)sg+n), n%6)-0x11*n+sg->key;
}
