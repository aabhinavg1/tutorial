
# LinkedListExample

This project demonstrates the implementation of single linked lists in C++. The project includes examples of basic linked list operations, menu-based interaction, and generic implementation using templates.

## What is a Linked List?

A linked list is a dynamic data structure consisting of nodes, where each node contains two parts:
- **Data**: Stores the value.
- **Pointer**: Points to the next node in the sequence.

Unlike arrays, linked lists allow efficient insertion and deletion of elements without the need for reallocation or reorganization of memory.

### Types of Linked Lists:
- **Singly Linked List**: Each node points to the next node, forming a unidirectional chain.
- **Doubly Linked List**: Each node points to both the next and previous nodes.
- **Circular Linked List**: The last node points back to the first node.

This project focuses on **Singly Linked Lists**.

## Tutorial: Single Linked List Algorithm

Below is a step-by-step guide to implementing a single linked list.

### Algorithm for Key Operations

#### 1. **Insert at Beginning**
   - **Input**: Head of the list, value to insert.
   - **Steps**:
     1. Create a new node and assign the value.
     2. Set the new node's `next` to the current head.
     3. Update the head to point to the new node.

#### 2. **Insert at End**
   - **Input**: Head of the list, value to insert.
   - **Steps**:
     1. Create a new node and assign the value.
     2. If the list is empty, set the new node as the head.
     3. Traverse to the last node of the list.
     4. Set the last node's `next` to the new node.

#### 3. **Traverse the List**
   - **Input**: Head of the list.
   - **Steps**:
     1. Start from the head node.
     2. While the current node is not `nullptr`, print the value.
     3. Move to the next node.

#### 4. **Delete at Beginning**
   - **Input**: Head of the list.
   - **Steps**:
     1. Store the current head node in a temporary pointer.
     2. Update the head to the next node.
     3. Delete the temporary pointer.

#### 5. **Delete at End**
   - **Input**: Head of the list.
   - **Steps**:
     1. Traverse to the second-to-last node.
     2. Delete the last node.
     3. Set the second-to-last node's `next` to `nullptr`.

#### 6. **Insert at a Specific Position**
   - **Input**: Head of the list, value to insert, position.
   - **Steps**:
     1. Traverse to the node before the target position.
     2. Create a new node and assign the value.
     3. Set the new node's `next` to the current node's `next`.
     4. Update the current node's `next` to the new node.

#### 7. **Delete at a Specific Position**
   - **Input**: Head of the list, position.
   - **Steps**:
     1. Traverse to the node before the target position.
     2. Update the node's `next` to skip the target node.
     3. Delete the target node.

### Example Code for Traversing a List
```cpp
void traverseList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}
```

By following these algorithms, you can effectively implement and manage a single linked list.

## Project Structure

The project contains the following main programs:

1. **LinkedListExample**: Basic implementation of linked list operations.
2. **LinkedListMenuBased**: Menu-driven linked list application for user interaction.
3. **LinkedListGeneric**: Implementation of a generic linked list using templates.

## Prerequisites

Ensure you have the following installed:

- CMake (version 3.10 or higher)
- A C++ compiler (e.g., GCC, Clang, or MSVC)

## Build Instructions

Follow these steps to build and run the project:

1. Clone the repository:
    ```bash
    git clone <repository_url>
    cd LinkedListExample
    ```

2. Create a build directory and navigate to it:
    ```bash
    mkdir build && cd build
    ```

3. Run CMake to generate build files:
    ```bash
    cmake ..
    ```

4. Build the project:
    ```bash
    cmake --build .
    ```

## Running the Programs

- To run the **LinkedListExample**:
    ```bash
    ./LinkedListExample
    ```

- To run the **LinkedListMenuBased**:
    ```bash
    ./LinkedListMenuBased
    ```

- To run the **LinkedListGeneric**:
    ```bash
    ./LinkedListGeneric
    ```

## Source Files

The project contains the following source files:

- `src/main.cpp`: Contains the main implementation of linked list operations.
- `src/menu_main.cpp`: Menu-driven linked list application.
- `src/LinkedList.cpp`: Core linked list implementation.
- `src/TemplateMain.cpp`: Template-based linked list.

## License

This project is licensed under the MIT License. See the LICENSE file for details.

---
Happy Coding!
