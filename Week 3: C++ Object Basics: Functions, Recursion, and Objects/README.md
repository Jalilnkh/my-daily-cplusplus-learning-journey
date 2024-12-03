# Week 3: C++ Object Basics: Functions, Recursion, and Objects

This week focuses on fundamental concepts of C++ functions, recursion, and objects. By understanding how functions operate and how objects are structured and manipulated, you'll gain deeper insights into object-oriented programming and its real-world applications.

---

## 📌 Functions

Functions in C++ are reusable blocks of code that perform specific tasks. They consist of two main components: the **header** and the **body**.

### Topics Covered:

1. **Function Header and Body**:
   - The **header** specifies the function's type, name, and parameters.
   - The **body** is a block of code enclosed in curly braces `{}` that defines the actions performed by the function.

2. **C++ Code Documentation**:
   - Writing clear, concise documentation before function definitions is crucial for readability and collaboration.
   - Documentation explains the purpose of the function, its parameters, and the return type.
   - **Doxygen Tool**: A popular tool to generate automated documentation for C++ code.

### Example:
```cpp
/**
 * Adds two integers.
 * @param a The first integer.
 * @param b The second integer.
 * @return The sum of a and b.
 */
int Add(int a, int b) {
    return a + b;
}
```

---

## 📌 Function Return and Helper Functions

Functions can return data to the caller using the **`return` keyword**, making them reusable and dynamic. Helper functions are smaller functions called within other functions to break down complex logic.

### Topics Covered:

1. **Return Value**:
   - Functions like `sizeof()` and `length()` return data to the caller.

2. **Helper Functions**:
   - Used within other functions to modularize and simplify complex tasks.

3. **The `const` Keyword**:
   - Prevents modification of variables or parameters, ensuring immutability.

### Example:
```cpp
int Square(int x) {
    return x * x; // Returns the square of x
}

int SumOfSquares(int a, int b) {
    return Square(a) + Square(b); // Helper function used here
}
```

---

## 📌 Objects and Constructors

Objects are fundamental to object-oriented programming (OOP). They are collections of properties and methods, which can be thought of as attributes and behaviors.

### Topics Covered:

1. **An Object**:
   - An object is a collection of properties. If a property’s value is a function, it is known as a **method**.

2. **The Constructor**:
   - A constructor is a special function within a class used to initialize the object’s attributes (also known as instance variables).

### Example:
```cpp
class Character {
public:
    Character(string n, int h) : name(n), health(h) {} // Constructor

    void TakeDamage(int damage) {
        health -= damage; // Method to modify health
    }

    int GetHealth() const {
        return health; // Returns the current health
    }

private:
    string name;
    int health;
};
```

---

## 📌 Class Functions and Mutability

Class functions, also known as methods, are responsible for modifying the attributes of an object. Unlike external functions, class functions ensure changes are permanent and maintain encapsulation.

### Topics Covered:

1. **Class Functions**:
   - Functions defined within a class to modify or access its data.
   - Encapsulation ensures the integrity of an object’s state.

2. **Mutability**:
   - Objects are mutable, meaning their attributes can change over time.
   - Examples include updating a game character’s position, health, or inventory.

### Example:
```cpp
class Player {
public:
    Player(string n) : name(n), score(0) {}

    void AddScore(int points) {
        score += points; // Class function to modify score
    }

    int GetScore() const {
        return score; // Class function to access score
    }

private:
    string name;
    int score;
};
```

---

## Summary of Week 3 Topics

### **Functions**
- **Calling a Function**: Understand how to call and use functions.
- **C++ Code Documentation**: Learn to document functions clearly.
- **Helper Functions**: Modularize logic using helper functions.
- **`const` Keyword**: Protect variables from modification.

### **Objects**
- **An Object**: Learn about object properties and methods.
- **The Constructor**: Initialize object attributes effectively.
- **Class Functions**: Modify object data securely and encapsulate functionality.
- **Mutability**: Understand how objects can change state during execution.

