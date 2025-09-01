# Constructors and Destructors in C++

**Experiment No. 12**  
**Name:** Piyush Pawar  
**PRN:** 24070123145  

This repository contains C++ programs demonstrating **constructors, destructors, and object-oriented concepts**.

---

## Program 1: Constructor to Initialize Student Details  

### Theory
A constructor is a special member function that is automatically invoked when an object is created.  
Here, the constructor is used to initialize student details such as roll number, name, and fee.  
It ensures that each object has valid initial values at the time of creation.

### Algorithm
1. Define a class `student` with data members: `rno`, `name`, and `fee`.  
2. Define a default constructor that asks the user to input these values.  
3. Define a `display()` function to print the student’s details.  
4. In `main()`, create an object of the class `student` which automatically calls the constructor.  
5. Call the `display()` function to show the stored details.  

### Conclusion
This program demonstrates how constructors can initialize object data members at the time of object creation without explicitly calling a function.

---

## Program 2: Constructor with String and Data Members  

### Theory
Constructors can also initialize string and character array type data members.  
In this program, details like name, roll number, department, and batch are initialized using a constructor and displayed with a function.

### Algorithm
1. Define a class `Data` with members: `name`, `roll_no`, `dept`, and `batch`.  
2. Create a constructor that inputs values for these members.  
3. Define a `display()` method to print the details in a formatted manner.  
4. In `main()`, create an object of class `Data`, which will call the constructor automatically.  
5. Call `display()` to show the data.  

### Conclusion
This program shows the flexibility of constructors in initializing various data types such as strings, integers, and character arrays.

---

## Program 3: Constructor with Parameters (Comparison Example)  

### Theory
Constructors can take parameters to perform operations during object creation.  
Here, a parameterized constructor compares two integers and prints the greater number.

### Algorithm
1. Define a class `Num` with a constructor that takes two integer parameters.  
2. In the constructor, compare the values of the two integers.  
3. Print which number is greater.  
4. In `main()`, create an object of `Num` and pass two integers as arguments.  
5. The constructor executes automatically and displays the result.  

### Conclusion
This program demonstrates the use of parameterized constructors to directly perform operations on input values at the time of object creation.

---

## Program 4: Demonstrating Constructor and Destructor Execution Order  

### Theory
A constructor is executed when an object is created, while a destructor is executed when the object goes out of scope or is destroyed.  
This program shows the order of execution of constructors and destructors and maintains a count of how many objects exist at a given time.

### Algorithm
1. Define a global counter `count` initialized to 0.  
2. Create a class `destruct` with:  
   - A constructor that increments `count` and prints how many objects are created.  
   - A destructor that decrements `count` and prints how many objects remain.  
3. In `main()`, create multiple objects of class `destruct`.  
4. Use a block scope `{ }` to create and destroy a temporary object.  
5. Observe the order of constructor and destructor calls.  

### Conclusion
This program demonstrates the lifecycle of objects in C++.  
Constructors are invoked when objects are created, and destructors are invoked when objects go out of scope.  
The execution order clearly shows how object destruction follows the reverse order of creation (**stack behavior**).

---

## Conclusion
This experiment helps in understanding:

- The concept of constructors (default and parameterized).  
- How constructors are used to initialize objects with data.  
- The concept of destructors and their role in cleaning up objects.  
- The order of constructor and destructor calls in C++.  

Through these programs, the importance of object lifecycle in C++ OOP is clearly demonstrated.
