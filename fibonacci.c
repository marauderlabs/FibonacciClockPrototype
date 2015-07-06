/**
 * fibonacci.c
 *
 * Author: 	Anand
 * email: 	ananth.padfoot@gmail.com
 *
 * Fibonacci Clock prototype
 */

#include "fibonacci.h" 

/**
 * The driver code the fibonacci Clock
 */

int main(int argc, char* argv[])
{
    // sample time
    uint8_t hour = 10;
    uint8_t min = 25;

    // trust the user to give valid input
    if (argc > 1)
	hour = atoi(argv[1]);
    if (argc > 2)
	min = atoi(argv[2]);

    Squares_t squares;
    memset (&squares, 0, sizeof(Squares_t));
    /** 
     * For HOUR, find_squares will add a 1 if the 
     * square is needed for displaying the time,
     * and for MIN, 2 will be added.
     * So a 3 means, both hour and minute
     */
    find_squares (hour, &squares, HOUR);
    find_squares(min / MAX, &squares, MIN);
    print_blocks (&squares);
    return 0;
}

/**
 * We're going to be Greedy.
 * So for every number, see if the value is higher than the number
 * and if so, set the square to be lit and subtract it from the 
 * value
 */
void find_squares(uint8_t value, Squares_t* squares, uint8_t type)
{
    uint8_t index = MAX; // Greedy. So go top-down
    while (value > 0 && index >= 0)
    {
	index--;
	uint8_t number = series[index];  // the side of the square
	if (value >= number)
	{
	    /**
	     * GREEN + RED = BLUE, in color code
	     * So if the same block is used for both hours and minutes,
	     * the following addition would end up storing '3', the color for both
	     */
	    squares->block[index] += type; // set the color bits in the square
	    value -= number;	// chop the number off the value
	}
    }
}

/**
 * For every square based on stored value 1, 2 and 3, the corresponding
 * color will be used to print it
 */
void print_blocks(Squares_t* const squares __attribute__((unused)))
{
    for (int i = 0; i < MAX; i++)
    {
	printf("%s" "%s " RESET, colors[squares->block[i]], block_names[i]);
    }
    printf("\n");
}
