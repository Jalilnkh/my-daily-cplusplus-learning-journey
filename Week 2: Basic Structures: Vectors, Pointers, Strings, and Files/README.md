# Week 2: Basic Structures: Vectors, Pointers, Strings, and Files


This week, we’re diving deeper into C++ fundamentals, covering arrays, pointers, and string manipulation. Here’s an outline of what we’ll be exploring.

---

## 📌 Arrays

An array is a data structure that stores a collection of items of the same type, such as integers, doubles, or strings. Arrays allow you to group multiple values under one variable name, making it easier to work with collections of data.

### Topics Covered
1. **Array Creation**: How to declare and initialize arrays in C++.
2. **Array Modification**: Accessing and modifying elements within arrays.
3. **2D Array**: Creating and using 2D arrays (arrays of arrays) that resemble tables with rows and columns.

### Quick Example
```cpp
int numbers[5] = {1, 2, 3, 4, 5};       // 1D Array
int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};  // 2D Array
```

---

## 📌 Pointers

Pointers are variables that store the memory address of another variable. They’re essential in C++ for dynamic memory management and advanced data structures.

### Topics Covered
1. **Pointer Introduction**: Understanding what pointers are and how they work.
2. **Pointer Reference**: Using the reference operator (`&`) to get the address of a variable.
3. **Pointer Dereference**: Using the dereference operator (`*`) to access the value at a specific memory address.

### Quick Example
```cpp
int age = 30;
int* ptr = &age;          // ptr stores the address of age
std::cout << *ptr;        // Dereference ptr to get the value of age
```

---

## 📌 Strings

In C++, strings are sequences of characters and have their own set of functions for manipulation. This week, we'll explore more about working with strings.

### Topics Covered

1. **String Length**: Using `.length()` or `.size()` to get the length of a string.
2. **Mutability**: Strings are immutable in C++. Characters within the string can be modified, but the string literal itself cannot.
3. **The `find()` Function**: Locates the index of a substring or character within a string. Returns an index if found, otherwise returns a large value.
4. **The `substr()` Function**: Extracts a substring from a string based on a starting index and a specified length.
5. **Escape Characters**: Characters that have special meaning in a string, like `\n` (new line) and `\t` (tab).
6. **Comparing with `==`**: Using `==` to compare two strings for equality.
7. **Lexicographical Order**: Comparing strings as they appear in a dictionary. The `compare()` method helps determine the order of two strings.

### Quick Example
```cpp
std::string text = "Hello, World!";
std::cout << "Length: " << text.length() << std::endl;
std::cout << "Substring: " << text.substr(0, 5) << std::endl;
std::cout << "Find 'World': " << text.find("World") << std::endl;
```

---

### Summary of Functions and Operators

- **`length()` / `size()`**: Gets the length of the string.
- **`find()`**: Finds the position of a character or substring.
- **`substr()`**: Extracts a part of the string.
- **Escape characters**: Special characters that start with `\`, like `\n` (new line).
- **Comparing with `==`**: Checks if two strings are the same.
- **`compare()`**: Compares two strings lexicographically.

