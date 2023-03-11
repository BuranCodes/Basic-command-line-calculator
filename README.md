# Basic command line calculator
A simple command line program that receives one argument in that order: `variable, symbol, variable` as input without spaces and returns the result of the calculated argument.

## Intended use
Clone repo to your directory of any choice, then use your compiler of choice and compile both main.c and calc.c files to create an executable named `cmdcalc` in said directory and you're pretty much set (though I will work on cmake or something later).

Then depending on the system when you're in the same directory as the executable:
- Windows: `.\cmdcalc`
- Linux/Mac: `./cmdcalc`

The argument should be like this, for example: `5+5`, `10-2` or `2^2`. Separation by whitespaces won't work, the program will notify you that there are too much arguments.

Here's a list of possible arithmetic operators:
- Addition (+)
- Subtraction (-)
- Multiplication (*)
- Division (/)
- Modulo (%)
- Power (^)

The program will return an error message if the input symbol does not match any of them above.

## Implementing as command
If you happen to want to have access to it all at times in terminal, here's how you can do it in different OSes:
- Windows: Add the directory where the executable currently is in, to PATH. Edit environment variables --> Edit Path in System variables --> New... --> copy paste path where the executable is --> OK, finish. Try `cmdcalc 10^10`!
-Linux: Add the directory where the executable currently is in, to PATH. In terminal: `echo "export PATH=$PATH:/path/to/dir" >> /home/<USERNAME>/.bashrc` and then `source ~/.bashrc`. If your directories contain whitespaces, enclose the entire directory in double quotes! Things might be different for each distro when it comes to adding PATH, so please refer to the StackOverflow page and decide which method is appropriate for you: https://stackoverflow.com/questions/14637979/how-to-permanently-set-path-on-linux-unix

Note for Linux (Ubuntu in this case) users: If you mess up bashrc, you can return to normal by doing this command: `/bin/cp /etc/skel/.bashrc ~/`, it will use the backup copy to overwrite the corrupt one.

## WIP stuff:
- Errors and checking (return error implemented)
- extra info

Any contribution is highly appreciated!
