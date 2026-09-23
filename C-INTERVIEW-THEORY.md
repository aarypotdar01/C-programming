# C Interview Theory — 20 Must-Know Questions

A quick interview-revision guide covering the most important C concepts after completing the 50 programming problems.

---

## 1. Difference between Stack and Heap

The **stack** is used for automatic/local variables and function-call information, while the **heap** is used for dynamically allocated memory.

| Stack | Heap |
|---|---|
| Automatically managed | Dynamically managed |
| Local variables and function-call data | Memory from `malloc()`, `calloc()`, `realloc()` |
| Generally faster | Generally slower |
| Limited in size | Usually larger |
| Released automatically according to scope/lifetime | Must be released using `free()` |

Example:

```c
int x = 10;                    // Typically stack
int *p = malloc(sizeof(int));  // Heap
free(p);
```

**Interview answer:** Stack memory is automatically managed, whereas heap memory is dynamically allocated and must be explicitly managed by the programmer.

---

## 2. Difference between `malloc()` and `calloc()`

Both dynamically allocate memory.

### `malloc()`

```c
int *p = malloc(5 * sizeof(int));
```

Allocates a block of memory of the requested size. The allocated memory is **uninitialized**.

### `calloc()`

```c
int *p = calloc(5, sizeof(int));
```

Allocates memory for multiple elements and initializes the allocated bytes to zero.

| `malloc()` | `calloc()` |
|---|---|
| Takes one argument | Takes two arguments |
| `malloc(total_bytes)` | `calloc(number_of_elements, size)` |
| Memory is uninitialized | Allocated bytes are initialized to zero |

**Interview answer:** `malloc()` allocates a block of memory without initializing its contents, while `calloc()` allocates memory for multiple elements and initializes the allocated bytes to zero.

---

## 3. What is `realloc()`?

`realloc()` is used to **resize an existing dynamically allocated memory block**.

```c
int *p = malloc(5 * sizeof(int));

int *temp = realloc(p, 10 * sizeof(int));

if (temp != NULL)
{
    p = temp;
}
```

It can increase or decrease the size of an allocation. Existing contents are preserved up to the appropriate limit.

`realloc()` may move the allocation to a different memory location.

**Interview answer:** `realloc()` changes the size of an existing dynamically allocated memory block while preserving its existing contents up to the new size.

---

## 4. What is a Dangling Pointer?

A **dangling pointer** is a pointer that refers to memory whose lifetime has ended or that has already been released.

Example:

```c
int *p = malloc(sizeof(int));

*p = 10;

free(p);
```

After `free(p)`, `p` still contains the old address, but that memory is no longer valid.

A useful practice is:

```c
free(p);
p = NULL;
```

**Interview answer:** A dangling pointer points to memory that is no longer valid, for example after the memory has been freed.

---

## 5. What is a Wild Pointer?

A **wild pointer** is an uninitialized pointer.

Example:

```c
int *p;
```

`p` has an indeterminate value. Dereferencing it can cause undefined behavior.

Safer:

```c
int *p = NULL;
```

### Difference

```text
Wild pointer
→ Has not been initialized.

Dangling pointer
→ Previously pointed to valid memory, but that memory is no longer valid.
```

**Interview answer:** A wild pointer is an uninitialized pointer that does not have a known valid target.

---

## 6. What is a Null Pointer?

A **null pointer** is a pointer value that indicates that it does not point to a valid object or function.

```c
int *p = NULL;
```

You can check it using:

```c
if (p == NULL)
{
    printf("Pointer is NULL");
}
```

It must not be dereferenced:

```c
*p = 10;   // Invalid
```

**Interview answer:** A null pointer is a pointer that is explicitly set to a null value to indicate that it does not currently point to a valid object or function.

---

## 7. What is a Void Pointer?

A `void *` is a **generic object pointer** that can store the address of an object of any object type.

Example:

```c
int x = 10;

void *ptr = &x;

printf("%d", *(int *)ptr);
```

Before dereferencing, it generally needs to be converted to the appropriate pointer type.

**Interview answer:** A void pointer is a generic object pointer that can hold the address of objects of different types and must be converted to the appropriate type before dereferencing.

---

## 8. What is a Function Pointer?

A **function pointer** stores the address of a function and can be used to call that function indirectly.

Example:

```c
int add(int a, int b)
{
    return a + b;
}

int (*ptr)(int, int) = add;

printf("%d", ptr(10, 20));
```

Output:

```text
30
```

Common uses include callbacks, function tables, and state machines.

**Interview answer:** A function pointer stores the address of a function and allows the function to be called indirectly.

---

## 9. What is Pointer Arithmetic?

Pointer arithmetic means performing operations such as:

```c
ptr++;
ptr--;
ptr + n;
ptr - n;
```

on pointers.

Example:

```c
int arr[] = {10, 20, 30, 40};

int *ptr = arr;

printf("%d", *(ptr + 2));
```

