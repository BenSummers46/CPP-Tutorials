Pass by reference and pass by value refers to how we pass variables into functions. Passing by value is just passing the values into the function where passing by reference is passing the memory location of the variable into the function.
Both look very similar in practice however it is extremely important that you know the difference as this is one of the most powerful features of C++ and memory management and in large scale projects it helps us to pass large data structures into
functions without the need to allocating lots of new memory.

Passing by value is when you pass the raw values into a function. For instance if you wanted to pass 2 numbers into an addition function by value the function signature would look like this:

	int add(int x, int y);

Passing by reference is where we pass the memory location into th function instead of the actual values. If you remember from previous tutorials you can access the reference of a variable using the "&" symbol. Passing variables by reference the function must have 
the signature:

	int add(int& x, int& y);

When we pass by value, we cannot actually edit the raw values within the function and have that carry over to back outside the function. This is because an exact copy of the values is passed into the function and so any changes will not affect the original variable that
was passed into the function. This would be used if you were only passing small amounts of data (int, char) into the function or if you are not bothered about changing the original value.

When we pass by reference however you are directly accessing the values stored at a given memory address. This means that if we edit the values at that memory address inside the function that will carry over when we try access the values outisde, 
or in a different function.

Advantages of passing by reference over passing by value include:
	- More efficient, passing by reference avoids the overhead of needing to create a copy of the arguement, which can save significant memory usage if passing large data structures. Important for performance critical code.
	- Modifiability, you can modify the original data while avoiding the cost of copying the data and returning it, means you can effectively "return" multiple modified values this way.
	- Sharing data, allows multiple parts of your code to share and collaborate on the same data, which is useful for games where we manage complex data structures that are used in multiple places in a program.
	- Avoids pointer manipulation, provides a safer alternative to using raw pointers, you don't have to perform memory management (allocation and deallocation) as you would with pointers.

Disadvantages of passing by reference over passing by value include:
	- Inadvertant modifications, you can modify the original data so you should be careful about modifying the data as it can persist and cause unwanted problems later in the program.
	- For some types it may be more efficient to just pass by value if you do not want to modify the value. A boolean is 1 byte where a reference is 4 bytes so in this case passing by value and allocating a copy would be more efficient.
	


Task:




Additional Notes:

Arrays:

Random Numbers:

New method for "for" loops:

