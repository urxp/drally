%include "macros.inc"
	
	extern 	__CHK	
	extern 	__CEXT_F(loadcdromini__dr)	
	extern 	chkmemory__dr	
	extern 	__CEXT_F(chkfiles__dr)	
	extern 	___1a202fh	
	extern 	___199fa0h	
	extern 	__STOSB	
	extern 	___1a2148h	
	extern 	___2415ch	
	extern 	readConfig__dr	
	extern 	__CEXT_F(exitcb2__dr)	
	extern 	__CEXT_V(ExitCB)	
	extern 	TimesPlayed	
	extern 	__CEXT_F(writeConfig__dr)	
	extern 	___182bf8h	
	extern 	__CEXT_F(printf__clib3r)	
	extern 	___181c9ch	
	extern 	intro__anim	
	extern 	___181ca8h	
	extern 	___64864h	
	extern 	ConfigMusicVolume	
	extern 	___6572ch	
	extern 	ConfigSFXVolume	
	extern 	___65770h	
	extern 	___658b8h	
	extern 	___65990h	
	extern 	___648d8h	
	extern 	___659b8h	
	extern 	___196abch	
	extern 	___1a2011h	
	extern 	___196abdh	
	extern 	___1a2012h	
	extern 	___196abeh	
	extern 	Gamepad	
	extern 	___1a2013h	
	extern 	___196abfh	
	extern 	___196ab8h	
	extern 	___1a2014h	
	extern 	___181c30h	
	extern 	___596f0h	
	extern 	___186cc6h	
	extern 	___181c4ch	
	extern 	ToneDialing	
	extern 	___187432h	
	extern 	__CEXT_V(string__pulse_dialing)	
	extern 	srand__clib3r	
	extern 	___606dfh	
	extern 	__CEXT_F(chkbankswitch__video)	
	extern 	__CEXT_F(setmode3h__video)	
	extern 	___182c24h	
	extern 	___182cb8h		
	extern 	__CEXT_F(___5ec04h)	
	extern 	__CEXT_F(restore__keyboard)	
	extern 	__CEXT_F(exit__clib3r)	
	extern 	__CEXT_F(___605deh)	
	extern 	allocVGABuffer	
	extern 	___3d38ch	
	extern 	___3d890h	
	extern 	___1a1f4fh	
	extern 	RowBox0Colors_R5	
	extern 	___2b318h	
	extern 	___5e0f9h	
	extern 	___VGABufferPtr_0	
	extern 	VGABufferPtr_0	
	extern 	___146c4h	
	extern 	__CEXT_V(STRING_CONTINUE)		
	extern 	lastScanCode__keyboard	
	extern 	hallOfFameMenu__dr	
	extern 	___182de4h	
	extern 	__CEXT_F(strcmp__clib3r)	
	extern 	__CEXT_V(___180864h)	
	extern 	___1a1dbah	
	extern 	___24e4d0h	
	extern 	__CEXT_F(___64a28h)	
	extern 	___117f4h	
	extern 	___1240ch	
	extern 	___117c8h	
	extern 	___24548h	
	extern 	___2faf0h	
	extern 	___3d2bch	
	extern 	___12940h	
	extern 	___1a1ef8h	
	extern 	___1a020ch	
	extern 	___1a0fb8h	
	extern 	___11564h	
	extern 	GXBackBuffer
	extern 	__CEXT_V(___180130h)	
	extern 	___1a0220h	
	extern 	___1a01e0h	
	extern 	RowBoxBuffers	
	extern 	___1a1f4dh	
	extern 	___182d08h	
	extern 	___182d3ch	
	extern 	___1a1f4eh	
	extern 	___182d78h		
	extern 	frameFooter__dr	
	extern 	footer__dr	
	extern 	___13710h	
	extern 	___196d84h	
	extern 	___185a2ch	
	extern 	___196a84h	
	extern 	___12cb8h	
	extern 	___58c60h	
	extern 	___13a98h	
	extern 	___19eb50h	
	extern 	___19eb54h	
	extern 	___19eb58h	
	extern 	___1a10e4h	
	extern 	___1a1124h	
	extern 	___3a7e0h	
	extern 	___649a8h	
	extern 	___1a1ef4h	
	extern 	___65710h		
	extern 	___12dc4h	
	extern 	__CEXT_F(chkcdrom__dr)	
	extern 	___13248h	
	extern 	___182db8h	
	extern 	Font0Props	
	extern 	WhiteFont0Ptr	
	extern 	renderTextToBuffer__video	
	extern 	___185ba9h	
	extern 	___1a10cch	
	extern 	updateScreen_TBD		
	extern 	___1854bch	
	extern 	playSFX__sound	
	extern 	nullScanCode__keyboard	
	extern 	delay_TBD	
	extern 	startRacingMenu__dr	
	extern 	multiplayerRaceMenu__dr	
	extern 	configureMenu__dr	
	extern 	creditsMenu__dr	
	extern 	showPreviewMenu__dr	
	extern 	___148cch	
	extern 	__CEXT_V(___19bd60h)	
	extern 	___180ba0h	
	extern 	___186a6eh	
	extern 	___1a1ef8h	
	extern 	___1a01e0h	
	extern 	___180ca4h	
	extern 	___23488h		
	extern 	___18108ch
	extern 	___61278h	
	extern 	__CEXT_F(___623d4h)	
	extern 	___3d79ch	
	extern 	__CEXT_F(___12200h)	
	extern 	__CEXT_F(___12a54h)	
	extern 	__CEXT_F(___24ec0h)	
	extern 	__CEXT_F(___2fc50h)	
	extern 	___649a8h


