/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Droid Sans Mono for Powerline:size=8"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char col_white[] = "#ffffff";
static const char col_black[] = "#1d1f21";
static const char col_gray[] = "#373b41";

static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { col_white, col_gray },
	[SchemeSel] = { col_white, col_black },
	[SchemeOut] = { col_white, col_black },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 10;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
