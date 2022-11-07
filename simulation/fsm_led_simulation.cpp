#include <stdio.h>
#include "../src/fsm_led.h"

int main() {
    fsm_led fsm;
    bool a = 0, b = 0;
    States_LED state = STATE_1_LED;

    printf("Current state: %d\n", fsm.getState());
    a = 0; b = 0; state = fsm.computeState(a, b);
    printf("Current input: %d, %d\t Current state: %d\n", a, b, state);
    a = 1; b = 1; state = fsm.computeState(a, b);
    printf("Current input: %d, %d\t Current state: %d\n", a, b, state);
    a = 1; b = 0; state = fsm.computeState(a, b);
    printf("Current input: %d, %d\t Current state: %d\n", a, b, state);
    a = 0; b = 1; state = fsm.computeState(a, b);
    printf("Current input: %d, %d\t Current state: %d\n", a, b, state);
    a = 0; b = 1; state = fsm.computeState(a, b);
    printf("Current input: %d, %d\t Current state: %d\n", a, b, state);
    a = 0; b = 0; state = fsm.computeState(a, b);
    printf("Current input: %d, %d\t Current state: %d\n", a, b, state);
    a = 1; b = 1; state = fsm.computeState(a, b);
    printf("Current input: %d, %d\t Current state: %d\n", a, b, state);
    a = 1; b = 0; state = fsm.computeState(a, b);
    printf("Current input: %d, %d\t Current state: %d\n", a, b, state);
    a = 0; b = 1; state = fsm.computeState(a, b);
    printf("Current input: %d, %d\t Current state: %d\n", a, b, state);
    a = 0; b = 1; state = fsm.computeState(a, b);
    printf("Current input: %d, %d\t Current state: %d\n", a, b, state);
    a = 0; b = 0; state = fsm.computeState(a, b);
    printf("Current input: %d, %d\t Current state: %d\n", a, b, state);
    a = 1; b = 1; state = fsm.computeState(a, b);
    printf("Current input: %d, %d\t Current state: %d\n", a, b, state);
    a = 1; b = 0; state = fsm.computeState(a, b);
    printf("Current input: %d, %d\t Current state: %d\n", a, b, state);
    a = 0; b = 1; state = fsm.computeState(a, b);
    printf("Current input: %d, %d\t Current state: %d\n", a, b, state);
    a = 0; b = 1; state = fsm.computeState(a, b);
    printf("Current input: %d, %d\t Current state: %d\n", a, b, state);
    a = 0; b = 0; state = fsm.computeState(a, b);
    printf("Current input: %d, %d\t Current state: %d\n", a, b, state);
    a = 1; b = 1; state = fsm.computeState(a, b);
    printf("Current input: %d, %d\t Current state: %d\n", a, b, state);
    a = 1; b = 0; state = fsm.computeState(a, b);
    printf("Current input: %d, %d\t Current state: %d\n", a, b, state);
    a = 0; b = 1; state = fsm.computeState(a, b);
    printf("Current input: %d, %d\t Current state: %d\n", a, b, state);
}