/*
 *  fontnames-array takes two fonts, first one
 *  it treats as a proportional-width font and uses
 *  everywhere possible and as a main UI font, while
 *  the second font it treats as a fixed-width font,
 *  changeable to any text window by executing `Font`
 *  from tag window.
 *
 *  Note: `Font` can also be executed
 *  with arguments with any `fontsrv -p .` approved
 *  fonts, thus allowing you to experiment with font
 *  sizes and whether you want anti-aliasing or not.
 */

char *fontnames[2] = {
	"/usr/lib/plan9/font/terminus/ter-u12n.font",
	"/usr/lib/plan9/font/terminus/ter-u12n.font"
};

/*
 *  globalautoindent tries to gue  ss where to
 *  indent by the context of the previous line.
 *
 *  comes highly suggested.
 */

int globalautoindent	= FALSE;

/*
 *  swapping scroll buttons makes B1 scroll down
 *  instead of up and B2 up instead of down
 */

int	swapscrollbuttons	= FALSE;

/*
 *  bartflag triggers quote unquote experimental
 *  mode, in which instead of mouse following focus
 *  from window to window etc. it in fact, does not.
 *
 *  comes highly suggested.
 */

int bartflag			= FALSE;

/*
 *  colors-constants. now let me take a minute to explain
 *  them. C_TAGBG/FG/HLBG/HLFG are respectively your tag
 *  windows background, foreground, highlighted back- and
 *  foreground color. The same exact applies to C_TXT*-
 *  variants of the same constant just in this case it handles
 *  the colorscheme of the text window.
 *
 *  C_WINBUTTON is the button which you adjust your columns
 *  position with. C_COLBUTTON represents a separate text
 *  windows button. C_TMPBUTTON is the so-called "dirty"
 *  or "unclean" -marker aka notifying the file as modified put
 *  in the middle of C_COLBUTTON. C_SCROLLBG is plain and simple
 *  your scrollbars background color.
 *
 *  the last two defines are for defining the color of the specific
 *  buttons highlight background.
 */
#define C_TAGBG			0x000000FF
#define C_TAGFG			0xFFFFFFFF
#define C_TAGHLBG		0xFF725CFF  
#define C_TAGHLFG		0x000000FF

#define C_TXTBG			0x000000FF
#define C_TXTFG			0xFFFFFFFF
#define C_TXTHLBG		0xFFDE37FF
#define C_TXTHLFG		0x000000FF

#define C_WINBUTTON		0x191919FF
#define C_COLBUTTON		0xe7040fFF
#define C_TMPBUTTON		0xe7040fFF
#define C_SCROLLBG		0x222222FF

#define C_BUTTON2HL		0xFF4136FF
#define C_BUTTON3HL		0xFF4136FF