Output:

```text
30
```

Pointer arithmetic is scaled by the size of the pointed-to type. Therefore, for an `int *`, `ptr + 1` points to the next `int`.

**Interview answer:** Pointer arithmetic allows a pointer to move through objects, with movement scaled according to the size of the type it points to.

---

## 10. Difference between `const` and `volatile`

These keywords have different purposes.

### `const`

`const` prevents modification of an object through that particular lvalue.

```c
const int x = 10;

x = 20;   // Error
```

### `volatile`

`volatile` tells the compiler that the value of an object may change unexpectedly, so accesses to it should not be optimized away or assumed unchanged.

```c
volatile int status;
```

Typical examples include memory-mapped hardware registers and variables affected by interrupt handlers.

`volatile` does **not** make operations atomic or thread-safe.

**Interview answer:** `const` restricts modification through a particular access path, while `volatile` tells the compiler that the value may change outside the normal program flow.

---

## 11. Difference between Array and Pointer

An array and a pointer are **not the same thing**.

```c
int arr[5];
int *ptr = arr;
```

`arr` is an array containing five integers. `ptr` is a pointer storing an address.

A key difference:

```c
sizeof(arr)
```

gives the size of the entire array when `arr` is actually an array in that context.

But:

```c
sizeof(ptr)
```

gives the size of the pointer itself.

Also:

```c
arr++;    // Invalid
ptr++;    // Valid
```

**Interview answer:** An array is a fixed-size collection of elements, while a pointer is an object that stores an address. An array can decay to a pointer to its first element in many expressions, but the two are not the same type.

---

## 12. Difference between Structure and Union

### Structure

Each member has its **own storage**.

```c
struct Student
{
    int rollNo;
    float marks;
    char grade;
};
```

All members can hold values at the same time.

### Union

All members **share the same storage**.

```c
union Data
{
    int i;
    float f;
    char c;
};
```

Writing to one member changes the shared storage used by the other members.

| Structure | Union |
|---|---|
| Separate storage for members | Shared storage |
| All members can hold values simultaneously | Members overlap |
| Size is affected by all members and padding | Size is based on its largest member and alignment |

**Interview answer:** A structure allocates separate storage for each member, while a union overlays all members in the same storage.

---

## 13. Static vs Global vs Local Variables

These terms describe different properties, so they are not simply three mutually exclusive categories.

### Local variable

Declared inside a function or block.

```c
void test()
{
    int x = 10;
}
```

It normally has automatic storage duration.

### Global variable

Declared outside all functions.

```c
int x = 10;
```

It has static storage duration.

### Static variable

Inside a function:

```c
void counter()
{
    static int count = 0;
    count++;
}
```

`count` retains its value between function calls.

At file scope:

```c
static int x;
```

`x` has internal linkage, so it is accessible only within that source file.

**Interview answer:** A local variable is declared within a block, a global variable is declared at file scope, and `static` changes storage duration or linkage depending on where it is used.

---

## 14. What is Recursion?

**Recursion** is a technique where a function calls itself to solve a smaller or simpler version of a problem.

Example:

```c
int factorial(int n)
{
    if (n <= 1)
        return 1;

    return n * factorial(n - 1);
}
```

For `factorial(5)`:

```text
5 × factorial(4)
    ↓
4 × factorial(3)
    ↓
3 × factorial(2)
    ↓
2 × factorial(1)
    ↓
1
```

A recursive function needs a **base case** to stop.

**Interview answer:** Recursion occurs when a function calls itself until a base condition is reached.

---

## 15. Call by Value vs Call by Reference

Strictly speaking, **C uses pass-by-value**. It does not have true pass-by-reference parameters like some other languages.

### Pass by value

A copy of the value is passed:

```c
void change(int x)
{
    x = 20;
}
```

The caller's variable is not changed.

### Using a pointer

The value of an address is passed:

```c
void change(int *x)
{
    *x = 20;
}

int a = 10;
change(&a);
```

Now `a` becomes `20`.

This is often informally called "call by reference," but technically it is **pass-by-value of a pointer**.

**Interview answer:** C is strictly pass-by-value. We can modify the caller's object by passing its address through a pointer.

---

## 16. Memory Layout of a C Program

A simplified process memory layout is:

```text
Higher addresses
+----------------------+
|        Stack         |
| Local variables      |
| Function call data   |
+----------------------+
|          ↓           |
|                      |
|          ↑           |
+----------------------+
|        Heap          |
| malloc/calloc/etc.   |
+----------------------+
|        BSS           |
| Uninitialized static |
| and global data      |
+----------------------+
|        Data          |
| Initialized static   |
| and global data      |
+----------------------+
|        Text          |
| Program instructions |
+----------------------+
Lower addresses
```

### Main sections

- **Text:** Program instructions/code.
- **Data:** Initialized global and static variables.
- **BSS:** Uninitialized or zero-initialized global and static variables.
- **Heap:** Dynamically allocated memory.
- **Stack:** Function calls and automatic/local variables.

