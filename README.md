Flight Path Simulator (2D) - Mini Project
=========================================

Author     : Alia Sadiq
Project    : 2D Flight Path Simulator
Language   : C++ (Modular, Multi-file)
IDE        : Visual Studio Code (VS Code)
Level      : Mini Project

------------------------------------------------------------
📌 Project Description
------------------------------------------------------------

This is a console-based 2D Flight Path Simulator written in C++.

It simulates the movement of a plane in 2D space based on:
- Initial position (X, Y)
- Speed
- Angle (Direction in degrees)
- Time steps

The program calculates the aircraft's new position at each step using basic physics and trigonometry and stops when the plane reaches the target position (within 1.0 unit) or when max steps are reached.

------------------------------------------------------------
💻 How to Compile and Run (VS Code Setup)
------------------------------------------------------------

1. Open folder in VS Code:
   File > Open Folder > Select "FlightSimulator2D"

2. Press `Ctrl + Shift + B` to build the project.
   (VS Code uses `.vscode/tasks.json` to compile all .cpp files)

3. Run the compiled executable:
   - Linux/macOS: `./flight_sim`
   - Windows: `./flight_sim.exe`

------------------------------------------------------------
📂 Folder Structure
------------------------------------------------------------

FlightSimulator2D/
├── main.cpp             → Main simulation logic
├── Point2D.h / .cpp     → 2D Point class (encapsulates coordinates & math)
├── Vehicle2D.h / .cpp   → Base class (vehicle movement, virtual update)
├── Plane2D.h / .cpp     → Derived class with overridden update
├── sample_output.txt    → Sample run output
├── README.txt           → This documentation
└── .vscode/tasks.json   → VS Code build task configuration

------------------------------------------------------------
🎯 Concepts & OOP Principles Used
------------------------------------------------------------

✅ Encapsulation   → Each class handles its own data & logic  
✅ Abstraction     → Internal math hidden behind methods like update(), distanceTo()  
✅ Inheritance     → `Plane2D` inherits from `Vehicle2D`  
✅ Polymorphism    → Virtual methods allow flexibility (`Vehicle2D*` pointer)

------------------------------------------------------------
🧪 Sample Input
------------------------------------------------------------

Initial position: 0 0  
Speed: 5  
Angle: 45  
Time Step: 1  
Number of Steps: 10  
Target Position: 30 30

Full output can be found in `sample_output.txt`

------------------------------------------------------------
✨ Future Improvements
------------------------------------------------------------

- Add other vehicles: Car2D, Drone2D using the same base class  
- Add interactive controls: turn left/right mid-flight  
- Visualize flight path in ASCII or with SFML  
- Save simulation log to a file  
- Simulate wind/turbulence (random noise)  
- Add fuel, crash conditions, or live compass

------------------------------------------------------------
✅ Summary
------------------------------------------------------------

This project is structured using best practices for C++:
- Multi-file modular design
- Object-oriented programming with clear inheritance
- Easy to compile, understand, and extend

It is ready for demonstration and submission for NASTP or similar technical evaluations.
