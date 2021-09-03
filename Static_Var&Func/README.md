# usage-of-static-in-cpp

when you create a variable in a function as static actually you are telling to compiler that "when function ends and then again called,this variable will not created again it will just keep its value "  .

Static member variable:
------------------------
Assume that you have a class that has a static variable x  when you create two different objects of this class ,lets say a and b,and assign a.x=7; b.x=8
and then print a.x and b.x separretely you will be surprised because both of the object a and b  has x variable with value of 8. Reason is that you declare x
as static which has the same location of address for each object of class.

Static member functions:
------------------------
A static function can only reach static variable in its content .

Here is a usefull video link for you:
------------------------------------
https://www.youtube.com/watch?v=u8jw0LsQFFg
