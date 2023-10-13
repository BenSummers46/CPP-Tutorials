Information:

In C++ we need to directly tell the compiler the type of data that we are going to store in variables so it knows how much memory it needs to reserve at runtime.
Variables can be of almost any type we like when we begin to learn about classes, but this is too compelex for now so we will just talk about standard C++ data types.

The main types that you will find are:
	- int (integer or whole number) 4 bytes of memory
	- float (decimal number) 4 bytes of memory
	- double (decimal number) 8 bytes of memory
	- char (character) 1 byte of memory
	- bool (boolean - true or false(0 or 1)) 1 byte of memory

For all of the in-built types you can find them here: https://learn.microsoft.com/en-us/cpp/cpp/fundamental-types-cpp?view=msvc-170 but for now all you need to know are the types listed above.

Functions are used as a way of splitting important code that may be used hundreds of times in big programs into small reusable bits of code. A function must be defined with a return type (the data type of what is returned from the function) followed by
the function name followed by brackets containing the parameters, or the data that is being passed into the function. The function body (code inside the function) must then be enclosed by curly brackets which define the scope of the function.

Take the main function for example:

	int main() {}

The return type is int so somewhere the function must return a value of type int. Anything variable passed in the parameters can be used from within the function itself.

A function doesn't always need to return a value however, we can have functions that contain logic that don't require anything to be returned. 
In this case the following return type could be used:

	void HelloWorld();

"void" tells the compiler that nothing will be returned.

It is advised that you keep your functions to as short a length as possible, with a descriptive name. If you deem the function content to be confusing then you may need to comment the function to explain what exactly it does.
Comments are defined by double forward slashes:  // This is a comment.

The final keyword we will introduce in this section is how we make variables "read-only". This can be done by using the "const" keyword. This tells the compiler that the variable will have a constant value and cannot be changed at runtime.

	const int number = 5;

This tells the compiler that the variable "number" will always have the value 5 and this will not change at any point during runtime.


Task:

This second task is to do with variables and functions; how and what we need to define variables along with how we define functions and pass values to and from them.

	- Declare 2 more variables of type int with values of your choice.
	- Use the function I have defined to add them together into a third variable, then print that final value to the console.

	- Make 3 of your own functions that subtract (-), multiply (*) and divide (-) your 2 input numbers. (think carefully about the return type of your division function).
	- Print all the results to the console.

	- Make a second addition function that takes 2 float values as parameters and returns the result as a float.

Stretch:
	
	- Think about how we could define a function that will add more than 2 numbers together and return the result. (Will require a new data type not discussed above)
	- How could "Templates" be used to pass multiple data types into the same addition function. (Advanced do not need to understand this concept yet)