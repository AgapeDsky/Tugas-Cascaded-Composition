# Tugas-Cascaded-Composition

Contents : Library, Simulation, Arduino Code

## How to Run

### Simulation

- Go to ./simulation/

- Compile the file using the command : 

gcc -o destined_execution_file.exe fsm_led_simulation.cpp ../src/fsm_led.cpp

or

gcc -o destined_execution_file.exe fsm_edge_simulation.cpp ../src/fsm_edge.cpp

or

gcc -o destined_execution_file.exe integrated_simulation.cpp ../src/fsm_edge.cpp ../src/fsm_led.cpp

- Run the execution file

./destined_execution_file.exe

### Arduino

- Upload using PlatformIO to any Arduino boards
