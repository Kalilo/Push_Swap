This project consists of two parts, Checker and Push_Swap

#Checker
Checker is a program which takes a list of integers,
and allows it to be sorted by using two columns and the given commands.

#Push_Swap
Push_Swap is a program which takes in a list of integers,
and gives a list of commands needed to sort it using two columns.

#Commands
The following commands are the avaliable commands:
sa: Swaps the first two numbers in column 'a'.
sb: Swaps the first two numbers in column 'b'.
ss: Performs both sa and sb simultaneously.
pa: Takes the first element in column 'b' and puts it in column 'a'.
pb: Takes the first element in column 'a' and puts it in column 'b'.
ra: Rotates column 'a' by shifting all elements up the stack by 1.
rb: Rotates column 'b' by shifting all elements up the stack by 1.
rr: Performs both ra and rb simultaneously.
rra: Rotates column 'a' by shifting all elements down the stack by 1.
rrb: Rotates column 'b' by shifting all elements down the stack by 1.
rrr: Performs both rra and rrb simultaneously.
Any other command will result in a KO.

#Other
run with -c to display output in colour.
run with -v for verbose mode.