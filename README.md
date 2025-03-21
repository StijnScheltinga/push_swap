# push_swap - Sorting Data with a Stack-Based Algorithm
push_swap is a project in the 42 network curriculum.
The program takes a list of integers as input and sorts them using two stacks and a set of instructions. 
The goal is to sort the list with the minimum number of instructions possible.

## Usage

To run the program, you first need to compile it using the command "make".
Then, you can run it by passing a list of integers as arguments, like this:

`./push_swap 1 80 43 15 934`

Output: pb ra ra pb ra sa pa pa

## Output

The output are the instructions needed to sort stack A.
This is what the output means:

* sa (swap a): Swap the first 2 elements at the top of stack a.
Do nothing if there is only one or no elements.

* sb (swap b): Swap the first 2 elements at the top of stack b.
Do nothing if there is only one or no elements.

* ss : sa and sb at the same time.

* pa (push a): Take the first element at the top of b and put it at the top of a.
Do nothing if b is empty.

* pb (push b): Take the first element at the top of a and put it at the top of b.
Do nothing if a is empty.

* ra (rotate a): Shift up all elements of stack a by 1.
The first element becomes the last one.

* rb (rotate b): Shift up all elements of stack b by 1.
The first element becomes the last one.

* rr : ra and rb at the same time.

* rra (reverse rotate a): Shift down all elements of stack a by 1.
The last element becomes the first one.

* rrb (reverse rotate b): Shift down all elements of stack b by 1.
The last element becomes the first one.

* rrr : rra and rrb at the same time.
