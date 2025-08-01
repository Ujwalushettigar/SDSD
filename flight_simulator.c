#include <stdio.h>
#include <stdlib.h>
#include <conio.h> // For _getch() on Windows
#include <windows.h> // For Sleep()

int main() {
    float altitude = 1000; // meters
    float speed = 200;     // km/h
    float fuel = 100;      // %
    char command;

    printf("=== 2D Flight Simulator ===\n");
    printf("Controls: W = Up, S = Down, A = Slow, D = Speed Up, Q = Quit\n");

    while (1) {
        printf("\nAltitude: %.2f m | Speed: %.2f km/h | Fuel: %.2f%%\n", altitude, speed, fuel);

        if (fuel <= 0) {
            printf("💥 You ran out of fuel and crashed!\n");
            break;
        }

        if (altitude <= 0) {
            if (speed < 150)
                printf("🛬 You landed safely!\n");
            else
                printf("💥 You crashed while landing too fast!\n");
            break;
        }

        if (_kbhit()) {
            command = _getch();
            if (command == 'w') {
                altitude += 50;
                fuel -= 2;
            } else if (command == 's') {
                altitude -= 50;
                fuel -= 1;
            } else if (command == 'a') {
                speed -= 20;
                fuel -= 1;
            } else if (command == 'd') {
                speed += 20;
                fuel -= 2;
            } else if (command == 'q') {
                printf("Exiting simulator...\n");
                break;
            }
        }

        // Gravity pulls you down slowly
        altitude -= 10;
        fuel -= 0.5;

        Sleep(500); // wait for 0.5 sec
    }

    return 0;
}