%include "layout.inc"

section @text

@drmainmenu:
dd	@drmultiplayer
dd	@drstartracing
dd	@drmultiplayer
dd	@drconfigure
dd	@drhof
dd	@drcredits
dd	@drpreview
dd	@drexit
__GDECL(__CEXT_F(startup__dr))
		push    58h
		call    __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 2ch
		xor     edx, edx
		mov     ecx, 4eh
		mov     [esp+24h], edx
		mov     [esp+0ch], edx
		mov     [esp+18h], ecx
		call    __CEXT_F(loadcdromini__dr)
		call    chkmemory__dr
		call    __CEXT_F(chkfiles__dr)
		mov     ecx, 13h
		mov     eax, ___1a202fh
		mov     [___199fa0h], edx
		call    __STOSB
		xor     ah, ah
		mov     esi, 0afh
		mov     [___1a2148h], ah
		call    ___2415ch
		call    readConfig__dr
		mov     eax, [TimesPlayed]
		mov     ebp, __CEXT_F(exitcb2__dr)
		inc     eax
		mov     [__CEXT_V(ExitCB)], ebp
		mov     [TimesPlayed], eax
		call    __CEXT_F(writeConfig__dr)
		push    ___182bf8h 			;; "Loading music & ..."
		mov     [esp+24h], esi
		call    __CEXT_F(printf__clib3r)
		add     esp, byte 4
		mov     ebx, 2
		mov     ecx, ___181c9ch		;; "MEN-SAM.CMF"
		call    intro__anim
		push    byte 5
		mov     edx, ___181ca8h		;; "MEN-MUS.CMF"
		mov     eax, 1
		call    ___64864h
		mov     eax, [ConfigMusicVolume]
		call    ___6572ch
		mov     eax, [ConfigSFXVolume]
		call    ___65770h
		mov     eax, 2d00h			;; 11520
		call    ___658b8h
		mov     eax, 5622h			;; 22050
		call    ___65990h
		call    ___648d8h
		mov     eax, 1
		call    ___659b8h
		mov     al, [___196abch]
		mov     [___1a2011h], al
		mov     al, [___196abdh]
		mov     edx, 4
		mov     [___1a2012h], al
		mov     al, [___196abeh]
		mov     ebx, [Gamepad]
		mov     [___1a2013h], al
		mov     al, [___196abfh]
		mov     [___196ab8h], edx
		mov     [___1a2014h], al
		cmp     ebx, byte 1
		je      ___3e847h
		cmp     ebx, byte 2
		jne     ___3e860h
___3e847h:
		mov     ecx, 6
		mov     edi, ___186cc6h
		mov     esi, ___181c30h		;; "Gamepad/Joystick enabled"
		call    ___596f0h
		rep movsd   
		movsb   
		jmp     ___3e873h
___3e860h:
		mov     ecx, 6
		mov     edi, ___186cc6h
		mov     esi, ___181c4ch		;; "Gamepad/Joystick disabled"
		rep movsd   
		movsw   
___3e873h:
		cmp     dword [ToneDialing], byte 0
		jne     ___3e88bh
		mov     edi, ___187432h
		mov     esi, __CEXT_V(string__pulse_dialing)		;; "Pulse Dialing"
		movsd   
		movsd   
		movsd   
		movsw   
