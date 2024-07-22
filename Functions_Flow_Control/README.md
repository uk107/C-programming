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

**Data Types and Variables:**
C has several data types including `int`, `float`, `char`, and `double` for storing different types of data. Variables are named storage locations in memory.

**Example: Variable Declaration and Initialization**

```c
int age = 25;
float salary = 50000.50;
char grade = 'A';
```
---

#### 2. Defining Functions in C

**Definition:**
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

---

#### 4. Local Variables

**Definition:**
Local variables are variables that are declared within a function or a block and are accessible only within that function or block. They have a local scope, meaning they are not visible or accessible outside the function or block where they are defined.

**Key Characteristics:**
- **Scope:** Limited to the function or block in which they are declared.
- **Lifetime:** Exists only during the execution of the function or block.
- **Storage:** Typically stored in the stack.

**Example: Local Variables**

```c
#include <stdio.h>

void exampleFunction() {
    int localVar = 10;  // localVar is a local variable
    printf("Local variable: %d\n", localVar);
}

int main() {
    exampleFunction();
    // localVar is not accessible here, this will cause an error if uncommented
    // printf("%d", localVar);
    return 0;
}
```

**Explanation:**
- `localVar` is declared inside `exampleFunction`, so it is only accessible within `exampleFunction`.
- Trying to access `localVar` outside `exampleFunction` (e.g., in `main`) will result in an error.

#### 5. Global Variables

**Definition:**
Global variables are variables that are declared outside of all functions, usually at the top of the program file. They have a global scope, meaning they are accessible from any function within the program.

**Key Characteristics:**
- **Scope:** Accessible from any function within the program.
- **Lifetime:** Exists for the duration of the program.
- **Storage:** Typically stored in the data segment of memory.

**Example: Global Variables**

```c
#include <stdio.h>

int globalVar = 20;  // globalVar is a global variable

void exampleFunction() {
    printf("Global variable in exampleFunction: %d\n", globalVar);
}

int main() {
    printf("Global variable in main: %d\n", globalVar);
    exampleFunction();
    return 0;
}
```

**Explanation:**
- `globalVar` is declared outside of any function, so it is accessible both in `main` and `exampleFunction`.
- Both `main` and `exampleFunction` can access and print the value of `globalVar`.

#### Differences Between Local and Global Variables

1. **Scope:**
   - **Local Variable:** Limited to the function or block in which it is declared.
   - **Global Variable:** Accessible from any function in the program.

2. **Lifetime:**
   - **Local Variable:** Exists only during the execution of the function or block.
   - **Global Variable:** Exists for the entire duration of the program.

3. **Storage:**
   - **Local Variable:** Typically stored in the stack.
   - **Global Variable:** Typically stored in the data segment of memory.

4. **Initialization:**
   - **Local Variable:** Must be explicitly initialized before use. If not initialized, it contains garbage value.
   - **Global Variable:** Automatically initialized to zero if not explicitly initialized.

5. **Visibility:**
   - **Local Variable:** Not visible outside the function or block where it is declared.
   - **Global Variable:** Visible to all functions within the program.

#### Shadowing

Sometimes, a local variable can have the same name as a global variable. In such cases, the local variable "shadows" the global variable within its scope.

**Example: Variable Shadowing**

```c
#include <stdio.h>

int var = 5;  // global variable

void exampleFunction() {
    int var = 10;  // local variable shadows the global variable
    printf("Local variable in exampleFunction: %d\n", var);
}

int main() {
    printf("Global variable in main: %d\n", var);
    exampleFunction();
    return 0;
}
```

**Explanation:**
- In `main`, `var` refers to the global variable, so it prints 5.
- In `exampleFunction`, `var` refers to the local variable, so it prints 10. The global variable is shadowed within the scope of `exampleFunction`.

---

#### 6.Control Flow Overview

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
