#include <iostream>
#include <string>
#include <limits>
using namespace std;

class SecurityEventStack {
private:
    static const int CAPACITY = 5;
    string events[CAPACITY];
    int top;

public:
    SecurityEventStack() : top(-1) {}

    bool isEmpty() const { return top == -1; }
    bool isFull() const { return top == CAPACITY - 1; }
    int count() const { return top + 1; }

    void push(const string& event) {
        if (isFull()) {
            cout << "Stack Overflow: Event history is full (capacity 5).\n";
            return;
        }
        events[++top] = event;
        cout << "Security event recorded successfully.\n";
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow: No security event to remove.\n";
            return;
        }
        cout << "Removed latest event: " << events[top--] << "\n";
    }

    void peek() const {
        if (isEmpty()) {
            cout << "No security events available.\n";
            return;
        }
        cout << "Latest security event: " << events[top] << "\n";
    }

    void display() const {
        if (isEmpty()) {
            cout << "Event history is empty.\n";
            return;
        }
        cout << "\nSecurity Event History (newest first):\n";
        for (int i = top; i >= 0; --i) {
            cout << (top - i + 1) << ". " << events[i];
            if (i == top) cout << "  <-- TOP";
            cout << "\n";
        }
    }

    void clear() {
        if (isEmpty()) {
            cout << "Event history is already empty.\n";
            return;
        }
        top = -1;
        cout << "Demo event history cleared.\n";
    }
};

int main() {
    SecurityEventStack history;
    int choice;
    string event;

    cout << "BLAST 02 - Stack in Cybersecurity\n";
    cout << "Educational demonstration only: not a persistent audit log.\n";

    while (true) {
        cout << "\n========================================\n"
             << "  CYBERSECURITY SECURITY EVENT ANALYZER\n"
             << "========================================\n"
             << "1. Add New Security Event\n"
             << "2. View Latest Security Event\n"
             << "3. Remove Latest Security Event\n"
             << "4. Display All Security Events\n"
             << "5. Check Stack Status\n"
             << "6. Display Total Events\n"
             << "7. Clear Event History\n"
             << "8. Exit\n"
             << "Enter your choice: ";

        if (!(cin >> choice)) {
            if (cin.eof()) {
                cout << "\nInput ended. Exiting.\n";
                break;
            }
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a number from 1 to 8.\n";
            continue;
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (choice) {
            case 1:
                if (history.isFull()) {
                    cout << "Stack Overflow: Event history is full (capacity 5).\n";
                    break;
                }
                cout << "Enter security event description: ";
                if (!getline(cin, event)) {
                    cout << "\nInput ended. Exiting.\n";
                    return 0;
                }
                if (event.find_first_not_of(" \t\r\n") == string::npos) {
                    cout << "Event description cannot be empty.\n";
                } else {
                    history.push(event);
                }
                break;
            case 2: history.peek(); break;
            case 3: history.pop(); break;
            case 4: history.display(); break;
            case 5:
                cout << (history.isEmpty() ? "Stack is empty.\n" : "Stack is not empty.\n");
                cout << (history.isFull() ? "Stack is full.\n" : "Stack has available space.\n");
                break;
            case 6: cout << "Total security events: " << history.count() << "\n"; break;
            case 7: {
                cout << "Clear all demo events? (y/n): ";
                string answer;
                if (!getline(cin, answer)) return 0;
                if (answer == "y" || answer == "Y") history.clear();
                else cout << "Clear cancelled.\n";
                break;
            }
            case 8: cout << "Thank you. Exiting Security Event Analyzer.\n"; return 0;
            default: cout << "Invalid choice. Select a number from 1 to 8.\n";
        }
    }
    return 0;
}
