# R.A.Y.N -oop-chatbot
An AI-powered C++ chatbot using Object-Oriented Programming concepts, featuring a built-in MathBot assistant


# R.A.Y.N - AI-Powered OOP Chatbot

**R.A.Y.N (Responsive AI for Your Need)** is a console-based chatbot developed in **C++** using core **Object-Oriented Programming (OOP)** principles. It simulates human-like conversations and includes a built-in **MathBot** assistant for basic arithmetic operations.

---

## 🧠 Features

### 🔹 Chatbot (R.A.Y.N)
- Engages in human-like conversation
- Uses predefined responses with basic AI behavior
- Maintains and logs chat history
- File-based learning for future enhancements

### 🔹 MathBot Module
- Handles addition, subtraction, multiplication, division
- Error handling for invalid inputs (e.g., divide by zero)
- Simple and user-friendly math assistant

### 🔐 Admin Access
- Basic login system for admin/debug mode
- Access to chat logs and system reset

---

## 🧰 Technologies Used

- **Language:** C++
- **OOP Concepts:** Inheritance, Polymorphism, Encapsulation
- **Libraries:**
  - `<iostream>`, `<fstream>`, `<map>`, `<string>`, `<cstdlib>`, `<ctime>`, `<chrono>`, `<thread>`, `<cmath>`

---

## 📁 Project Structure

```plaintext
rayn-oop-chatbot/
│
├── main.cpp                # Main logic and program entry point
├── chatbot.h / chatbot.cpp # Base Chatbot class
├── mathbot.h / mathbot.cpp # MathBot class
├── responses.txt           # Predefined responses
├── chat_history.txt        # Logs of conversations
├── README.md               # Project documentation
└── .gitignore              # C++ ignore patterns
