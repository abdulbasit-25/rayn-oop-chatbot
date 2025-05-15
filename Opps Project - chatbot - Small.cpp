#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <algorithm>
using namespace std;
class Chatbot { // Base Chatbot Class
protected:
    map<string, string> responses;
    string chatHistoryFile = "chat_history.txt";
public:
    Chatbot() { loadResponses(); }
    virtual string getResponse(const string& userInput) {
        return responses.count(userInput) > 0 ? responses[userInput] : getDefaultResponse();}
    void saveChatHistory(const string& user, const string& botResponse) {
        ofstream file(chatHistoryFile, ios::app);
        file << "User: " << user << "\nBot: " << botResponse << "\n\n";
        file.close();}
    void loadResponses() {
        ifstream file("responses.txt");
        string key, value;
        while (file >> key) {
            getline(file, value);
            responses[key] = value;}
        file.close();}
    string getDefaultResponse() {
        return "I'm not sure how to respond to that.";}};
class RYANbot : public Chatbot { // R.A.Y.N Chatbot (Derived Class)
public:
    string getResponse(const string& userInput) override {
        return Chatbot::getResponse(userInput);}};
int main() {
    while (true) {
using namespace std;
    cout << "+--------------------------------------+\n|   Welcome,       I am R.A.Y.N.       |\n|--------------------------------------|\n|   Responsive AI for Your Needs       |\n|   -----------------------------      |\n|              AI Mimicker             |\n|--------------------------------------|\n|     Type 'exit' anytime to leave.    |\n+--------------------------------------+\n\nHello, User! I am R.A.Y.N, your friendly AI assistant ---> Basic.\nI can answer your questions, tell jokes, and even have casual conversations.\nType 'exit' to quit.\n\n";
        RYANbot chatbot;
        string userInput;
        cout << "Start chatting! (type 'exit' to quit):\n";
        while (true) {
            cout << "\nYou: ";
            getline(cin, userInput);
			replace(userInput.begin(), userInput.end(), ' ', '_');
			transform(userInput.begin(), userInput.end(), userInput.begin(), ::tolower);
            if (userInput == "exit" || userInput == "stop" || userInput == "quit") {break;}
            string botResponse = chatbot.getResponse(userInput);
            cout << "Bot: " << botResponse << "\n";
            chatbot.saveChatHistory(userInput, botResponse);}
        cout << "Ending chatbot...\n";
        break; }
    return 0;}

