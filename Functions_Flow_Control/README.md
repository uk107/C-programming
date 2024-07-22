# Function & Flow Control 
## Topics Covered:

* `09:00 -10:00` Warm up & Review Previous Session - Self learning
* `10:00 -11:00` Basics. Defining Functions. Returning data from functions - Self learning
* `11:00 -11:45` Local and Global Variables. Practices - Self learning
* `13:00 -14:00` Control Flow Overview. If Statements. Switch Statement. Practices - Self learning
* `14:00 -15:00` For Loop. While and Do-While. Practices - Self learning
* `15:00 -16:30` Assignment - Self learning
* `16:30 -17:00` Review Assignment - Offline
* `17:00 -18:00` Q&A Session - Offline

## Self learning resource: 
* Control flow: https://fpt-software.udemy.com/course/c-programming-for-beginners-/learn/lecture/8795224#overview
* Functions: https://fpt-software.udemy.com/course/c-programming-for-beginners-/learn/lecture/8795306#overview

---

#### 1. Warm up & Review

**Topics:**
- Data Types and Variables
- Constants and Keywords
- Operators and Expressions
- Arrays and Strings

**Description:**

**Data Types and Variables:**
C has several data types including `int`, `float`, `char`, and `double` for storing different types of data. Variables are named storage locations in memory.

**Example: Variable Declaration and Initialization**

```c
int age = 25;
float salary = 50000.50;
char grade = 'A';
```

#### 2. Defining Functions in C

**Objective:**
Learn how to create and use functions in C.

**Topics:**
- Function Declaration and Definition
- Calling Functions
- Passing Arguments to Functions
- Function Prototypes

**Description:**

Functions in C are blocks of code that perform specific tasks. They help in organizing code, reducing repetition, and improving readability.

**Function Declaration:**
Specifies the function name, return type, and parameters without the body.

**Example: Function Declaration**

```c
int add(int, int);
```

**Function Definition:**
Includes the function body with the actual implementation.

**Example: Function Definition**

```c
int add(int a, int b) {
    return a + b;
}
```

**Calling Functions:**
Functions are called by specifying their name followed by arguments in parentheses.

**Example: Calling a Function**

```c
int result = add(5, 3);
printf("The sum is %d\n", result);
```

---

#### 3. Returning Data from Functions

**Objective:**
Understand how to return values from functions and how the return type affects function behavior.

**Topics:**
- Return Types
- Using the return Statement
- Void Functions

**Description:**

**Return Types:**
Functions can return different data types, including `int`, `float`, `double`, `char`, or even `void` (no return value).

**Example: Function Returning an int**

```c
int multiply(int a, int b) {
    return a * b;
}
```

**Void Functions:**
Functions with `void` return type do not return any value.

**Example: Void Function**

```c
void greet() {
    printf("Hello, User!\n");
}
```

**Using the return Statement:**
The `return` statement is used to return a value from a function.

**Example: Return Statement**

```c
double divide(double a, double b) {
    if (b != 0)
        return a / b;
    else
        return 0;  // Indicate error or invalid division
}
```
#### 4.Control Flow Overview

**Control Flow Statements:**
Control flow statements help in making decisions and executing code conditionally.

**Example: if-else Statement**

```c
int number = 10;

if (number % 2 == 0) {
    printf("%d is even.\n", number);
} else {
    printf("%d is odd.\n", number);
}
```

**Loops:**
Loops allow repetitive execution of a block of code.

**Example: for Loop**

```c
for (int i = 1; i <= 10; i++) {
    printf("%d ", i);
}
```

---