---
title: "Queue Implementations: Array, Linked List, and Vector"
description: "A detailed comparison and explanation of three queue implementations in C++: Array, Linked List, and Vector, including time complexities and use cases."
keywords: "queue implementation, C++ queue, array-based queue, linked list-based queue, vector-based queue, C++ data structures, time complexity, enqueue, dequeue, C++ tutorial"
---

# Queue Implementations: Explanation, Comparison, and Summary Table

This document explains the logic behind three common queue implementations: **Array-Based Queue**, **Linked List-Based Queue**, and **Vector-Based Queue**. Afterward, a comparison of their characteristics is provided, followed by a summary table.

## 1. **Array-Based Queue**

### **Logic**:
An array-based queue stores elements in a contiguous block of memory (an array). Two pointers are maintained:
- **Front**: Points to the first element in the queue.
- **Rear**: Points to the last element added to the queue.

**Operations**:
- **Enqueue**: Elements are added to the end of the array (the `rear`). If the array reaches its maximum size, a resizing operation may be required (not shown in the basic implementation).
- **Dequeue**: The element at the front of the queue is removed. After removal, all other elements are shifted left to fill the gap, which can be costly in terms of time complexity.
- **Peek**: Returns the element at the front withou



# Queue Data Structure

## What is a Queue?
A **queue** is a linear data structure that follows the **First In, First Out (FIFO)** principle. This means the first element added to the queue will be the first one to be removed.

---

## Basic Operations on Queue

1. **enqueue()**: Inserts an element at the end of the queue i.e., at the rear end.
2. **dequeue()**: Removes and returns an element that is at the front end of the queue.
3. **front()**: Returns the element at the front end without removing it.
4. **rear()**: Returns the element at the rear end without removing it.
5. **isEmpty()**: Indicates whether the queue is empty or not.
6. **isFull()**: Indicates whether the queue is full or not.
7. **size()**: Returns the size of the queue i.e., the total number of elements it contains.

---

## Implementation of Queue

For implementing the queue using an array, we only need to keep track of two variables: `front` and `size`.
- **front**: Points to the first element in the queue.
- **size**: Keeps track of the total number of elements in the queue.

When we enqueue an item, we insert it at the position `front + size` (the rear of the queue) and increment the size. For dequeuing, we check if the queue is empty and remove the item at the front. After removal, we shift all remaining elements to the left by one position and decrement the size to reflect the removal.

---

## Steps for Enqueue
1. Check if the queue is full:
   - If full, print "Queue is full" and exit.
2. If the queue is not full:
   - Add the new element at the index `front + size` (this is the rear of the queue).
   - Increment the size of the queue by 1 (`size++`).

## Steps for Dequeue
1. Check if the queue is empty:
   - If empty, print "Queue is empty" and exit.
2. If the queue is not empty:
   - Print and return the front element (which is `queue[front]`).
   - Shift all elements in the queue to the left by one position (i.e., move each element `queue[i]` to `queue[i - 1]` for `i` from 1 to `size - 1`).
   - Decrement the size by 1 (`size--`).

---

## Pseudocode for Queue Operations

### Enqueue Operation
```plaintext
Procedure Enqueue(queue, element):
    If size == capacity:
        Print "Queue is full"
        Exit
    Else:
        queue[front + size] <- element
        size <- size + 1
End Procedure
```

### Dequeue Operation
```plaintext
Procedure Dequeue(queue):
    If size == 0:
        Print "Queue is empty"
        Exit
    Else:
        element <- queue[front]
        For i from 0 to size - 2:
            queue[front + i] <- queue[front + i + 1]
        size <- size - 1
        Return element
End Procedure
```

### Front Operation
```plaintext
Procedure Front(queue):
    If size == 0:
        Print "Queue is empty"
        Exit
    Else:
        Return queue[front]
End Procedure
```

### Rear Operation
```plaintext
Procedure Rear(queue):
    If size == 0:
        Print "Queue is empty"
        Exit
    Else:
        Return queue[front + size - 1]
End Procedure
```

### IsEmpty Operation
```plaintext
Procedure IsEmpty(queue):
    If size == 0:
        Return True
    Else:
        Return False
End Procedure
```

### IsFull Operation
```plaintext
Procedure IsFull(queue):
    If size == capacity:
        Return True
    Else:
        Return False
End Procedure
```

### Size Operation
```plaintext
Procedure Size(queue):
    Return size
End Procedure
```

---

## Why Do We Need `front` and `rear`?

1. **front**:
   - Indicates the starting point of the queue.
   - Essential for accessing the element at the front without iterating through the array.
   - Used in operations like `dequeue` and `front`.

