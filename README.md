<div align="center">
🤖 R.A.Y.N
Responsive AI for Your Need
An AI-inspired C++ console chatbot built to demonstrate Object-Oriented Programming through interactive conversation, MathBot, file handling, and administrative features.

<br>




<br>
💬 Chat • 🧮 Calculate • 🔐 Manage • 💾 Store

</div>
🌟 About The Project
R.A.Y.N — Responsive AI for Your Need is a C++-based console chatbot developed with a strong focus on Object-Oriented Programming (OOP).

The project combines a conversational chatbot with a dedicated MathBot assistant, allowing users to interact with the system through a simple command-line interface.

Rather than being a production-grade AI model, R.A.Y.N is designed as an educational project demonstrating how C++ OOP principles can be used to create a structured, interactive application.

💡 The main goal: Turn fundamental C++ and OOP concepts into a practical, interactive project.

✨ Features
<table> <tr> <td width="50%">
🤖 R.A.Y.N Chatbot
Interactive conversations
Predefined responses
Basic AI-style behavior
User input processing
Conversation handling
Chat history support
</td> <td width="50%">
🧮 MathBot
Addition
Subtraction
Multiplication
Division
Input validation
Division-by-zero handling
Simple calculation interface
</td> </tr> <tr> <td width="50%">
🔐 Admin System
Basic login system
Administrative/debug access
Chat log access
System management
Reset functionality
</td> <td width="50%">
💾 File-Based System
External response files
Chat history storage
Persistent text data
Easy response modification
Expandable knowledge system
</td> </tr> </table>
🧠 Object-Oriented Programming
R.A.Y.N was specifically designed around fundamental OOP concepts.

                    ┌──────────────────────┐
                    │       R.A.Y.N        │
                    │    Chatbot System     │
                    └──────────┬───────────┘
                               │
             ┌─────────────────┼─────────────────┐
             │                 │                 │
             ▼                 ▼                 ▼
      ┌────────────┐    ┌────────────┐    ┌────────────┐
      │Encapsulation│    │ Inheritance│    │Polymorphism│
      └────────────┘    └────────────┘    └────────────┘
             │                 │                 │
             └─────────────────┼─────────────────┘
                               ▼
                    ┌──────────────────────┐
                    │    Interactive       │
                    │   C++ Application    │
                    └──────────────────────┘

🔒 Encapsulation
Data and functionality are organized inside classes, keeping related behavior together.

🧬 Inheritance
Specialized functionality can be derived from common chatbot structures.

🔄 Polymorphism
Different chatbot components can implement their own behavior while following a common structure.

🎯 Abstraction
Complex implementation details are separated from the user-facing interaction.

🧩 System Architecture
The overall project can be visualized as:

                         ┌─────────────────┐
                         │      USER       │
                         └────────┬────────┘
                                  │
                                  ▼
                    ┌─────────────────────────┐
                    │     R.A.Y.N SYSTEM      │
                    └────────────┬────────────┘
                                 │
               ┌─────────────────┼─────────────────┐
               │                 │                 │
               ▼                 ▼                 ▼
        ┌────────────┐    ┌────────────┐    ┌────────────┐
        │  Chatbot   │    │  MathBot   │    │   Admin    │
        │   Engine   │    │   Engine   │    │   System   │
        └─────┬──────┘    └─────┬──────┘    └─────┬──────┘
              │                 │                 │
              ▼                 ▼                 ▼
        ┌────────────┐    ┌────────────┐    ┌────────────┐
        │ responses  │    │ Arithmetic │    │ Chat Logs  │
        │    .txt    │    │ Operations │    │  / Reset   │
        └────────────┘    └────────────┘    └────────────┘

📂 Project Structure
rayn-oop-chatbot/
│
├── 📄 Opps Project - chatbot.cpp
│   └── Full-featured R.A.Y.N implementation
│
├── 📄 Opps Project - chatbot - Small.cpp
│   └── Simplified/basic implementation
│
├── 📄 Opps Project - chatbot.docx
│   └── Project documentation
│
├── 📄 responses.txt
│   └── Main chatbot response database
│
├── 📄 responses2.txt
│   └── Additional response data
│
├── 📄 README.md
│   └── Project documentation
│
└── 📄 LICENSE
    └── MIT License

🖥️ Two Versions
The repository contains two implementations of R.A.Y.N.

🟢 Basic Version
Opps Project - chatbot - Small.cpp

Designed for understanding the fundamental chatbot logic without unnecessary complexity.

Perfect for:

Beginners
Learning C++
Understanding basic OOP
Studying chatbot logic
🔵 Full Version
Opps Project - chatbot.cpp

The enhanced version includes additional functionality such as:

Improved console interface
Login functionality
Administrative features
Chat history
Additional system functionality
More polished user interaction
🚀 If you want to explore the complete project, start with the full version.

⚙️ Technologies
<div align="center">
Technology	Purpose
C++	Core programming language
OOP	Application architecture
File I/O	Response & history storage
STL	Data management
Console UI	User interaction

</div>
📚 C++ Libraries
#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <thread>
#include <cmath>

🚀 Getting Started
1️⃣ Clone the Repository
git clone https://github.com/abdulbasit-25/rayn-oop-chatbot.git

