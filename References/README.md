# References-in-cpp
When a variable is declared as a reference, it becomes an alternative name for an existing variable. A variable can be declared as a reference by putting ‘&’ in the declaration. 
Modify the passed parameters in a function: If a function receives a reference to a variable, it can modify the value of the variable. For example, the following program variables are swapped using references

Avoiding a copy of large structures: Imagine a function that has to receive a large object. If we pass it without reference, a new copy of it is created which causes wastage of CPU time and memory. We can use references to avoid this.

References vs Pointers:
-------------------

Both references and pointers can be used to change local variables of one function inside another function. Both of them can also be used to save copying of big objects when passed as arguments to functions or returned from functions, to get efficiency gain. Despite the above similarities, there are the following differences between references and pointers.

1-)A pointer can be declared as void but a reference can never be void
2-)The pointer variable has n-levels/multiple levels of indirection i.e. single-pointer, double-pointer, triple-pointer. Whereas, the reference variable has only one/single level of indirection
3-)References cannot be NULL. Pointers are often made NULL to indicate that they are not pointing to any valid thing.
4-) A reference must be initialized when declared. There is no such restriction with pointers
