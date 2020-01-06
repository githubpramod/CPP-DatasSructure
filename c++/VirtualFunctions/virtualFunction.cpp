Virtual means existing in appearance but not in reality. When virtual functions are used, a pro-
gram that appears to be calling a function of one class may in reality be calling a function of a
different class. Why are virtual functions needed? Suppose you have a number of objects of
different classes but you want to put them all in an array and perform a particular operation on
them using the same function call. For example, suppose a graphics program includes several
different shapes: a triangle, a ball, a square, and so on. Each of these classes has a member 
function draw() that causes the object to be drawn on the screen.
Now suppose you plan to make a picture by grouping a number of these elements together, and
you want to draw the picture in a convenient way. One approach is to create an array that holds
pointers to all the different objects in the picture. The array might be defined like this:
shape* ptrarr[100];
If you insert pointers to all the shapes into this array, you can then draw an entire picture using
a simple loop:
for(int j=0; j<N; j++)
ptrarr[j]->draw();

This is an amazing capability: Completely different functions are executed by the same func-
tion call. If the pointer in ptrarr points to a ball, the function that draws a ball is called; if it
points to a triangle, the triangle-drawing function is called. This is called polymorphism, which
means different forms. The functions have the same appearance, the draw() expression, but dif-
ferent actual functions are called, depending on the contents of ptrarr[j] . Polymorphism is
one of the key features of object-oriented programming, after classes and inheritance.

This is an amazing capability: Completely different functions are executed by the same func-
tion call. If the pointer in ptrarr points to a ball, the function that draws a ball is called; if it
points to a triangle, the triangle-drawing function is called. This is called polymorphism, which
means different forms. The functions have the same appearance, the draw() expression, but dif-
ferent actual functions are called, depending on the contents of ptrarr[j] . Polymorphism is
one of the key features of object-oriented programming, after classes and inheritance.
