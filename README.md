# Monty Bytecode Interpreter
## Documentation
### Description
Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files. This project was one of my projects during my one year software engineering programme at ALX Africa.

### Pseudocode
	1. Write a c program to be compiled with the name monty
	2. The program takes only one argument, a file name
	3. The file will contain opcodes which are function names
	4. Create a loop to read the file line by line
	5. After reading a line, parse it to search for a function name(opcode)
	6. Tokenize the function name
	7. If token is a valid function name(opcode),
	8. Call the function associated with it
	9. Empty lines or lines starting with '#' should be neglected
	10. Continue the loop until EOF is reached
	11. Free all dynamically allocated  memories

### Installation
	compile with the following:
		
		gcc -Wall -Werror -Wextra -pedantic *.c -o monty
	
	usage: ./monty <filename>
		1. filename should contain the Operators
		2. One operator per line
		3. spaces and newlines are ignored
		4. '#' sign represent comments and the line will be ignored

### Supported operators
- ***push***: Pushes an integer to the top of the stack
- ***pall***: Prints all elements in the stack
- ***pint***: Prints the top element of the stack
- ***pop***: Removes top element of stack and sets the next element as top
- ***swap***: Swaps the top element of the stack with the runner up such that the runner up becomes top and top becomes runner up
- ***add***: Adds the top element with the runner up, stores the result in the runner up and the runner up becomes top
- ***nop***: An opcode that does nothing
- ***sub***: Subtracts the top element of the stack from the runner up, stores the result in the runner up and the runner up becomes top
- ***div***: Divides the runner up element of the stack by the top, stores the result in the runner up and the runner up beccomes top
- ***mul***: Multiplies the top element of the stack by the runner up, stores the result in the runner up and the runner up becomes the top

### Author
Gideon Obiasor
