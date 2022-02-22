/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */

/* font */

static const char *fonts[] = {
	"JetBrainsMono Nerd Font:size=11"
};

/* colors */
static const char col_foreground[]  = "#e5e9f0";
static const char col_background[]  = "#14161B";
static const char col_accent[]      = "#2e3440";
static const char col_accentAlt[]   = "#8fbcbb";

static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*                      fg              bg       */
	[SchemeNorm]            = { col_foreground, col_background },
	[SchemeSel]             = { col_foreground, col_accent },
	[SchemeSelHighlight]    = { col_accentAlt, col_accent },
	[SchemeNormHighlight]   = { col_accentAlt, col_background },
	[SchemeOut]             = { "#000000", "#00ffff" },
	[SchemeHp]              = { "#bbbbbb", "#333333" }
};
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 0;
static unsigned int columns    = 2;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 5;