___3e88bh:
		mov     eax, 46ch		;; BIOS tick count
		mov     eax, [eax]
		call    srand__clib3r
		call    ___606dfh
		mov     ax, 4f02h
		mov     bx, 101h
		int     10h
		call    __CEXT_F(chkbankswitch__video)
		test    eax, eax
		je      @bs_ok
		call    __CEXT_F(setmode3h__video)
		push    ___182c24h
		call    __CEXT_F(printf__clib3r)
		add     esp, byte 4
		push    ___182cb8h
		call    __CEXT_F(printf__clib3r)
		add     esp, byte 4
		call    __CEXT_F(___64a28h)
		call    __CEXT_F(___5ec04h)
		call    __CEXT_F(restore__keyboard)
		mov     eax, 70h
		call    __CEXT_F(exit__clib3r)
@bs_ok:
		mov     eax, 3ch
		xor     ebx, ebx
		call    __CEXT_F(___605deh)
		call    allocVGABuffer
		call    ___3d38ch
		call    ___3d890h
		call    ___117f4h
		call    ___1240ch
		call    ___117c8h
		call    ___24548h
		call    ___2faf0h
		call    ___3d2bch
		call    ___12940h
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edx, [eax*4+___1a020ch]
		lea     eax, [edx*4+0]
		sub     eax, edx
		mov     edx, [___1a0fb8h]
		add     edx, eax
		xor     eax, eax
		mov     al, [edx+2]
		mov     [esp+28h], eax
		fild    word [esp+28h]
		sub     esp, byte 4
		xor     eax, eax
		fstp    dword [esp]
		mov     al, [edx+1]
		mov     [esp+2ch], eax
		fild    word [esp+2ch]
		sub     esp, byte 4
		xor     eax, eax
		fstp    dword [esp]
		mov     al, [edx]
		mov     [esp+30h], eax
		fild    word [esp+30h]
		sub     esp, byte 4
		fstp    dword [esp]
		mov     ecx, 4b000h
		call    ___11564h
		mov     esi, [GXBackBuffer]
		mov     edi, [VGABufferPtr_0]
		push    edi
		mov     eax, ecx
		shr     ecx, 2
		rep movsd   
		mov     cl, al
		and     cl, 3
		rep movsb   
		pop     edi
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		xor     edi, edi
		mov     dl, [__CEXT_V(___180130h)]
		mov     [eax*4+___1a0220h], edi
		mov     [esp+8], edi
		mov     [eax*4+___1a01e0h], dl
		xor     eax, eax
___3e9dfh:
		mov     dl, [__CEXT_V(___180130h)]
		mov     [eax+RowBoxBuffers], dl
		mov     edx, [esp+8]
		inc     edx
		xor     bl, bl
		add     eax, 96h
		mov     [edx+___1a1f4dh], bl
		mov     [esp+8], edx
		cmp     edx, byte 16h
		jl      ___3e9dfh
		mov     ecx, 0dh
		mov     edi, ___1a1dbah
		mov     esi, ___182d08h
		mov     bh, 1
		rep movsd   
		mov     edx, RowBoxBuffers
		xor     ecx, ecx
		mov     [RowBox0Colors_R5], bh
		mov     [esp+8], ecx
		lea     ecx, [edx+96h]
___3ea30h:
		mov     esi, ecx
		mov     edi, edx
		push    edi
___3ea35h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___3ea4dh
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     ___3ea35h
___3ea4dh:
		pop     edi
		mov     eax, [esp+8]
		mov     esi, [esp+8]
		add     edx, 96h
		add     ecx, 96h
		inc     esi
		mov     al, [eax+___1a1f4fh]
		mov     [esp+8], esi
		mov     [esi+___1a1f4dh], al
		cmp     esi, byte 15h
		jl      ___3ea30h
		mov     ecx, 0eh
		mov     edi, ___1a1dbah
		mov     esi, ___182d3ch
		rep movsd   
		movsw   
		mov     cl, 1
		xor     ebp, ebp
		mov     [RowBox0Colors_R5], cl
		mov     ecx, RowBoxBuffers
		mov     [esp+8], ebp
		lea     edx, [ecx+96h]
___3eaa4h:
		mov     esi, edx
		mov     edi, ecx
		push    edi
