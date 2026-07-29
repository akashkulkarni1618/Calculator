# 7-Function C++ Console Calculator

A command-line interface (CLI) calculator built in C++ capable of performing basic arithmetic, power functions, and precise division properties. This is my very first programming project!

## 🚀 Features
The application features a console menu providing seven core operations:
1. **Addition** (`+`) - Sum of two numbers.
2. **Subtraction** (`-`) - Difference between two numbers.
3. **Multiplication** (`*`) - Product of two numbers.
4. **Division** (`/`) - Quotient of two numbers.
5. **Exponentiation** (`^`) - Raises a base number to a power.
6. **Modulus of a number** - Computes the absolute value magnitude.
7. **Remainder** (`%`) - The leftover integer value after dividing one number by another.

## 🛠️ How to Build and Run

### Running in Visual Studio (Recommended)
Since this project uses the new Visual Studio solution format (`.slnx`), follow these steps to open it locally:
1. Clone or download this repository to your computer.
2. Double-click the `ConsoleApplication1.slnx` file to open the project directly in **Visual Studio**.
3. Press **Ctrl + F5** (or click the 'Start Without Debugging' button) to build and run the console window.

### Manual Terminal Compilation (Using GCC/g++)
If you prefer using a standalone compiler via the terminal, navigate to your source directory and run:
```bash
# Compile the main C++ file
g++ ConsoleApplication1.cpp -o Calculator

# Run the compiled executable
./Calculator
```

## 🧠 Core Learnings
* Handling standard text-based menus with `switch-case` loops.
* Capturing input streams with safe data formatting (`std::cin`).
* Incorporating basic error handling, such as blocking division by zero.

