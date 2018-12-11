src = temp
THREE = 3
flags = -Wall -Wextra -g -pedantic -std=c99 

default: $(src).c
	gcc -o $(src) $(src).c $(flags)