___3eaa9h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___3eac1h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     ___3eaa9h
___3eac1h:
		pop     edi
		mov     eax, [esp+8]
		mov     esi, [esp+8]
		mov     al, [eax+___1a1f4fh]
		add     ecx, 96h
		mov     [esi+___1a1f4eh], al
		lea     eax, [esi+1]
		add     edx, 96h
		mov     [esp+8], eax
		cmp     eax, byte 15h
		jl      ___3eaa4h
		mov     byte [RowBox0Colors_R5], 1
		xor     ecx, ecx
		mov     al, [__CEXT_V(___180130h)]
		mov     [esp+8], ecx
		mov     ecx, RowBoxBuffers
		mov     [___1a1dbah], al
		lea     edx, [ecx+96h]
___3eb10h:
		mov     esi, edx
		mov     edi, ecx
		push    edi
___3eb15h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___3eb2dh
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     ___3eb15h
___3eb2dh:
		pop     edi
		mov     eax, [esp+8]
		mov     esi, [esp+8]
		add     ecx, 96h
		add     edx, 96h
		inc     esi
		mov     al, [eax+___1a1f4fh]
		mov     [esp+8], esi
		mov     [esi+___1a1f4dh], al
		cmp     esi, byte 15h
		jl      ___3eb10h
		mov     ecx, 0fh
		mov     edi, ___1a1dbah
		mov     esi, ___182d78h
		mov     al, 1
		xor     ebp, ebp
		rep movsd   
		movsw   
		movsb   
		mov     [RowBox0Colors_R5], al
		mov     ecx, RowBoxBuffers
		mov     [esp+8], ebp
		lea     edx, [ecx+96h]
___3eb84h:
		mov     esi, edx
		mov     edi, ecx
		push    edi
___3eb89h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___3eba1h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     ___3eb89h
___3eba1h:
		pop     edi
		mov     eax, [esp+8]
		mov     esi, [esp+8]
		mov     al, [eax+___1a1f4fh]
		add     ecx, 96h
		mov     [esi+___1a1f4eh], al
		lea     eax, [esi+1]
		add     edx, 96h
		mov     [esp+8], eax
		cmp     eax, byte 15h
		jl      ___3eb84h
		mov     ecx, 6dh
		mov     al, [__CEXT_V(___180130h)]
		mov     ebx, 27fh
		mov     [___1a1dbah], al
		mov     ah, 1
		mov     edx, 173h
		mov     [RowBox0Colors_R5], ah
		xor     eax, eax
		call    frameFooter__dr
		call    footer__dr
		cmp     dword [esp+0ch], byte 0
		jne     ___3efdch
		mov     eax, [esp+20h]
		mov     edx, [esp+20h]
		add     eax, byte 38h
		add     edx, byte 12h
		mov     [esp+4], eax
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     esi, [esp+18h]
		shl     eax, 7
		add     eax, esi
		mov     edx, [esp+20h]
		add     eax, byte 28h
		add     edx, byte 32h
		mov     [esp+10h], eax
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		add     eax, esi
		mov     ebp, [esp+18h]
		add     eax, 0a6h
		add     ebp, 8ch
		mov     [esp+14h], eax
___3ec59h:
		mov     ecx, 2c380h
		mov     esi, [GXBackBuffer]
		mov     edi, [VGABufferPtr_0]
		add     esi, 0d200h
		add     edi, 0d200h
		mov     edx, 1
		push    edi
		mov     eax, ecx
		shr     ecx, 2
		rep movsd   
		mov     cl, al
		and     cl, 3
		rep movsb   
		pop     edi
		xor     eax, eax
		call    ___13710h
		cmp     dword [___196d84h], byte 0
		jne     ___3eca8h
		cmp     dword [___185a2ch], byte 0
		je      ___3edeah
___3eca8h:
		mov     ebx, [___196a84h]
		test    ebx, ebx
		jne     ___3edeah
		call    ___12cb8h
		call    ___2b318h
		mov     [esp+1ch], ebx
		mov     [esp], ebx
___3ecc7h:
		call    ___58c60h
		mov     eax, [esp+1ch]
		mov     edx, eax
		mov     ecx, 2
		sar     edx, 1fh
		idiv    ecx
		test    edx, edx
		je      ___3ece7h
		xor     eax, eax
		call    ___13a98h
___3ece7h:
		xor     edi, edi
		mov     esi, [esp]
		mov     [esp+8], edi
