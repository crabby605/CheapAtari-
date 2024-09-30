#include <iostream.h>
#include <cstdlib.h> 

using namespace std;


void runBreakout();
void runSnake();
void runSpaceInvaders();
void runBreakout();
void exitProgram();
int main() {
    int choice;

    do {
        
        cout<< "Menu:\n";
        cout<< "1. Run Breakout\n";
        cout<< "2. Run Snake\n";
        cout<< "3. Run Space Invaders\n";
        cout<< "4. Run Pong\n";
        cout<< "5. Exit\n";
        cout<< "Enter your choice: ";
        cin>> choice;

        switch (choice) {
            case 1:
                runBreakout();
                break;
            case 2:
                runSnake();
                break;
            case 3:
                runSpaceInvaders();
                break;
            case 4:
                runPong();
                break;
             case 5:
                exitProgram();
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}

void runBreakout() {
    cout << "Running Breakout...\n";

    system("Breakout.exe");
}

void runSnake() {
    cout << "Running Snake...\n";
  
    system("snake.exe");
}

void runSpaceInvaders() {
    cout << "Running Space Invaders...\n";
   
    system("space_invaders.exe");
}

void runPong() {
cout << "Running Pong...|n";

system("Pong.exe");
}

void exitProgram() {
    cout << "Exiting the program...\n";
}