The exact layout is platform-, compiler-, linker-, and operating-system-dependent.

**Interview answer:** A typical C process contains text, data, BSS, heap, and stack regions, although the exact arrangement is platform-dependent.

---

## 17. What is a Memory Leak?

A **memory leak** occurs when dynamically allocated memory is no longer reachable by the program but has not been released.

Example:

```c
int *p = malloc(sizeof(int));

p = NULL;
```

The allocated block is now unreachable, so it cannot be freed through `p`.

Correct:

```c
int *p = malloc(sizeof(int));

free(p);
p = NULL;
```

**Interview answer:** A memory leak occurs when dynamically allocated memory is not released after it is no longer needed and becomes unreachable.

---

## 18. Difference between `#define` and `const`

### `#define`

Creates a preprocessor macro:

```c
#define PI 3.14159
```

The preprocessor substitutes the macro before compilation.

### `const`

Declares a typed object that cannot be modified through that particular lvalue:

```c
const double PI = 3.14159;
```

| `#define` | `const` |
|---|---|
| Preprocessor macro | Typed object |
| No type associated with the macro itself | Has a type |
| Textual/preprocessor substitution | Handled by the compiler |
| No object is inherently created just by defining the macro | Declares an object |

**Interview answer:** `#define` creates a preprocessor macro, while `const` declares a typed object whose value cannot be modified through that lvalue.

---

## 19. What is the `sizeof` Operator?

`sizeof` gives the size in **bytes** of a type or expression.

Examples:

```c
sizeof(int)
sizeof(char)
sizeof(float)
sizeof(double)
```

or:

```c
int x;

printf("%zu", sizeof(x));
```

For an array:

```c
int arr[10];

sizeof(arr)
```

gives the size of the entire array in that context.

The number of elements can be calculated as:

```c
sizeof(arr) / sizeof(arr[0])
```

The result of `sizeof` has type `size_t`.

**Interview answer:** `sizeof` is an operator that gives the size in bytes of a type or object/expression.

---

## 20. Explain Storage Classes — `auto`, `register`, `static`, `extern`

### `auto`

The default storage class for ordinary local variables.

```c
void test()
{
    auto int x = 10;
}
```

Usually you simply write:

```c
int x = 10;
```

### `register`

Suggests that the compiler consider storing the variable in a CPU register.

```c
register int x;
```

Modern compilers usually make their own optimization decisions, so this keyword is rarely needed.

### `static`

Inside a function:

```c
void counter()
{
    static int count = 0;
    count++;
}
```

The variable retains its value between function calls.

At file scope:

```c
static int x;
```

gives the variable internal linkage, restricting access to that source file.

### `extern`

Declares an object or function that is defined elsewhere.

Example:

**file1.c**

```c
int count = 10;
```

**file2.c**

```c
extern int count;
```

This tells the compiler that `count` is defined in another translation unit.

**Interview answer:** `auto` is the normal storage class for local variables, `register` is a compiler hint for register storage, `static` provides static storage duration or internal linkage depending on scope, and `extern` declares an entity defined elsewhere.

---

# Quick Revision Table

| # | Question | Key Point |
|---|---|---|
| 1 | Stack vs Heap | Automatic memory vs dynamic memory |
| 2 | `malloc()` vs `calloc()` | Allocate vs allocate + zero-initialize |
| 3 | `realloc()` | Resize existing allocation |
| 4 | Dangling pointer | Points to invalid/expired memory |
| 5 | Wild pointer | Uninitialized pointer |
| 6 | Null pointer | Points to no valid object/function |
| 7 | Void pointer | Generic object pointer |
| 8 | Function pointer | Stores function address |
| 9 | Pointer arithmetic | Movement scaled by pointed-to type |
| 10 | `const` vs `volatile` | Restrict modification vs prevent optimization assumptions about external changes |
| 11 | Array vs pointer | Collection vs address-holding object |
| 12 | Structure vs union | Separate storage vs shared storage |
| 13 | Static/global/local | Scope, duration, and linkage concepts |
| 14 | Recursion | Function calls itself |
| 15 | Value vs reference | C is pass-by-value; pointers can modify caller objects |
| 16 | Memory layout | Text, data, BSS, heap, stack |
| 17 | Memory leak | Allocated memory not released/reachable |
| 18 | `#define` vs `const` | Macro vs typed object |
| 19 | `sizeof` | Size in bytes |
| 20 | Storage classes | `auto`, `register`, `static`, `extern` |

---

## Interview Tip

For each question, first give the **one-sentence interview answer**, then explain with an example if the interviewer asks for more detail.

The five concepts you should be especially comfortable explaining on a whiteboard are:

1. Stack vs heap
2. Pointers and pointer arithmetic
3. `malloc()` / `calloc()` / `realloc()` / `free()`
4. Array vs pointer
5. Structure vs union
