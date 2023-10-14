In the previous tutorial I introduced the notion of classes by creating a small Enemy class with some basic functionality. You then should have created a new Person class with your own methods and data.
Inheritance is a fundamental Object Oriented Programming (OOP) concept that allows you to create (derive or subclass ) new classes that are based on an existing class (base or superclass).
Inheritance allows us to inherit properties from a base class, including variables and functions. Not only this but it allows us to take functions declared in the base class, and override them with our own logic that is specific child class.
This means that inheritance promotes code reuse; it allows us to define common logic and attributes about a class and multiple derived classes can inherit, use and extend that functionality to make it specific to the given class.
From an inherited class we can directly access variables that are declared within the base class, with the exception of private variables.

Virtual functions and Polymorphism:
	Now we will introduce the "virtual" keyword. The virtual keyword enables derived classes to customise and use the behaviour of inherited functions. A function marked as "virtual" in the base class marks that function as being one that can be overridden in a subclass.
	In the derived class when you are changing the implementation of a base class function you must use the "override" keyword to inform the compiler that you are changing the functionality.
	Examples of this can be seen in Enemy.h and ArmedEnemy.h where the functions in the enemy base class are marked as virtual, with overwritten functions in the armed enemy subclass being marked with the "override" keyword.

	You might also notice in Enemy.h we have a virtual function that is seemingly being set to 0 which you may be confused by? Doing this denotes that a function is a pure-virtual function.
	A pure virtual function is one that has no implementation on the base class, so if you want to use it in a derived class you must ensure that you use your own implementation in the derived class.
	Because of polymorphism we can be sure that when we call a function from a given class that the program will call the appropriate method based on the actual objects type (using v-tables). This means that if a derived class overrides a base classes functionality
	we can be sure that when calling that function it will call the right implementation.

In the example program in the ArmedEnemy.h file you can see an example of exaclty how we inherit from a base class. In this case Enemy.h is the base class and armed enemy wants to inherit from that class.

	class ArmedEnemy : public Enemy { };

	In other words inheriting looks like this:

	class DerivedClassName : <Access modifier> BaseClassName { };

You can also see most of the functions have been marked with the virtual keyword. This means that they can have different implementations in any derived class. In this case in Enemy.h the member variables must also be set to protected
as we want them to be accessible in a derived class, where private variables would be inaccessible.
You can also see that we can still access the base class member variables even though they are not explicitly defined in the derived class and this is one of the reasons inheritance is so powerful. You may also notice that when we call the GetScore() function
on the object that has the type "ArmedEnemy" that it calls the correct function (the function that was overriden by us) which is a good example of how the virtual keyword can be used.

Task:
	- Declare and implement(.h and .cpp) a new class that inherits from the Enemy base class.
	- Override the functions of your choice and test to make sure that they get called when calling on your new object.
	- Ensure you are not re-declaring any variables that are already declared in the base class.

	- Do the same as the previous task and declare and implement a new class, but this time have it inherit from the ArmedEnemy() class.

	- Make sure that all new classes go in their own .h and .cpp class file.