2. **rear**:
   - Represents the end of the queue where new elements are added.
   - Helps maintain the FIFO property by ensuring new elements are always enqueued at the correct position.

By maintaining both `front` and `rear`, we ensure efficient enqueue and dequeue operations without unnecessary shifting of elements in optimized implementations like circular queues.

---

## Summary
A queue is a foundational data structure essential in many algorithms and applications. By understanding its principles, implementation, and variations, you can apply it effectively to solve real-world problems.

# Queue Implementations: Explanation, Comparison, and Summary Table

This document explains the logic behind three common queue implementations: **Array-Based Queue**, **Linked List-Based Queue**, and **Vector-Based Queue**. Afterward, a comparison of their characteristics is provided, followed by a summary table.

## 1. **Array-Based Queue**

### **Logic**:
An array-based queue stores elements in a contiguous block of memory (an array). Two pointers are maintained:
- **Front**: Points to the first element in the queue.
- **Rear**: Points to the last element added to the queue.

**Operations**:
- **Enqueue**: Elements are added to the end of the array (the `rear`). If the array reaches its maximum size, a resizing operation may be required (not shown in the basic implementation).
- **Dequeue**: The element at the front of the queue is removed. After removal, all other elements are shifted left to fill the gap, which can be costly in terms of time complexity.
- **Peek**: Returns the element at the front without removing it.
- **Check Empty**: The queue is empty when `front` equals `rear`.

### **Time Complexity**:
- **Enqueue**: O(1) (amortized)
- **Dequeue**: O(n) (due to shifting elements)
- **Peek**: O(1)
- **Check Empty**: O(1)

---

## 2. **Linked List-Based Queue**

### **Logic**:
A linked list-based queue uses a dynamic structure of nodes. Each node contains an element and a pointer to the next node. 
- **Front Node**: Points to the first element in the queue.
- **Rear Node**: Points to the last element in the queue.

**Operations**:
- **Enqueue**: Adds a new node at the rear of the queue by adjusting the rear pointer.
- **Dequeue**: Removes the node at the front of the queue by adjusting the front pointer. The memory of the removed node is freed.
- **Peek**: Returns the data of the front node without removing it.
- **Check Empty**: The queue is empty when both the front and rear pointers are `nullptr`.

### **Time Complexity**:
- **Enqueue**: O(1)
- **Dequeue**: O(1)
- **Peek**: O(1)
- **Check Empty**: O(1)

---

## 3. **Vector-Based Queue**

### **Logic**:
In a vector-based queue, a dynamic array (std::vector) is used to store the elements. The queue grows or shrinks as necessary.
- **Front**: Points to the first element in the vector.
- **Rear**: Points to the last element in the vector.

**Operations**:
- **Enqueue**: Adds an element to the end of the vector. If the vector's capacity is exceeded, it is resized.
- **Dequeue**: Removes the element at the front of the vector. All subsequent elements are shifted to the left, which can be inefficient for large queues.
- **Peek**: Returns the element at the front of the vector without removing it.
- **Check Empty**: The queue is empty when the vector size is 0.

### **Time Complexity**:
- **Enqueue**: O(1) (amortized)
- **Dequeue**: O(n) (due to shifting elements)
- **Peek**: O(1)
- **Check Empty**: O(1)

---

## **Comparison of Array, Linked List, and Vector Queue Implementations**

| **Feature**               | **Array-Based Queue**  | **Linked List-Based Queue** | **Vector-Based Queue**   |
|---------------------------|------------------------|-----------------------------|--------------------------|
| **Size**                  | Fixed                  | Dynamic                     | Dynamic                  |
| **Memory Efficiency**     | Moderate               | High                        | Moderate                 |
| **Enqueue Complexity**    | O(1)                   | O(1)                        | O(1) (amortized)         |
| **Dequeue Complexity**    | O(n) (shifting)        | O(1)                        | O(n) (shifting)          |
| **Peek Complexity**       | O(1)                   | O(1)                        | O(1)                     |
| **Is Empty Complexity**   | O(1)                   | O(1)                        | O(1)                     |
| **Cache Locality**        | High                   | Low                         | Moderate                 |
| **Implementation Complexity** | Simple             | Moderate                    | Simple                   |

---

## **Conclusion**

- **Array-Based Queue**: Best for small queues or when the size is known in advance. Shifting elements during dequeue can be inefficient.
- **Linked List-Based Queue**: Ideal for dynamic sizes and frequent enqueue/dequeue operations. Efficient for large queues.
- **Vector-Based Queue**: Good for dynamic sizes, but the shifting operation during dequeue makes it less efficient for large queues.

Choose the implementation based on your specific needs, considering factors like queue size, frequency of operations, and memory management concerns.