___3ecf0h:
		xor     eax, eax
		mov     al, [esp+8]
		push    eax
		mov     edx, esi
		mov     eax, [edi+___19eb50h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		mov     edx, esi
		mov     eax, [edi+___19eb54h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		mov     edx, esi
		mov     eax, [edi+___19eb58h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		call    ___5e0f9h
		mov     eax, [esp+8]
		inc     eax
		add     edi, byte 0ch
		mov     [esp+8], eax
		cmp     eax, dword 100h
		jl      ___3ecf0h
		mov     ebx, [esp+1ch]
		mov     edx, [esp+2]
		inc     ebx
		add     edx, byte 2
		mov     [esp+1ch], ebx
		mov     [esp+2], dx
		cmp     ebx, byte 32h
		jl      ___3ecc7h
		xor     esi, esi
		mov     edi, [___185a2ch]
		mov     [___196d84h], esi
		test    edi, edi
		je      ___3edeah
		mov     ecx, 4b000h
		mov     edi, [___VGABufferPtr_0]
		mov     [___185a2ch], esi
		mov     esi, [___1a1124h]
		push    edi
		mov     eax, ecx
		shr     ecx, 2
		rep movsd   
		mov     cl, al
		and     cl, 3
		rep movsb   
		pop     edi
		mov     eax, [___VGABufferPtr_0]
		mov     [VGABufferPtr_0], eax
		mov     eax, [___1a10e4h]
		mov     [___1a1124h], eax
___3edeah:
		cmp     dword [esp+24h], byte 0
		je      ___3ee31h
		mov     ebx, [___196a84h]
		test    ebx, ebx
		jne     ___3ee31h
		mov     eax, [___VGABufferPtr_0]
		mov     [VGABufferPtr_0], eax
		mov     eax, 0ffffffffh
		call    ___3a7e0h
		call    ___649a8h
		call    ___648d8h
		mov     eax, [___1a1ef4h]
		call    ___658b8h
		mov     eax, 10000h
		mov     [esp+24h], ebx
		call    ___65710h
___3ee31h:
		cmp     dword [___196a84h], byte 0
		jne     ___3ee3fh
		call    ___12dc4h
___3ee3fh:
		xor     eax, eax
		call    ___146c4h
		inc     eax
		cmp     eax, byte 7
		ja      ___3efd1h
		jmp     dword [cs:eax*4+@drmainmenu]
@drstartracing:
		call    __CEXT_F(chkcdrom__dr)
		test    eax, eax
		jne     @cdchk_ok
		mov     ecx, 61h
		xor     edx, edx
		mov     ebx, 1e4h
		call    ___13710h
		push    byte 1
		mov     edx, [esp+24h]
		mov     eax, [esp+1ch]
		call    ___13248h
		mov     ecx, [esp+10h]
		mov     ebx, ___182db8h			;; " ... insert cd-rom"
		mov     edx, Font0Props
		mov     eax, [WhiteFont0Ptr]
		call    renderTextToBuffer__video
		mov     ecx, [esp+14h]
		mov     ebx, __CEXT_V(STRING_CONTINUE)			;; "CONTINUE"
		mov     edx, ___185ba9h
		mov     eax, [___1a10cch]
		call    renderTextToBuffer__video
		mov     edx, [esp+4]
		mov     eax, ebp
		call    updateScreen_TBD
		call    ___12cb8h
		mov     esi, 1dh
@cdchk_failed:
		push    8000h
		mov     eax, [___1854bch]
		mov     ecx, [ConfigSFXVolume]
		mov     edx, esi
		push    eax
		xor     ebx, ebx
		mov     eax, 1
		call    playSFX__sound
		call    lastScanCode__keyboard
		call    nullScanCode__keyboard
		xor     bh, bh
@cdchk_wait:
		cmp     bh, 1ch			;; KEY_ENTER
		je      @cdchk_repeat
		cmp     bh, 9ch			;; KEYPAD_ENTER
		je      @cdchk_repeat
		call    lastScanCode__keyboard
		mov     bl, al
		mov     edx, [esp+4]
		mov     bh, al
		call    delay_TBD
		call    delay_TBD
		mov     eax, ebp
		call    updateScreen_TBD
		cmp     bl, 1				;; KEY_ESC
		jne     @cdchk_wait
@cdchk_repeat:
		call    lastScanCode__keyboard
		call    nullScanCode__keyboard
		call    __CEXT_F(chkcdrom__dr)
		test    eax, eax
		jne     @cdchk_repeat_ok
		cmp     bh, 1				;; KEY_ESC
		jne     @cdchk_failed
@cdchk_repeat_ok:
		cmp     bh, 1				;; KEY_ESC
		je      ___3efd1h
@cdchk_ok:
		call    startRacingMenu__dr
		jmp     ___3efd1h
@drmultiplayer:
		call    multiplayerRaceMenu__dr
		jmp     ___3efd1h
@drconfigure:
		call    configureMenu__dr
		jmp     ___3efd1h
@drhof:
		mov     edi, 1
		call    hallOfFameMenu__dr
		mov     [esp+24h], edi
		jmp     ___3efd1h
@drcredits:
		call    creditsMenu__dr
		jmp     ___3efd1h
@drpreview:
		call    showPreviewMenu__dr
		jmp     ___3efd1h
@drexit:
		mov     ecx, 50h
		xor     edx, edx
		xor     eax, eax
		mov     ebx, 12ch
		call    ___13710h
		push    byte 1
		mov     edx, 0c8h
		mov     eax, 0aah
		call    ___13248h
		mov     ecx, 208fdh
		mov     ebx, ___182de4h			;; "Are you sure?"
		mov     edx, Font0Props
		mov     eax, [WhiteFont0Ptr]
		call    renderTextToBuffer__video
		lea     ecx, [esp+0ch]
		mov     ebx, 1
		mov     edx, 0eeh
		mov     eax, 0b4h
		call    ___148cch
___3efd1h:
		cmp     dword [esp+0ch], byte 0
		je      ___3ec59h
___3efdch:
		cmp     dword [__CEXT_V(___19bd60h)], byte 0
		je      ___3f1bah
		mov     edx, ___180ba0h
		mov     eax, ___186a6eh			;; "Join An Existing Game"
		call    __CEXT_F(strcmp__clib3r)
		mov     edx, [___1a1ef8h]
		mov     ecx, eax
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     esi, ___1a01e0h
		shl     eax, 2
		add     esi, eax
		test    ecx, ecx
		jne     ___3f131h
		mov     edi, ___1a1dbah
		mov     eax, [__CEXT_V(___180864h)]
		mov     ebx, 14h
		mov     [___1a1dbah], eax
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
___3f03dh:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___3f055h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     ___3f03dh
___3f055h:
		pop     edi
		mov     esi, ___180ca4h
		xor     dh, dh
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
___3f066h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___3f07eh
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     ___3f066h
___3f07eh:
		pop     edi
		mov     [RowBox0Colors_R5], dh
		mov     eax, edi
		mov     edx, 64h
		call    ___23488h
		mov     eax, [__CEXT_V(___180864h)]
		mov     edx, [___1a1ef8h]
		mov     [___1a1dbah], eax
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     esi, ___1a01e0h
		shl     eax, 2
		add     esi, eax
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
___3f0c2h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___3f0dah
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     ___3f0c2h
___3f0dah:
		pop     edi
		mov     esi, ___18108ch
		xor     bl, bl
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
___3f0ebh:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___3f103h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     ___3f0ebh
___3f103h:
		pop     edi
		mov     ecx, [___24e4d0h]
		mov     [RowBox0Colors_R5], bl
		cmp     ecx, byte 2
		jne     ___3f123h
		mov     ebx, 6
		mov     edx, 64h
		mov     eax, edi
		jmp     ___3f19dh
___3f123h:
		mov     ebx, 9
		mov     edx, 64h
		mov     eax, edi
		jmp     ___3f19dh
___3f131h:
		mov     edi, ___1a1dbah
		mov     eax, [__CEXT_V(___180864h)]
		mov     ebx, 6
		mov     [___1a1dbah], eax
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
___3f14eh:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___3f166h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     ___3f14eh
___3f166h:
		pop     edi
		mov     esi, ___180ca4h
		xor     dl, dl
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
___3f177h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___3f18fh
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     ___3f177h
___3f18fh:
		pop     edi
		mov     [RowBox0Colors_R5], dl
		mov     eax, edi
		mov     edx, 64h
___3f19dh:
		call    ___23488h
		call    ___61278h
		xor     esi, esi
		call    __CEXT_F(___623d4h)
		mov     [__CEXT_V(___19bd60h)], esi
		mov     [___24e4d0h], esi
___3f1bah:
		call    ___3d79ch
		call    __CEXT_F(writeConfig__dr)
		call    __CEXT_F(___12200h)
		call    __CEXT_F(___12a54h)
		call    __CEXT_F(___24ec0h)
		call    __CEXT_F(___2fc50h)
		call    ___649a8h
		call    __CEXT_F(___64a28h)
		add     esp, byte 2ch
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn
