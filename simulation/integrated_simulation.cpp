#include <stdio.h>
#include "../src/fsm_edge.h"
#include "../src/fsm_led.h"

int main() {
    // Initialize FSMs
    fsm_edge fsmedge1;  fsmedge1.setCountThreshold(1);
    fsm_edge fsmedge2;  fsmedge2.setCountThreshold(1);
    fsm_led fsmled;

    // Initialize output and input variables
    int but_1 = 0, but_2 = 0;
    int out_1_edge = 0, out_2_edge = 0;
    States_LED out_led = STATE_1_LED;

    printf("At the beginning of every routine, input but_1 and but_2 logics\n");
    printf("After that, the process in every fsm will be showed\n");
    printf("The process repeats itself\n\n");
    printf("======================Simulation Starts======================\n");

    // Simulation begins
    while (1) {
        // Get button 1 input
        scanf("%d", &but_1);
        out_1_edge = fsmedge1.process(but_1);

        // Get button 2 input
        scanf("%d", &but_2);
        out_2_edge = fsmedge2.process(but_2);

        // Compute LED state based on button 1 and button 2
        out_led = fsmled.computeState(out_1_edge, out_2_edge);

        // Print current condition
        printf("Current Inputs: %d, %d\t Edge Detector States: %d, %d\t Edge Detector Outputs: %d, %d\t LED Output: %d\n", 
        but_1, but_2, fsmedge1.getState(), fsmedge2.getState(), out_1_edge, out_2_edge, (int)out_led);
    }

    return 0;
}