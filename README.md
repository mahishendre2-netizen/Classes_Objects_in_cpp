# Classes_Objects_in_cpp
Aim: To study and implement Object-Oriented Programming (OOP) concepts in C++.

Tools: VS Code.

# Theory:
Object-Oriented Programming System (OOPS) in C++ is a programming approach based on the concept of objects, which combine data (attributes) and functions (methods) into a single unit called a class. It allows developers to build programs using real-world models, promoting modularity, code reusability, data hiding, and abstraction.

# The key features of OOPS are:

Encapsulation – Wrapping data and functions into a single unit (class) to control access and maintain security.

Abstraction – Exposing only the necessary information to the outside world while hiding internal complexities.

Inheritance – Enabling new classes to reuse, extend, or modify the features of existing classes.

Polymorphism – Allowing functions or operators to behave differently based on the type of object.

Modularity – Breaking the program into smaller, independent parts for better organization.

Reusability – Classes and methods can be reused in multiple programs without rewriting code.

# Program-1 Student Information:
This program defines a Student class with attributes such as name, branch, subject, year, and result. It creates objects to store and display information for multiple students, showing how classes can represent real-world entities. The attributes of each student are accessed and printed using the dot (.) operator, which connects object instances to their class members.

Algorithm:
Start.

Define a class Student with public variables: name, branch, subject, year, and result.

In the main() function:

Create objects s1 of class Student.

Assign hardcoded values to each data member of s1.

Display all details of s1 on the console.

Stop.

# Program-2 Car Details:
This program uses a Car class to store attributes like brand, model, price, year, and mileage. Objects are created for multiple cars, and user input is taken to fill their details. It shows how classes can be used to group related information together and create different objects with their own set of values.

Algorithm:
Start.

Define a class Car with public data members: brand, model, price, year, mileage.

In main(), create an object c1 of class Car.

Prompt the user to enter brand, model, year, and cost for c1 and store them.

Display the details of c1.

Stop.

# Program-3 Rectangle Area Calculation:
This program defines a Rectangle class with attributes length and width, and a method area() to calculate area. It checks whether a rectangle is also a square and compares areas of two rectangles, demonstrating decision-making with class methods.

Algorithm:
Start

Define a class Rect with:

Public variables length and width

A public member function area(length, width) that returns length × width

In main(), create an object r1 of class Rect.

Prompt the user to enter length and store it in r1.length.

Prompt the user to enter width and store it in r1.width.

Call r1.area(r1.length, r1.width) and store/print the result.

Display the calculated area.

Stop.

# Program-4 Calculator:
This program demonstrates Object-Oriented Programming in C++ by creating a class Calc that performs basic arithmetic operations. The class has two public float variables num1 and num2 for storing input values, and four member functions — add(), sub(), multi(), and div() — for performing addition, subtraction, multiplication, and division respectively. In main(), an object c1 is created, and the user is prompted to enter two numbers. Each arithmetic operation is then performed by calling the respective member functions with the entered values. The results are displayed on the screen.

Algorithm:
Start

Define a class Calc with:

Two float variables: num1, num2

add(num1, num2) → returns sum

sub(num1, num2) → returns difference

multi(num1, num2) → returns product

div(num1, num2) → returns quotient

In main(), create an object c1 of class Calc.

Prompt the user to enter the first number and store it in c1.num1.

Prompt the user to enter the second number and store it in c1.num2.

Call the add() function and display the result.

Call the sub() function and display the result.

Call the multi() function and display the result.

Call the div() function and display the result.

Stop

# Program-5 Cube Volume (Function inside & outside a class):
This program demonstrates how to create a class and define member functions in C++. The Cube class has a public data member side to store the cube's side length, and two functions to calculate its volume. The first function, vol_in(), is defined inside the class, while the second, vol_out(), is declared inside but defined outside the class using the scope resolution operator ::. Both use the formula: side × side × side. In main(), the user inputs the side length, and the program calculates and displays the volume using both methods. This example shows the difference between inline (inside the class) and outside-class function definitions in C++.

Algorithm:
Start.

Define Cube class with attribute side.

Define volume() method inside the class.

Define vol() method outside the class.

Create two cube objects.

Input side lengths.

Calculate and print volumes using both methods.

Stop.

# Program-6 Cube Volume Calculation:
This program shows the use of access specifiers. The attribute side is private, so it cannot be accessed directly from outside the class. Instead, a public method volume() is used to calculate and return the cube’s volume. If we try to access side separately in main, it will give an error because private data can only be used inside the class methods.

Algorithm:
Start.

Define Cube class with private attribute side and public method volume().

Create an object of Cube.

Call volume() method to calculate cube volume.

Print result.

Stop.

# Conclusion:
We learned how C++ programs can be structured using classes and objects. Student & Car classes showed how to store and display related information. Rectangle & Calculator classes used member functions to perform calculations and comparisons. Types of Methods explained how functions can be written inside and outside a class. Access Specifiers showed how some data can be kept private and accessed only through functions. Together, these programs give a basic understanding of how classes and objects work in C++.
