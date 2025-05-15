#include <iostream>
#include <fstream>
#include <map>
#include<algorithm>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <chrono>
#include <thread>

using namespace std;

// Function to simulate a typing effect
void typeEffect(const string& text, int speed = 50) {
    for (char c : text) {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(speed)); // Simulate typing
    }
    cout << endl;
}

// Function to clear the screen (works in most terminals)
void clearScreen() {
    cout << "\033[2J\033[1;1H"; // ANSI Escape code to clear terminal
}

// Function to simulate a loading animation
void loadingEffect(const string& message, int dots = 3) {
    cout << message;
    for (int i = 0; i < dots; i++) {
        cout << "." << flush;
        this_thread::sleep_for(chrono::milliseconds(500)); // Delay
    }
    cout << endl;
}





class Chatbot{ // Base Chatbot Class
protected:
    map<string, string> responses;
    string chatHistoryFile = "chat_history.txt";
public:
    Chatbot() { loadResponses(); }
    virtual string getResponse(const string& userInput) {
        return responses.count(userInput) > 0 ? responses[userInput] : getRandomResponse();
    }
    void saveChatHistory(const string& user, const string& botResponse) {
        ofstream file(chatHistoryFile, ios::app);
        file << "User: " << user << "\nBot: " << botResponse << "\n\n";
        file.close();
    }
    
    void loadResponses() {
    ifstream file1("responses.txt");
    ifstream file2("responses2.txt");  // Second file as backup
    string key, value;

    // Load from the first file
    while (file1 >> key) {
        getline(file1, value);
        responses[key] = value;
    }
    file1.close();

    // Load from the second file only if the key doesn't exist in the first file
    while (file2 >> key) {
        if (responses.find(key) == responses.end()) {  // Check if key isn't already loaded
            getline(file2, value);
            responses[key] = value;
        }
    }
    file2.close();
}