2️⃣ Enter the Project
cd rayn-oop-chatbot

3️⃣ Compile
Basic Version
g++ "Opps Project - chatbot - Small.cpp" -o rayn

Full Version
g++ "Opps Project - chatbot.cpp" -o rayn

4️⃣ Run
Windows
rayn.exe

Linux / macOS
./rayn

⚠️ Keep responses.txt and other required data files in the appropriate working directory so the program can access them.

💬 Example
╔════════════════════════════════════════════╗
║              🤖 R.A.Y.N                   ║
║       Responsive AI for Your Need         ║
╚════════════════════════════════════════════╝

You: Hello

R.A.Y.N: Hello! How can I help you today?

You: What can you do?

R.A.Y.N: I can chat with you and help with
         basic mathematical calculations.

You: Calculate 25 + 15

MathBot: 25 + 15 = 40

You: Goodbye

R.A.Y.N: Goodbye! Have a great day!

🧮 MathBot
MathBot is the mathematical component of the R.A.Y.N ecosystem.

Supported Operations
       ┌───────────────┐
       │    MathBot    │
       └───────┬───────┘
               │
       ┌───────┼────────┐
       │       │        │
       ▼       ▼        ▼
      +        -        ×
   Addition Subtraction Multiplication
               │
               ▼
              ÷
           Division

Example
Enter first number: 25
Enter operator: *
Enter second number: 4

MathBot: Result = 100

The system also includes basic error handling, such as protection against division by zero.

🔐 Admin Features
The enhanced version provides a basic administrative/debugging layer.

Depending on the version, administrative functionality may include:

┌──────────────────────────────┐
│        ADMIN PANEL           │
├──────────────────────────────┤
│ 🔑 Login                     │
│ 📜 View Chat History         │
│ 🧹 Reset System Data         │
│ 🛠️ Debug / Management       │
└──────────────────────────────┘

🔒 Security Note: The included login system is intended for demonstration and educational purposes only. It should not be used as a secure authentication system in a production environment.

💾 Data & File Handling
R.A.Y.N uses external text files to store and manage chatbot data.

This provides an easy way to modify chatbot responses without completely rewriting the C++ source code.

Example
User Input
    │
    ▼
┌──────────────┐
│ R.A.Y.N      │
│ Input Parser │
└──────┬───────┘
       │
       ▼
┌──────────────┐
│ responses.txt│
└──────┬───────┘
       │
       ▼
┌──────────────┐
│   Response   │
└──────┬───────┘
       │
       ▼
     User

🎓 What This Project Demonstrates
R.A.Y.N brings several C++ concepts together into one project:

✅ Classes & Objects
✅ Encapsulation
✅ Inheritance
✅ Polymorphism
✅ Abstraction
✅ File Handling
✅ Standard Template Library
✅ Console Programming
✅ Input Validation
✅ Error Handling
✅ Modular Programming
✅ Basic System Design
🔮 Roadmap
The project can be expanded significantly in future versions.

🤖 AI & Conversation
 Context-aware conversations
 Improved natural-language processing
 Dynamic response generation
 User-specific conversations
 Conversation memory
🧮 MathBot
 Powers & roots
 Percentage calculations
 Trigonometry
 Logarithms
 Scientific calculator mode
🎨 User Experience
 Better terminal animations
 Colored terminal interface
 Command system
 Custom themes
 Improved menus
🗄️ Backend
 Database support
 Better persistent storage
 Configuration system
 Structured data files
 Automated testing
🌐 Future AI Integration
 External AI API integration
 Natural-language model support
 Voice input/output
 Web-based interface
⚠️ Project Status
<div align="center">
🟡 Educational / Development Project
R.A.Y.N is currently an educational C++ project focused on demonstrating OOP concepts and application development.

</div>
It is not intended to compete with modern generative AI systems.

🤝 Contributing
Contributions, suggestions, and improvements are welcome.

Contribution Workflow
# Fork the repository

# Create a branch
git checkout -b feature/my-feature

# Make your changes

# Commit
git commit -m "Add my feature"

# Push
git push origin feature/my-feature

# Open a Pull Request

Ideas for improvements are especially welcome around:

OOP architecture
UI/UX
chatbot logic
MathBot functionality
error handling
file management
testing
📜 License
This project is licensed under the MIT License.

See the LICENSE file for complete license information.

👨‍💻 Author
<div align="center">
Abdul Basit
C++ Developer • OOP Enthusiast • Software Engineering Student

📧 abdulbasit.alpha25@gmail.com

🌐 Portfolio

https://abdulbasit-archer.vercel.app/

🐙 GitHub

https://github.com/abdulbasit-25

</div>
⭐ Support The Project
If R.A.Y.N helped you learn something about C++ or Object-Oriented Programming:

⭐ Star the repository

🍴 Fork the project

🐛 Report bugs

💡 Suggest features

🤝 Contribute

<div align="center">
🤖 R.A.Y.N
Responsive AI for Your Need
Built with C++ ❤️

Object-Oriented Programming • Console AI • MathBot • File Handling

<br>
Thank you for visiting the project!

</div>
