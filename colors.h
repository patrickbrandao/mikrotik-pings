#include <stdio.h>

#ifndef _COLORS_H
#define _COLORS_H

// ---------- Mapa de cores compativeis com readline

// --------------------------------------------- cores ANSI

// ANSI-Cores
#define		 SCREEN_RESET		"\033[00m"	//0
#define		 SCREEN_EMPTY		""			// NULL

#define		SCREEN_CLRSCR		"\033c"		// limpar a tela

// FORMATACAO
#define		 FONT_BOLD		"\033[1m" 		// negrito
#define		 FONT_SUBT		"\033[4m" 		// sublinhado
#define		 FONT_BLINK		"\033[5m" 		// piscando

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"		// vermelho
#define KGRN  "\x1B[32m"		// verde
#define KYEL  "\x1B[33m"		// amarelo
#define KBLU  "\x1B[34m"		// azul
#define KMAG  "\x1B[35m"		// magenta/pink
#define KCYN  "\x1B[36m"		// ciano/azul claro
#define KWHT  "\x1B[37m"		// branco
#define KLGT  "\x1B[38m"		// branco claro
#define RESET "\033[0m"			// restar cores

#define LGRE  "\x1B[90m"		// cinza
#define LRED  "\x1B[91m"		// laranja/vermelho
#define LGRN  "\x1B[92m"		// verde claro
#define LYEL  "\x1B[93m"		// amarelo claro
#define LBLU  "\x1B[94m"		// azul claro
#define LMAG  "\x1B[95m"		// magenta claro
#define LCYN  "\x1B[96m"		// ciano/azul claro
#define LWHT  "\x1B[97m"		// branco claro
#define LLGT  "\x1B[98m"		// branco claro
#define LLGA  "\x1B[99m"		// branco claro

#define L00A  "\x1B[100m"		// branco claro com fundo cinza
#define L00B  "\x1B[101m"		// branco claro com fundo vermelho
#define L00C  "\x1B[102m"		// branco claro com fundo verde
#define L00D  "\x1B[103m"		// branco claro com fundo amarelo
#define L00E  "\x1B[104m"		// branco claro com fundo azul
#define L00F  "\x1B[105m"		// branco claro com fundo magenta
#define L00G  "\x1B[106m"		// branco claro com fundo azul piscina
#define L00H  "\x1B[107m"		// branco claro com fundo azul piscina
#define L00I  "\x1B[108m"		// branco claro com fundo preto

// --------------------------------------------- cores ANSI com readline

#define RL_KNRM  "\001\x1B[0m\002"
#define RL_KRED  "\001\x1B[31m\002"			// vermelho
#define RL_KGRN  "\001\x1B[32m\002"			// verde
#define RL_KYEL  "\001\x1B[33m\002"			// amarelo
#define RL_KBLU  "\001\x1B[34m\002"			// azul
#define RL_KMAG  "\001\x1B[35m\002"			// magenta/pink
#define RL_KCYN  "\001\x1B[36m\002"			// ciano/azul claro
#define RL_KWHT  "\001\x1B[37m\002"			// branco
#define RL_KLGT  "\001\x1B[38m\002"			// branco claro
#define RL_RESET "\001\033[0m\002"			// restar cores

#define RL_LGRE  "\001\x1B[90m\002"			// cinza
#define RL_LRED  "\001\x1B[91m\002"			// laranja/vermelho
#define RL_LGRN  "\001\x1B[92m\002"			// verde claro
#define RL_LYEL  "\001\x1B[93m\002"			// amarelo claro
#define RL_LBLU  "\001\x1B[94m\002"			// azul claro
#define RL_LMAG  "\001\x1B[95m\002"			// magenta claro
#define RL_LCYN  "\001\x1B[96m\002"			// ciano/azul claro
#define RL_LWHT  "\001\x1B[97m\002"			// branco claro
#define RL_LLGT  "\001\x1B[98m\002"			// branco claro
#define RL_LLGA  "\001\x1B[99m\002"			// branco claro

#define RL_L00A  "\001\x1B[100m\002"		// branco claro com fundo cinza
#define RL_L00B  "\001\x1B[101m\002"		// branco claro com fundo vermelho
#define RL_L00C  "\001\x1B[102m\002"		// branco claro com fundo verde
#define RL_L00D  "\001\x1B[103m\002"		// branco claro com fundo amarelo
#define RL_L00E  "\001\x1B[104m\002"		// branco claro com fundo azul
#define RL_L00F  "\001\x1B[105m\002"		// branco claro com fundo magenta
#define RL_L00G  "\001\x1B[106m\002"		// branco claro com fundo azul piscina
#define RL_L00H  "\001\x1B[107m\002"		// branco claro com fundo azul piscina


#endif

















