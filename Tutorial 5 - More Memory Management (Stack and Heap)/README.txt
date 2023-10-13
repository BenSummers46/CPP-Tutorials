When a program gets executed memory must be allocated to allow the program to run. Memory will be allocated in one of two areas of memory called the stack and the heap.
Variables allocated on the stack are sometimes called "local variables" as they are only accessible within a certain scope(scope will be explained further later on) whereas variables made on the heap can be accessed until the memory is manually free'd 
by the user.

You may not have realised it, but in every tutorial up to now you have been using both the stack and the heap extensively.
Stack memory is super fast but small memory that is reserved for memory allocation when functions are called. When a function is called your system will automatically allocate the relevant amount of memory needed on the stack for the function to execute properly.
Therefore this means that the compiler must know how much memory needs to be reserved before the function is called.

When you declare a variable like this:

	int num = 5;

inside a function that variable will be allocated on the stack. The lifetime of data on the stack however is very limited with the memory being free'd once the program execution leaves its scope.

Variables allocated on the heap however are not automatically released like stack variables. Variables are allocated on the heap with the use of the "new" keyword which you learnt in the previous tutorial.

	int* num = new int(5);

The above variable will be allocated on the heap. Because this memory is not automatically managed by the program it is important that the programmer manually releases heap memory when they are finished with it by using the "delete" keyword.
If they do not then the memory cannnot be reused and can lead to memory leaks. The pointer itself exists on the stack, but the memory it points to exists on the heap.

Ideally you want to use heap allocated memory as little as possible as it is slower, less organised and more prone to issues (memory leaks) so I would only recommend to use this if you absolutely need too. Stack memory on the other hand is much more
organised and therefore is a lot quicker and should be used in place of heap memory.

In the example in StackandHeap.cpp you can see that we create a new integer on the heap using the "new" keyword, but we print the dereferenced value of b(*b) before we assign it a value. So what value does it hold at this point in the program?

	Well when memory is allocated on the heap it is not automatically initialised to any specific value, so it is important that you are aware of this before any undefined behaiour happens.


Task:
	- Create a new function that allocates two float variables; one on the stack and one on the heap with values of your choice.
	- Check if the values of each variable are equal to one another OR if the references are the same, if either are true return true else return false.
	- Ensure all memory you allocate is correctly disposed of. 
	= You can test this function from within the main() function.
