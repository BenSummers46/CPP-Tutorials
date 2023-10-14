Now for the fun to begin! Memory management is perhaps one of the most important features of C++, being able to directly control and manage memory is what makes C++ one of the most powerful modern languages.
However it is at this point that you will probably be the most confused, which is normal as memory management takes time to get your head around.

Two phrases that you will come across the most when managing memory are:
	
Pointer:
	- A variable that stores the memory address of another variable; usually a hex address such as: 00000061D3B5F484
	- Defined by putting an asterisk (*) next to the type when declaring a variable: "int* pointer"


Reference:
	- Is the location in memory that a variable is stored.
	- Can be accessed by using "&" before accessing the value of a variable.
	
	
int number = 42;
int* ptr = &number;

What the small code snippet is doing above: we define a variable of type integer and initialise it with the value of 42.
We then define a variable that is a pointer(*) to an integer. We then initialise it with the memory address(&) of varable "number" i.e. we store the memory address of "number" in this new pointer variable.

To break it down: we know that "number" holds the value 42. We can say for simplicity that the memory location of "number" is: 00042b.
We use the reference symbol(&) to access the memory location, so if we print "&number" to the console we would see the value: 00042b.
The pointer variable called "ptr" stores a memory location so we must initialise it with the value of "&number" as that is the memory location of "number".
So if we print the value of "ptr" to the console we would also see the value: 00042b.

That above is the most basic usage of pointers(*) and references(&).

-------------------------------------------------------------------------------

Now this is where things may start to get more confusing. What happens if we want to see the value being pointed to by the variable "ptr"?
In this case we can do something called "dereferencing" which once again uses an asterisk(*). See why this can be confusing?

int ValueOfA = *ptr;

We create a new variable of type integer, this time not a pointer, but you may be confused as to why we are storing a pointer inside this variable?
Actually what we are doing here is dereferencing "ptr" or finding the value that is stored in the memory location pointed to by "ptr".
So can you guess what value is being stored in "ValueOfA"?

You probably guessed wrong but the value 42 will be stored there. Take a minute to re-read everything and make sure you understand what is going on.

------------------------------------------------------------------------------

Now I will introduce a few new keywords that you will need to know:

	- new : creates a new variable of given type on the heap (don't worry about what heap is yet) and it returns the memory address where this new variable is hence it must be stored in a pointer variable:
		int* number = new int(10);

	- delete : this is used to free up memory that has been allocated on the heap using the "new" keyword. You must always ensure that variables you create with the "new" keyword are deleted otherwise we will cause something called a memory leak.
		delete number; 
		number = nulltpr;

	- nullptr : this is a new type that we have not used yet. A nullptr is a data type that shows us that we are poiting to a non-valid memory address. Trying to access something that is a nullptr will result in undefined behaviour.
		When deleting a pointer using "delete" we must then set the variable to have the value of nullptr to stop any unwanted behaviour or errors.

		number = nullptr;

This is a very basic introduction to memory management in C++ and how we use pointers and references to control memory. This is something that you will use all of the time in C++ so it is important you are able to understand what is happening.



Task:
	
	- Run the program in the PointersandReferences.cpp file and read the output.
	- The task is simple, to understand what is happening and why it is happening.
	- Become comfortable with the (*) and (&) symbols and what both of them do.

	- Read the code in the MainTask() function and answer the questions in the comments.
		Once you have answered you can uncomment the print statements to check your answers.

	