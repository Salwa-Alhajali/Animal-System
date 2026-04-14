تمام 🔥 هذا نفس الـ README مترجم بشكل احترافي للإنجليزي:

---

# 🐾 Animal System (C++ OOP Project)

## 📌 Overview

This project is a simple system built using **C++** to demonstrate **Object-Oriented Programming (OOP)** concepts through modeling animals and their behaviors.

The project focuses on:

* Inheritance
* Polymorphism
* Encapsulation
* Use of Virtual Functions

---

## 🧠 Project Idea

A base class called `Animal` is created, and different types of animals are derived from it, such as:

* 🐶 Dogs (`Dog`)
* 🐱 Cats (`Cat`)

Then, more specific types are implemented:

* German Shepherd
* Bulldog
* Siamese
* Maine Coon

Each animal has:

* A unique sound (`speak()`)
* Attributes like weight and height
* Additional characteristics depending on its type

---

## 🧱 Structure

### 🔹 Base Class

* `Animal`

  * Stores the animal name
  * Contains a virtual function `speak()`

### 🔹 Derived Classes

* `Dog` → inherits from `Animal`
* `Cat` → inherits from `Animal`

### 🔹 Specialized Classes

* `German_Shepherd`, `Bulldog` → derived from `Dog`
* `Siamese`, `Maine_Coon` → derived from `Cat`

---

## ⚙️ Key Concepts Used

### ✔️ Inheritance

Each animal type inherits from a parent class.

### ✔️ Polymorphism

Using:

```cpp
Animal* animal[]
```

to store different object types and call `speak()` dynamically.

### ✔️ Function Overriding

Each class overrides the `speak()` function with its own behavior.

---

## ▶️ How to Run

1. Make sure you have a C++ compiler (e.g., g++)
2. Compile and run the code:

```bash
g++ main.cpp -o animal
./animal
```

---

## 🧪 Sample Output

```
1 - Dog  Woof!
     Weight: 25kg
     Height: 50cm

2 - Cat  Meow!
     Weight: 4.5kg
     Height: 24cm
```

---

## ⚠️ Notes

* The loop in `main` only iterates over the first 5 elements:

```cpp
for (int i=0;i<5;i++)
```

even though the array contains 7 elements.

* Possible improvements:

  * Add a virtual destructor
  * Add user input
  * Build a full animal management system

---

## 🚀 Future Improvements

* Add a user menu system
* Allow dynamic data input
* Store data in files
* Create a GUI (Graphical User Interface)

