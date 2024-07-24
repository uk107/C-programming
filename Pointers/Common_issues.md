### Common Issues with Pointers

1. **Dereferencing Null or Uninitialized Pointers**:
   - Dereferencing a null or uninitialized pointer can cause segmentation faults.
   ```c
   int *ptr = NULL;
   *ptr = 5;  // This will cause a segmentation fault
   ```

   `*ptr = 5; attempts to dereference the NULL pointer by assigning the value 5 to the location pointed to by ptr. Since ptr is NULL, it does not point to a valid memory location. Therefore, the system typically raises a segmentation fault.`

2. **Memory Leaks**:
   - Forgetting to free dynamically allocated memory leads to memory leaks.
   ```c
   int *ptr = (int *)malloc(sizeof(int));
   // Use ptr
   // Forgot to call free(ptr);
   ```

3. **Buffer Overflows**:
   - Writing beyond the allocated memory can corrupt memory and cause crashes.
   ```c
   int *ptr = (int *)malloc(sizeof(int) * 5);
   for (int i = 0; i <= 5; i++) {
       ptr[i] = i;  // This causes a buffer overflow when i == 5
   }
   free(ptr);
   ```

4. **Dangling Pointers**:
   - Using pointers after the memory they point to has been freed.
   ```c
   int *ptr = (int *)malloc(sizeof(int));
   free(ptr);
   *ptr = 5;  // This will cause undefined behavior
   ```

5. **Double Free**:
   - Freeing the same memory twice can corrupt the memory management system.
   ```c
   int *ptr = (int *)malloc(sizeof(int));
   free(ptr);
   free(ptr);  // This will cause undefined behavior
   ```

6. **Pointer Arithmetic Errors**:
   - Incorrectly calculating offsets can lead to accessing invalid memory.
   ```c
   int arr[5];
   int *ptr = arr;
   ptr += 10;  // This points to memory outside the array
   *ptr = 5;   // Undefined behavior
   ```

7. **Type Casting Issues**:
   - Incorrect type casting can lead to accessing incorrect memory locations.
   ```c
   float f = 3.14;
   int *intPtr = (int *)&f;
   *intPtr = 5;  // This corrupts the float value
   ```

