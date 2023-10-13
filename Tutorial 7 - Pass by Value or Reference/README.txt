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
	
It is recommended in most cases that you use pass by reference.


Task:
	- Run the example program found in ValueorReference.cpp and try to understand what is happening.
		- The basic rundown of the program: the first section passes a list of numbers into 2 functions, 1 of which is pass by value and the other is pass by reference. The functions are designed to replace all numbers in the list with a random number.
		- Back in the main function the list is printed after every function call to see which changes were actually kept.

		- 2 functions to swap the numbers in 2 variables (x, y). One uses pass by value and the other uses pass by reference. See which function allows the changes to persist back in the main() function.

		- The function named PrintListNums(std::vector<int> List) basically just loops over the arrays and prints each item to the console.



Additional Notes:

There are some things that you may see in ValueorReference.cpp that we have not covered yet. Don't worry as these are fairly simple and you will pick them up as you go.

Arrays:
	- An array is basically a list of a given data type.
	- It can be declared with [] brackets like this:
		int[5] NumList = { };
	- The number inside the square brackets is the alloted size of the array. Going over this size or trying to access elements outside of this range will result in a StackOverFlow error where you try to access memory that you do not have access too.
	- The <vector> library is basically a dynamic array like library that allows us to create arrays of dynamic size. It also has a bunch of in-built functions that allow us to work with this data-structure.
	- Arrays can be iterated over with the loops (for, while) that we discussed in a previous tutorial.
	- Arrays allocated on the heap with the "new" keyword can be deleted like this:
		delete[] ListName;

Random Numbers:
	- Random numbers can be created in C++ with the rand() function.
	- Need to be careful however as the numbers are deterministic.
	- If you do not provide a seed the function will produce the same set of numbers every time.
	- A good workaround is to use the current time as the seed for the generator, seen in the program as srand(time(NULL));

New method for "for" loops:
	- You may also have noticed in the program that I iterate over the list of numbers in a way that I have not mentioned before.
		for(int& i : NumberList) { 
			i = 0;
		}
	- Basically this gets a reference to the object rather than an index like in a regular for loop. In english: for integer i in NumberList.
	- Means we have direct access to the object, rather than needing to access it by the index everytime:
		for(int i = 0; i < NumberList.size(); ++i){
			NumberList[i] = 0
		}
	- Makes looping over lists cleaner so long as you don't need access to the index of the item.

"Auto" keyword:
	- Up until now we have had to directly state what type we want our variables to be (int, char, float etc.)
	- The "auto" keyword is used to declare a variable that will have its type automatically deduced by the compiler.
	- A good use for it is in the "for" loops that are mentioned above:
		for(auto& i : SomeList) { }
	- It is recommended however that where possible you still explicitly state the type of variables rather than using auto.

