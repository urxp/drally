#ifndef __X86_H
#define __X86_H

typedef unsigned char       byte;
typedef unsigned short 	    word;
typedef unsigned long       dword;
typedef unsigned long long  qword;

#define al 	(((byte *)&eax)[0])
#define ah 	(((byte *)&eax)[1])
#define ax 	(((word *)&eax)[0])
#define bl 	(((byte *)&ebx)[0])
#define bh 	(((byte *)&ebx)[1])
#define bx 	(((word *)&ebx)[0])
#define cl 	(((byte *)&ecx)[0])
#define ch 	(((byte *)&ecx)[1])
#define cx 	(((word *)&ecx)[0])
#define dl 	(((byte *)&edx)[0])
#define dh 	(((byte *)&edx)[1])
#define dx 	(((word *)&edx)[0])
#define si 	(((word *)&esi)[0])
#define di 	(((word *)&edi)[0])

#define B(b)	(*(byte *)(b))
#define W(w)	(*(word *)(w))
#define D(d)	(*(dword *)(d))
#define Q(q)    (*(qword *)(q)) 

#define PUSH(v)     esp -= 4; D(esp) = v
#define POP(v)      v = D(esp); esp += 4

#define FPUSH() \
    st7=st6;st6=st5;st5=st4;st4=st3;st3=st2;st2=st1;st1=st0

#define FPOP()  \
    st0=st1;st1=st2;st2=st3;st3=st4;st4=st5;st5=st6;st6=st7

#endif // __X86_H
