# OOPS Codes Repository

## Introduction
This repository contains Object-Oriented Programming (OOP) codes written in C++. It serves as a collection of fundamental and advanced OOP concepts, including classes, objects, inheritance, polymorphism, encapsulation, and abstraction.

## Features
- Well-structured OOP programs in C++
- Covers basic and advanced OOP principles
- Practical examples with comments for better understanding
- Useful for students and beginners learning OOP concepts

## Getting Started
### Prerequisites
- C++ Compiler (e.g., GCC, Clang, or MSVC)
- Code Editor (VS Code, CodeBlocks, or any preferred IDE)

### Installation
1. Clone this repository:
   ```bash
   git clone https://github.com/DigarSingh/Oops-Codes.git
   ```
2. Navigate to the repository folder:
   ```bash
   cd Oops-Codes
   ```
3. Open any `.cpp` file and compile it using:
   ```bash
   g++ filename.cpp -o output
   ```
   Run the program:
   ```bash
   ./output
   ```

## Example Code
```cpp
#include <iostream>
using namespace std;

class Example {
private:
    int number;
public:
    Example(int num) { number = num; }
    void show() { cout << "Number: " << number << endl; }
};

int main() {
    Example obj(10);
    obj.show();
    return 0;
}
```

## Contributing
Feel free to contribute by adding more OOP-related programs, optimizing existing ones, or improving documentation. Follow these steps:
1. Fork the repository
2. Create a new branch (`git checkout -b feature-branch`)
3. Commit your changes (`git commit -m "Added new OOP example"`)
4. Push to the branch (`git push origin feature-branch`)
5. Open a Pull Request

## License
This project is open-source and available under the [MIT License](LICENSE).

---

Happy Coding! 🚀

