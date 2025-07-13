#include <iostream>
#include <chrono>
#include <thread>
#include "Plane2D.h"
using namespace std;

int main() {
    double x, y, speed, angle, timestep;
    int steps;
    double tx, ty;

    cout << "Enter initial position (x y): ";
    cin >> x >> y;
    cout << "Enter speed (units/sec): ";
    cin >> speed;
    cout << "Enter angle (degree): ";
    cin >> angle;
    cout << "Enter time step (sec): ";
    cin >> timestep;
    cout << "Enter number of steps: ";
    cin >> steps;
    cout << "Enter target position (x y): ";
    cin >> tx >> ty;

    Vehicle2D* vehicle = new Plane2D(Point2D(x, y), speed, angle);
    Point2D target(tx, ty);

    for (int i = 0; i < steps; ++i) {
        vehicle->update(timestep);
        Point2D pos = vehicle->getPosition();
        double distance = pos.distanceTo(target);

        cout << "\nStep: " << i + 1 << endl;
        pos.display();
        cout << "Distance to target: " << distance << endl;

        if (distance < 1.0) {
            cout << "\nTarget reached successfully!\n";
            break;
        }

        this_thread::sleep_for(chrono::milliseconds(500));
    }

    delete vehicle;
    cout << "\nSimulation ended.\n";
    return 0;
}
