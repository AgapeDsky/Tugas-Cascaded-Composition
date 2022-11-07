#include <stdio.h>
#include "../src/fsm_edge.h"

int main() {
    // Initialize FSM and input output variables
    fsm_edge fsm;
    fsm.setCountThreshold(3);
    bool input = 0; bool output = 0;

    // Simulation starts. Computing inputs and assess the outputs
    printf("Current state: %d\n", fsm.getState());
    input = 0; output = fsm.process(input);
    printf("Current input: %d\t Current state: %d\t Current output: %d\n", input, fsm.getState(), output);
    input = 0; output = fsm.process(input);
    printf("Current input: %d\t Current state: %d\t Current output: %d\n", input, fsm.getState(), output);
    input = 1; output = fsm.process(input);
    printf("Current input: %d\t Current state: %d\t Current output: %d\n", input, fsm.getState(), output);
    input = 1; output = fsm.process(input);
    printf("Current input: %d\t Current state: %d\t Current output: %d\n", input, fsm.getState(), output);
    input = 1; output = fsm.process(input);
    printf("Current input: %d\t Current state: %d\t Current output: %d\n", input, fsm.getState(), output);
    input = 1; output = fsm.process(input);
    printf("Current input: %d\t Current state: %d\t Current output: %d\n", input, fsm.getState(), output);
    input = 1; output = fsm.process(input);
    printf("Current input: %d\t Current state: %d\t Current output: %d\n", input, fsm.getState(), output);
    input = 1; output = fsm.process(input);
    printf("Current input: %d\t Current state: %d\t Current output: %d\n", input, fsm.getState(), output);
    input = 1; output = fsm.process(input);
    printf("Current input: %d\t Current state: %d\t Current output: %d\n", input, fsm.getState(), output);
    input = 0; output = fsm.process(input);
    printf("Current input: %d\t Current state: %d\t Current output: %d\n", input, fsm.getState(), output);
    input = 0; output = fsm.process(input);
    printf("Current input: %d\t Current state: %d\t Current output: %d\n", input, fsm.getState(), output);
    input = 0; output = fsm.process(input);
    printf("Current input: %d\t Current state: %d\t Current output: %d\n", input, fsm.getState(), output);
    input = 0; output = fsm.process(input);
    printf("Current input: %d\t Current state: %d\t Current output: %d\n", input, fsm.getState(), output);
    input = 0; fsm.process(input);
    printf("===================================================\n");
    printf("Current input: %d\t Current state: %d\t Current output: %d\n", input, fsm.getState(), output);
    input = 1; output = fsm.process(input);
    printf("Current input: %d\t Current state: %d\t Current output: %d\n", input, fsm.getState(), output);
    input = 0; output = fsm.process(input);
    printf("Current input: %d\t Current state: %d\t Current output: %d\n", input, fsm.getState(), output);
    input = 0; output = fsm.process(input);
    printf("Current input: %d\t Current state: %d\t Current output: %d\n", input, fsm.getState(), output);
    input = 0; output = fsm.process(input);
    printf("Current input: %d\t Current state: %d\t Current output: %d\n", input, fsm.getState(), output);
    input = 0; output = fsm.process(input);
    printf("Current input: %d\t Current state: %d\t Current output: %d\n", input, fsm.getState(), output);
    input = 1; output = fsm.process(input);
    printf("Current input: %d\t Current state: %d\t Current output: %d\n", input, fsm.getState(), output);
    input = 1; output = fsm.process(input);
    printf("Current input: %d\t Current state: %d\t Current output: %d\n", input, fsm.getState(), output);
    input = 1; output = fsm.process(input);
    printf("Current input: %d\t Current state: %d\t Current output: %d\n", input, fsm.getState(), output);
    input = 1; output = fsm.process(input);
    printf("Current input: %d\t Current state: %d\t Current output: %d\n", input, fsm.getState(), output);
    input = 1; fsm.process(input);
}