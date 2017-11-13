/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Droid Sans Mono for Powerline:size=8"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
/*static const char col_fg[] = "#c0c5ce";
static const char col_bg[] = "#2b303b";
static const char col_sel[] = "#65737e";*/

static const char col_bg[]       		= "#1b2b34";
static const char col_fg[]        	= "#d8dee9";
static const char col_border[]      = "#5fb3b3";

static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { col_fg, col_bg },
	[SchemeSel]  = { col_bg, col_border },
	[SchemeOut]  = { col_fg, col_border },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 10;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
