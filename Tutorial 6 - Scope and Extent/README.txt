Scope creates hierarchical divisions between different sections of a C++ program, limiting the extent of named variables within a given scope. One form of scope that you should already be familiar with is functions.
The extent (or existence) of local variables is limited to the scope of a function we create i.e. if we create a variable in a function, we can only access it in the scope of the function, unless we explicitly return the value.
Curly brackets { } in a function define the scope parameters.
This is the exact same for the curly brackets around if statements, switch statements or any sort of loop. In fact when can use the curly brackets anywhere we like to denote a new scope and to keep our code structure tidy.
Basically when you create a variable it can only be accessed from within its scope, or any subsequent inner scopes that are created, and as so as we exit this scope the extent of these variables are lost.

If you look inside ScopeandExtent.cpp you will see a function called IntroToScope() which contains 2 examples to help get the point of scope and extent across. Above the comment you can see that we create a float variable and set it to 0. 
We then surround the following code in curly brackets, which mean we are defining a new level of scope. Within this we define a new float. We also set the value of the variable created outside to a new value which we can do as it exists in an outer scope.
We then try and print the new values of these 2 variables to the console. SumFloat prints with no issues, however you may notice that NewScopeFloat has an error? This is because we are trying to access a variable that exists in another scope.
Try moving the print statement inside the scope to see if we can get rid of that issue. And as you can see that should work!
Below this I also create a new variable with the exact same name as the one in the inner scope. This doesn't cause any problems simply because we are working in a different scope, so the name clash does not matter.

The section below that we can see an if statement that compares a local variable against another variable that is not defined in the same function. You may be wondering how this is possible? The variable "GlobalNumber" is defined outside of any scope in the global
namespace, which means we are able to access it at any point in this file. Once again you might be able to see that this section also has an error. Have a little think about possible ways that we could fix this error? How about we move the initial declaration of the
IfNumber variable to before the if statement. We can then set the value of IfNumber inside the if statement. This should fix the problem and get rid of the error. This works as we declare the variable in the outer scope which means we can access it in the inner
then print out the variable as we print in the same scope as it was declared.
