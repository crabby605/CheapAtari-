#include <iostream.h>
#include <cstdlib.h> 

using namespace std;


void runFlappyBird();
void runSnake();
void runSpaceInvaders();
void exitProgram();

int main() {
    int choice;

    do {
        
        cout<< "Menu:\n";
        cout<< "1. Run Flappy Bird\n";
        cout<< "2. Run Snake\n";
        cout<< "3. Run Space Invaders\n";
        cout<< "4. Exit\n";
        cout<< "Enter your choice: ";
        cin>> choice;

        switch (choice) {
            case 1:
                runFlappyBird();
                break;
            case 2:
                runSnake();
                break;
            case 3:
                runSpaceInvaders();
                break;
            case 4:
                exitProgram();
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}

void runFlappyBird() {
    cout << "Running Flappy Bird...\n";

    system("flappy_bird.exe");
}

void runSnake() {
    cout << "Running Snake...\n";
  
    system("snake.exe");
}

void runSpaceInvaders() {
    cout << "Running Space Invaders...\n";
   
    system("space_invaders.exe");
}

void exitProgram() {
    cout << "Exiting the program...\n";
}
