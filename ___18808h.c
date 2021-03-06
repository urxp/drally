#include "drally.h"
#include "drally_structs.h"

void * ___3f71ch__allocateMemory(dword);
void dRally_Memory_free(void *);
void dR_decodeSavedGame(saved_game_t *);

void ___18808h_cdecl(char * A1, const char * A2){

	FILE * 	fd;
	int 	n;
	saved_game_t * sg;


	sg = ___3f71ch__allocateMemory(sizeof(saved_game_t));
	memset(sg, 0, sizeof(saved_game_t));
	fd = strupr_fopen(A2, "rb");
	fread(sg, sizeof(saved_game_t), 1, fd);
	fclose(fd);
	
	dR_decodeSavedGame(sg);

	n = -1;
	while(++n < 0xf) A1[n] = sg->name[n];

	dRally_Memory_free(sg);
}
