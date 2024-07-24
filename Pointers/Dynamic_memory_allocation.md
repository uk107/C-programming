
### 1. Implementation with Dynamic Memory Allocation (Using Pointers)

```c
#include <stdio.h>
#include <stdlib.h>

void addGrade(float **grades, int *size, int *capacity, float grade);
void displayGrades(float *grades, int size);
float calculateAverage(float *grades, int size);

int main() {
    float *grades = NULL; // Pointer to the dynamic array
    int size = 0;         // Current number of elements in the array
    int capacity = 2;     // Initial capacity of the array

    // Allocate initial memory
    grades = (float *)malloc(capacity * sizeof(float));
    if (grades == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    char choice;
    float grade;

    // Loop to allow the user to enter grades
    do {
        printf("Enter a grade (0 to 100): ");
        scanf("%f", &grade);

        // Add the grade to the dynamic array
        addGrade(&grades, &size, &capacity, grade);

        printf("Do you want to enter another grade? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    // Display the grades
    displayGrades(grades, size);

    // Calculate and display the average grade
    float average = calculateAverage(grades, size);
    printf("Average grade: %.2f\n", average);

    // Free the allocated memory
    free(grades);

    return 0;
}

// Function to add a new grade to the dynamic array
void addGrade(float **grades, int *size, int *capacity, float grade) {
    // If the array is full, double its capacity
    if (*size >= *capacity) {
        *capacity *= 2;
        float *temp = (float *)realloc(*grades, *capacity * sizeof(float));
        if (temp == NULL) {
            printf("Memory reallocation failed\n");
            return;
        }
        *grades = temp;
    }
    // Add the new grade to the array
    (*grades)[*size] = grade;
    (*size)++;
}

// Function to display all grades in the array
void displayGrades(float *grades, int size) {
    printf("Grades: ");
    for (int i = 0; i < size; i++) {
        printf("%.2f ", grades[i]);
    }
    printf("\n");
}

// Function to calculate the average of the grades
float calculateAverage(float *grades, int size) {
    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += grades[i];
    }
    return sum / size;
}
```

### 2. Implementation with Fixed-Size Array

```c
#include <stdio.h>

#define MAX_GRADES 100

void addGrade(float grades[], int *size, float grade);
void displayGrades(float grades[], int size);
float calculateAverage(float grades[], int size);

int main() {
    float grades[MAX_GRADES]; // Fixed-size array
    int size = 0;             // Current number of elements in the array

    char choice;
    float grade;

    // Loop to allow the user to enter grades
    do {
        printf("Enter a grade (0 to 100): ");
        scanf("%f", &grade);

        // Add the grade to the array
        addGrade(grades, &size, grade);

        printf("Do you want to enter another grade? (y/n): ");
        scanf(" %c", &choice);
    } while ((choice == 'y' || choice == 'Y') && size < MAX_GRADES);

    // Display the grades
    displayGrades(grades, size);

    // Calculate and display the average grade
    float average = calculateAverage(grades, size);
    printf("Average grade: %.2f\n", average);

    return 0;
}

// Function to add a new grade to the array
void addGrade(float grades[], int *size, float grade) {
    if (*size < MAX_GRADES) {
        grades[*size] = grade;
        (*size)++;
    } else {
        printf("Cannot add more grades, the array is full.\n");
    }
}

// Function to display all grades in the array
void displayGrades(float grades[], int size) {
    printf("Grades: ");
    for (int i = 0; i < size; i++) {
        printf("%.2f ", grades[i]);
    }
    printf("\n");
}

// Function to calculate the average of the grades
float calculateAverage(float grades[], int size) {
    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += grades[i];
    }
    return sum / size;
}
```

### Comparison

1. **Memory Allocation**:
   - **Dynamic Allocation**: Memory is allocated and resized dynamically as needed. The initial capacity is small, and the array grows as more grades are added.
   - **Fixed-Size Array**: The array has a fixed size defined at compile time. Memory is allocated once, and the size cannot change during runtime.

2. **Flexibility**:
   - **Dynamic Allocation**: The program can handle any number of grades limited only by the system's memory. The array size adjusts as needed.
   - **Fixed-Size Array**: The maximum number of grades is limited to the predefined size (`MAX_GRADES`). If the array is full, no more grades can be added.

3. **Efficiency**:
   - **Dynamic Allocation**: Initially, memory usage is minimal and grows only as needed. However, frequent resizing (especially doubling the capacity) can cause overhead.
   - **Fixed-Size Array**: The memory usage is constant, regardless of the number of grades entered. If the array is underutilized, memory is wasted.

4. **Memory Management**:
   - **Dynamic Allocation**: The program needs to explicitly free the allocated memory using `free()`. Proper memory management is crucial to avoid memory leaks.
   - **Fixed-Size Array**: The memory is managed automatically. There is no need for explicit deallocation since the array is on the stack.

5. **Complexity**:
   - **Dynamic Allocation**: Requires more complex logic for memory allocation, reallocation, and management. It involves using pointers and functions like `malloc()` and `realloc()`.
   - **Fixed-Size Array**: Simpler to implement and understand. No need for pointer manipulation or dynamic memory functions.
