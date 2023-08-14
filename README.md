##Functions

###main.c:

Contains the main function that serves as the entry point of the program.
Reads the input file, processes each line, and invokes the opcode handling.
Calls the process_line function to parse each line and determine the opcode to execute.

###opcode_dispatcher.c:

Contains the execute_opcode and process_line functions.
execute_opcode receives an opcode and argument, then dispatches execution to the appropriate opcode function.
process_line reads a line from the input, extracts the opcode and argument, and calls execute_opcode.

###push.c:

Contains the push function which implements the behavior of the "push" opcode.
Pushes an integer value onto the stack by creating a new node.
Handles memory allocation and stack manipulation.

###pall.c:

Contains the pall function which implements the behavior of the "pall" opcode.
Prints all the values on the stack, starting from the top.
Traverses the linked list and prints each node's value.

###helper_functions.c:

Contains the is_integer function that checks if a given string represents an integer.
Supports the validation of integer arguments for the "push" opcode.
###monty.h:

Contains the declarations of structures, functions, and external variables.
Provides function prototypes for all functions implemented in the various files.
Serves as a central point of reference for function signatures and global declarations.

###In terms of interaction:

**main.c** reads input lines from a file and calls process_line to handle each line.
process_line in opcode_dispatcher.c separates the opcode and argument, then calls execute_opcode.
execute_opcode identifies the opcode and invokes the respective opcode function (push, pall, etc.).
Opcode functions in separate files (push.c, pall.c, etc.) implement specific opcode behavior.
Helper functions (is_integer) in helper_functions.c are used by opcode functions for argument validation.
