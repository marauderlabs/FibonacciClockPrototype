/**
 * fibonacci.h
 *
 * Author: 	Anand
 * email: 	ananth.padfoot@gmail.com
 *
 * The header for fibonacci Clock prototype
 */

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>


/**
 * The color codes to be used in printf to draw the strings in color.
 * We use only RED, GREEN and BLUE. Yet maintaing all colors just for fun
 */
#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */

/**
 * The color code for the squares. 
 * These shall be set when calculating the color for each square
 * Based on these codes, the appropriate color will be used to draw 
 * the square/text
 */
#define OFF	0	// WHITE
#define MIN 	1	// GREEN
#define HOUR 	2	// RED
#define BOTH 	3	// BLUE

#define MAX	5	// Max squares used

char*	colors[4] = {
    			WHITE, // Unused block
			GREEN, // Minutes
			RED, // Hours
			BLUE // Both
		    };

// the fibonacci series
uint8_t series[MAX] = { 1, 1, 2, 3, 5};

/**
 * The strings are going to represent the squares of the 
 * of the fibonacci clock to keep things simple
 */
char* block_names[MAX] = { 
			    "ONE1",
			    "ONE2",
			    "TWO",
			    "THREE",
			    "FIVE",
			};
// contains the color code for each square to be drawn
typedef struct _squares
{
    uint8_t block[MAX];
} Squares_t;


void find_squares(uint8_t value, Squares_t* squares, uint8_t type);
void print_blocks(Squares_t* const squares __attribute__((unused)));