    string getRandomResponse() {
        int randomResponse = rand() % 15 + 1;
        switch (randomResponse) {
            case 1: return "I don't understand that.";
            case 2: return "Could you please clarify?";
            case 3: return "I'm not sure what you mean, can you explain?";
            case 4: return "Sorry, I didn't quite catch that.";
            case 5: return "Could you provide more details?";
            case 6: return "I'm not familiar with that, could you explain it further?";
            case 7: return "That's unclear to me, can you rephrase?";
            case 8: return "I don't quite understand, could you give more context?";
            case 9: return "Sorry, I don't have an answer for that right now.";
            case 10: return "Can you clarify what you mean by that?";
            case 11: return "I'm having trouble understanding, could you elaborate?";
            case 12: return "I'm not sure I follow, could you explain it again?";
            case 13: return "That's not something I can respond to at the moment.";
            case 14: return "I need a little more information to help with that.";
            case 15: return "I'm not entirely sure what you're asking. Could you explain more?";
            default: return "I don't know how to respond.";
        }
    }
};
class RYANbot : public Chatbot // R.A.Y.N Chatbot (Derived Class)
{
public:
    string getResponse(const string& userInput) override {
        return Chatbot::getResponse(userInput);
    }
};
class MathBot {
public:
    void start() {
        int choice;
        double num1, num2;
        string operation;
        while (true) { 
            cout << "\nWhat function would you like to use?\n";
            cout << "1. Addition (+)\n";
            cout << "2. Subtraction (-)\n";
            cout << "3. Multiplication (*)\n";
            cout << "4. Division (/)\n";
            cout << "5. Square Root (sqrt)\n";
            cout << "6. Return to main menu\n"; 
            cout << "Please enter the function number (1-6): ";
            cin >> choice;
            cout << endl;
            if (choice == 6) {
                cout << "Returning to main menu...\n";
                break;
            }
            switch (choice) {
                case 1:
                    operation = "+";
                    break;
                case 2:
                    operation = "-";
                    break;
                case 3:
                    operation = "*";
                    break;
                case 4:
                    operation = "/";
                    break;
                case 5:
                    operation = "sqrt";
                    break;
                default:
                    cout << "Invalid choice. Please try again.\n";
                    continue;
            }
            while (true) {
                if (operation == "sqrt") {
                    cout << "Please enter a value: ";
                    cin >> num1;
                    if (num1 < 0) {
                        cout << "Square root of a negative number is not real!\n";
                    } else {
                        cout << "The square root of " << num1 << " is: " << sqrt(num1) << endl;
                    }
                } else {
                    cout << "First value: ";
                    cin >> num1;
                    cout << "\nSecond value: ";
                    cin >> num2;
                    if (operation == "+") {
                        cout << "The result of " << num1 << " + " << num2 << " is: " << num1 + num2 << endl;
                    } else if (operation == "-") {
                        cout << "The result of " << num1 << " - " << num2 << " is: " << num1 - num2 << endl;
                    } else if (operation == "*") {
                        cout << "The result of " << num1 << " * " << num2 << " is: " << num1 * num2 << endl;
                    } else if (operation == "/") {
                        if (num2 != 0) {
                            cout << "The result of " << num1 << " / " << num2 << " is: " << num1 / num2 << endl;
                        } else {
                            cout << "Cannot divide by zero!" << endl;
                        }
                    }
                }
                char continueChoice;
                cout << "\nDo you want to perform another operation with the same function? (y/n): ";
                cin >> continueChoice;
                if (continueChoice != 'y' && continueChoice != 'Y') {
                    break;
					}
            }
        }
    }
};
int main() {
    srand(static_cast<unsigned int>(time(0)));
    string Username, password;
    bool isLoggedIn = false;
    while (!isLoggedIn) {
        typeEffect("\033[1;34m\nPlease Login\n\033[0m", 50);
    cout << "\033[1;32mEnter Username :   \033[0m";
    cin >> Username;
    cout << "\033[1;32mEnter password: \033[0m";
    cin >> password;
    if (Username == "Alpha" && password == "BetaSquad") {
        cout << "\033[1;32mLogin successful. \nWELCOME!!!!\033[0m\n\n";
        isLoggedIn = true;
    } else {
        cout << "\033[0;31mInvalid Username or password. Access denied\033[0m\n";
    }
    }
while (isLoggedIn) {
            clearScreen();
    loadingEffect("\033[1;33m[SYSTEM]\033[0m Initializing R.A.Y.N Core");
    loadingEffect("\033[1;36m[SYSTEM]\033[0m Loading AI Modules");
    loadingEffect("\033[1;32m[SYSTEM]\033[0m Establishing Neural Connections");
    loadingEffect("\033[1;32mLogin successful. \nWELCOME!!!!\033[0m\n\n");

    cout << "\033[1;32m====================================================\033[0m\n";
    cout << "\033[1;36m||               WELCOME TO R.A.Y.N              ||\033[0m\n";
    cout << "\033[1;32m====================================================\033[0m\n";
    cout << "\033[1;34m||          Responsive AI for Your Needs         ||\033[0m\n";
    cout << "\033[1;34m||          Built using Object-Oriented C++      ||\033[0m\n";
    cout << "\033[1;32m====================================================\033[0m\n\n";

    typeEffect("\033[1;33m[SYSTEM]\033[0m R.A.Y.N AI Core Successfully Activated.", 40);
    typeEffect("\033[1;33m[SYSTEM]\033[0m Processing Neural Adaptation...", 40);
    typeEffect("\033[1;33m[SYSTEM]\033[0m Ready to Assist You!", 40);

    typeEffect("\n\033[1;36mR.A.Y.N:\033[0m", 50);
    typeEffect("\nHello, User!!!", 40);
    typeEffect("I am R.A.Y.N, your friendly AI assistant.", 40);
    typeEffect("I can answer your questions, tell jokes, and even have casual conversations.", 40);
    typeEffect("Try asking me something like \033[1;36m'What is AI?'\033[0m or \033[1;36m'Tell me a joke.'\033[0m", 40);
	    
    typeEffect("\nLet's start chatting! ??", 40);
 
 typeEffect("\n\033[1;37m\033[7m[STATUS:]\033[0m System Ready!", 40); 
        int botChoice;
        do {
            typeEffect("\nR.A.Y.N bot to use", 50);
    		typeEffect("1. Chatbot", 50);
    		typeEffect("2. Mathbot", 50);
    		typeEffect("3. End Program", 50);
    		cout << "Enter your choice (1-3): ";
            cin >> botChoice;

            if (botChoice == 1) {
                RYANbot chatbot;
                string userInput;
                typeEffect("Start chatting! (type 'exit' to quit and return to the main menu)", 50);
                cin.ignore(); // To clear the input buffer

                while (true) {
                    cout << "\nYou: ";
                    getline(cin, userInput);
                    while (!userInput.empty() && userInput.back() == ' ') {userInput.pop_back();}
                    replace(userInput.begin(), userInput.end(), ' ', '_');
					transform(userInput.begin(), userInput.end(), userInput.begin(), ::tolower);
                    if (userInput == "exit" || userInput == "stop" || userInput == "quit") {
                        break;
                    }

                    string botResponse = chatbot.getResponse(userInput);
                    cout << "Bot: " << botResponse << "\n";
                    chatbot.saveChatHistory(userInput, botResponse);
                }
            } else if (botChoice == 2) {
                MathBot mathbot;
                mathbot.start();
            } else if (botChoice != 3) {
                cout << "Invalid choice. Please enter '1', '2', or '3'.\n";
            }

        } while (botChoice != 3);

        cout << "Ending program...\n";
        break;
    }

    return 0;
}

