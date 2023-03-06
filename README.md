# Basic command line calculator
A simple command line program that receives one argument in that order: `variable, symbol, variable` as input without spaces and returns the result of the calculated argument.

## Intended use
Clone repo to your directory of any choice, then use `gcc -o cmdcalc main.c calc.c` in said directory and you're pretty much set (though I will work on cmake or something later).

Then depending on the system when you're in the same directory as the executable:
- Windows: `.\cmdcalc`
- Linux/Mac: `./cmdcalc`

The argument should be like this, for example: `5+5`, `10-2` or `2^2`. Separation by whitespaces won't work, the program will notify you that there are too much arguments.

Here's a list of possible operations:
- Addition (+)
- Subtraction (-)
- Multiplication (*)
- Division (/)
- Modulo (%)
- Power (^)

## Implementing as command
If you happen to want to have access to it all at times in terminal, here's how you can do it in different OSes:
- Windows: Add the directory where the executable currently is in, to PATH. Edit environment variables --> Edit Path in System variables --> New... --> copy paste path where the executable is --> OK, finish. Try `cmdcalc 10^10`!

## WIP stuff:
- Errors and checking
- extra info
