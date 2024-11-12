
# Classes and Objects in C++

## Table of Contents
1. [Introduction to Classes and Objects](#introduction)
2. [Basic Concepts](#basic-concepts)
   - [Defining a Class](#defining-a-class)
   - [Creating Objects](#creating-objects)
3. [Class Members](#class-members)
   - [Data Members](#data-members)
   - [Member Functions](#member-functions)
   - [Access Specifiers](#access-specifiers)
4. [Constructors and Destructors](#constructors-and-destructors)
   - [Constructors](#constructors)
   - [Destructor](#destructor)
5. [Advanced Concepts](#advanced-concepts)
   - [Static Members](#static-members)
   - [Friend Functions and Classes](#friend-functions-and-classes)
   - [Inheritance](#inheritance)
   - [Polymorphism](#polymorphism)
6. [Best Practices](#best-practices)
7. [Conclusion](#conclusion)

## 1. Introduction to Classes and Objects <a id="introduction"></a>

Classes and objects are fundamental concepts in Object-Oriented Programming (OOP). A **class** is a blueprint that defines the structure and behavior of objects. An **object** is an instance of a class, representing a specific example of the class's blueprint.

## 2. Basic Concepts <a id="basic-concepts"></a>

### Defining a Class <a id="defining-a-class"></a>

To define a class, use the `class` keyword, followed by the class name and curly braces:

```cpp
class MyClass {
public:
    int myData; // Data member
    void display(); // Member function declaration
};
```

### Creating Objects <a id="creating-objects"></a>

An object is created by declaring an instance of a class:

```cpp
MyClass obj; // obj is an instance of MyClass
```

## 3. Class Members <a id="class-members"></a>

Class members include **data members** (variables) and **member functions** (methods) that define the properties and behavior of the class.

### Data Members <a id="data-members"></a>

Data members are variables that hold the data for each object of a class:

```cpp
class Person {
public:
    std::string name;
    int age;
};
```

### Member Functions <a id="member-functions"></a>

Member functions define the behavior of the class:

```cpp
class Person {
public:
    std::string name;
    int age;

    void display() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};
```

### Access Specifiers <a id="access-specifiers"></a>

Access specifiers determine the accessibility of class members:
- `public`: Accessible from outside the class.
- `private`: Only accessible within the class.
- `protected`: Accessible within the class and its subclasses.

## 4. Constructors and Destructors <a id="constructors-and-destructors"></a>

### Constructors <a id="constructors"></a>

A **constructor** initializes an object when it's created:

```cpp
class Person {
public:
    Person(std::string n, int a) : name(n), age(a) {} // Constructor
    void display() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }

private:
    std::string name;
    int age;
};
```

### Destructor <a id="destructor"></a>

A **destructor** cleans up an object before it is destroyed, defined with `~`:

```cpp
class MyClass {
public:
    ~MyClass() {
        std::cout << "Destructor called!" << std::endl;
    }
};
```

## 5. Advanced Concepts <a id="advanced-concepts"></a>

### Static Members <a id="static-members"></a>

**Static members** are shared across all objects of a class:

```cpp
class MyClass {
public:
    static int count;
    MyClass() { count++; }
};
int MyClass::count = 0; // Initialize static member outside class
```

### Friend Functions and Classes <a id="friend-functions-and-classes"></a>

A **friend function** can access private and protected members of a class:

```cpp
class MyClass {
    friend void display(MyClass& obj);
    int value;
};
void display(MyClass& obj) {
    std::cout << obj.value << std::endl;
}
```

### Inheritance <a id="inheritance"></a>

**Inheritance** allows one class to inherit properties and behaviors from another:

```cpp
class Base {
public:
    int x;
};
class Derived : public Base { // Inherits from Base
public:
    int y;
};
```

### Polymorphism <a id="polymorphism"></a>

**Polymorphism** allows methods to be overridden in derived classes:

```cpp
class Base {
public:
    virtual void show() { std::cout << "Base show" << std::endl; }
};
class Derived : public Base {
public:
    void show() override { std::cout << "Derived show" << std::endl; }
};
```

## 6. Best Practices <a id="best-practices"></a>

- Use private/protected members to encapsulate data.
- Use constructors to initialize data.
- Use `const` with functions that do not modify data members.
- Avoid excessive use of `friend` functions as they break encapsulation.

## 7. Conclusion <a id="conclusion"></a>

Classes and objects in C++ provide powerful ways to model complex data and behaviors, making code reusable and modular. By understanding these core concepts, you’ll have a strong foundation in OOP.

