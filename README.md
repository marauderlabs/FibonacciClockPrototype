# FibonacciClockPrototype
Fibonacci Clock Prototype in C

Inspired by the [Fibonacci Clock](http://basbrun.com/2015/05/04/fibonacci-clock/) invented by Philippe Chrétien, before I set out to bring the clock to Android wear, I wrote a tiny C program to test the waters.

It basically prints the clock in text with Colors, to simulate the actual clock.

Clone the repository and compile it with `make fibonacci`.

`./fibonacci` will give an example output for *10:25*.
The program also takes command-line args as `./fibonacci <hour> <minute>`


*Note*: The args are not validated.

The program has been compiled successfully with `gcc` and `clang` on Mac OS X Yosemite (10.10)

I've developed this idea into a full Fibonacci Clock App for Android wear and is available at the [PlayStore](https://play.google.com/store/apps/details?id=in.padfoot.android.wear.fibwatch).
