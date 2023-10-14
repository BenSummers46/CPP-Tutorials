Classes in C++ are an important aspect of the langauge, with most modern systems employing the use of classes in a design pattern known as Object Oriented Programming(OOP). We define a class providing a specification or blueprint for how an object should behave.
We can then instantiate objects from the given specification, just like how we creates variables of the types we have already been introduced to.
We define the behaviour of a class via class "methods" or functions along with the state of the class via class "fields" or variables.

It is typical in C++ that class definitions are made within .h files (header files). In most cases class definitions should always go into given .h files while the implementations of these classes should be made in a .cpp class file.
Header files define an interface for a class, and they declare what is available from the class without exposing the underlying implementation details. By seperating the declaration and implementation into .h and .cpp files, we promote modularity and 
encapsulation.
On top of this header files enable code reuse, where you can include the same header file in multiple source files, allowing the use of these classes in any part of your program.

Header file (.h):
	- public, private, protected keywords: These are the access modifiers for the functions and variables of a class. Public means the functions and variables are fully visible to any program that uses your class, where private means that the function or variable will
	  not be accessible outisde of the class. The protected keyword means that the varaible or function will be accessible from within the class it is declared as well as within derived classes that inherit for the main class. Do not worry about inheritance yet
	  as we will cover that in the next tutorial.
	- The class declaration provides forward delcaration of functions without their actual implementaion.
	- In Enemy.h you can see a defined "Enemy" class with various declared functions and variables. Some of the functions have public visibility whereas the member variables have protected visibility.

All classes that you define require at least one constructor and destructor which declare how an object will be made and how it will be destroyed when not being used anymore. In Enemy.h you can see the constructors declared on lines 5 and 6 with the destructor,
declared on line 7. Desctructor functions always are prefixed with the tilde (~) symbol.
The below functions are ways of accessing and changing our protected variables from outside of our class. Instead of directly accessing the variables like: Enemy.m_Health we would have to call the accessing function like: Enemy.GetCurrentHealth() and that would
return the value m_Health from our class.

Once your class has been declared you must then implement the class. You can see the class implementation in the Enemy.cpp file. You can see that we must #include the class declaration for Enemy before we implement.
Notice that the definitions of these implementations are slightly different to what we have seen before. We use the double colon to denote which scope these functions are in. Prefixing these with Enemy:: shows that we are implenting a function found in the 
enemy class.

On lines 3 and 10 we can see the implementations for 2 of our Enemy constructors. One has parameters, and the other is a default constructor that gets called if you try to construct an instance of the class with no arguments.
	Enemy Enemy1 = Enemy();
	Enemy Enemy1 = Enemy(100, 50);
From the implementation of the constructors we can see that the numbers passed in will be set as the values of some of the member variables, in this case health and damage. In both constructors we can see that we create the score variable on the heap.
This means that in the destructor for the class we need to remember to delete the memory that we have manually allocated.

Below that we can see the implementations for all other functions that we defined in the header file. These functions either get a constant value from the protected class variables or they set the class variables to something different.
In Classes.cpp we can now see that we are able to #include the declaration of the Enemy class, and instantiate variables of type Enemy().
As you can see we can instantiate variables of type Enemy on both the stack and the heap like with all other variables. But remember that to access anything from inside a class stored on the heap, we must first dereference it like this:
	
	*Enemy.GetCurrentHealth();
	OR
	Enemy->GetCurrentHealth();

Using the arrow operator is a much cleaner way of dereferencing class variables and you should almost always use it over the other way. Also remember that once you are done with the class on the heap you must delete it, like with anything else allocated on the heap.

Task:
	First of all read through the code provided to you and make sure you understand it.
	- Create your own "Player" class in the .h and .cpp files I have provided to you.
	- Create a set of member functions and variables of your choice, ensuring they have the relevant access modifiers.
		Examples of member variables could be: height, weight, health, list of power-up names, name, ID etc.
	- Make member functions that can interact (view/change) your member variables.

	- Test it by instantiating your class in Classes.cpp and check you call some of your member functions.