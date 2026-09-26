# Workshop 1

## Functions

### Task 1:
#### Objective: To write two functions with the same name:
- face of a triangle with three specified sides;
- a face of a right-angled triangle along the given two legs.

#### Order of work:
- two structures are declared - Triangle and RectTriangle; for a triangle (3 sides) and a right
triangle (2 sides), respectively;
- two arrays are defined – an aaray of Triangle and an array of RectTriangle;
- it is created a program that reads the data for several arbitrary triangles (with three sides
set) and several right triangles (with two sides set);
- two functions with the same name are added. Thay calculate, respectively, the face of a
triangle (in general – according to the Heron formula) and of a right triangle.
- it is added some code in a main function or an additional function so that the program
determines the face of the triangle with the largest face.
### Task 2:
Write a function that receives an array of integers and returns a new array of the positive
ones in between.
Note: since the function cannot itself determine how full the input array is, it must also receive
the number of used (valid) elements in it; similarly, it should also return the number of
elements in the result array.
Note: a suitable main function should also be developed to test the above function.
### Task 3:
Write a function to print to the console a rectangle composed of symbols with the following
prototype:
void printRectangle(int m, int n, int offset=0, char c=&#39;*&#39;);
The input arguments are:
- m, n – width and height of the rectangle;

- offset – offset of the rectangle relative to the beginning of the line; default value – 0;

- c - character to draw with - star (&#39;*&#39;) by default