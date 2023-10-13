Information:

In C++, program flow control is essential for determining the order in which statements are executed, making decisions, and repeating actions. Three fundamental constructs for controlling program flow are "for" loops, "while" loops, and "if" statements.

For Loops:
	The "for" loop is used to execute a block of code repeatedly for a specified number of times or iterations. It consists of three parts: initialization, condition, and increment/decrement. Here's the basic syntax:

	for (initialization; condition; increment/decrement) {
		// Code to be repeated
	}
	
	---------------------------------------------------------

	From the example given inside ProgramFlow.cpp in the function: FactorialForLoop(), we can see that the loop will execute until the variable defined i is equal too or greater than the paramter x.
	The loop body basically adds the value of i to a variable in each iteration.

While Loops:
	The "while" loop executes a block of code as long as a specified condition is true. Here's the basic syntax:

	while (condition) {
		// Code to be repeated
	}

	---------------------------------------------------------

	In the example in ProgramFlow.cpp in the function FactorialWhileLoop() we can see that the loop will continue while Index is less than the input value. Each iteration we are adding the Index to a variable, and making sure that we iterate the Index appropriately.
	In this case it is important that we remember to manually increment our Index otherwise we will get stuck in an infinite loop (a loop that never meets the exit condition) and as expected this is not what we want.

If statements:
	"If" statements are used for decision-making in your program. They allow you to execute specific code blocks only when a given condition is true. Here's the basic syntax:

	if (condition) {
		// Code to be executed if condition is true
	} else {
		// Code to be executed if condition is false
	}

	---------------------------------------------------------

	In the example the condition of the statement is whether one integer has the same value (equality operator) as the other. Both integers passed into the function are passed in as arguements.
	The program will split depending on the outcome of the conditional statement. If the statement evaluates as true a value will be returned and if the statement evaluates to false another will be returned. In these conditions you can do anything from create new
	variables to call different functions in the program.

For anything loop based in C++ it is important to check that the loop exit conditions will always be met, as to make sure that we never get stuck in an infinite loop!



Task:
	
A first run of the program will see that it uses 2 looping methods to calculate the factorial sum of a number. It then checks to ensure that these 2 numbers are the same and prints a boolean based on the outcome.
You may notice at first glance that instead of printing "true" or "false" it prints "0" or "1" and that is because that C++ compiler interprets a boolean as being 0 or 1. 0 signifies false and 1 signifies true.

	- Write a new function that uses either a "For" or "While" loop to output the numbers 0 - 10 to the console.
	- Write a new function that uses either a "For" or "While" loop to output all even numbers up to 100 to the console.

	- Implement the function body for the function named TestIfStatement(int age). It takes an age integer as a parameter. Check if the value of age is greater than or equal to 18, 
	  if it is print "You can legally drink" to the console, else print "You cannot legally drink". You can test this by calling the function in "main" with different numbers as the given parameter.
	- In the comment provided in the FaultyLoop(float x) function, describe a potential problem that could arise from the given loop conditions.

Stretch:

	- Research and attempt to implement an example of a "switch" statement in any context of your choice but place it in its own function (alternative to an "If" statement).
	- Extend the "If" statement in the function CheckIsEqual(int x, int y); to include an "else if()" block that returns false if x > y;