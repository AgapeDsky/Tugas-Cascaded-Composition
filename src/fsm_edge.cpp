#include "fsm_edge.h"

bool fsm_edge :: process(bool input) {
    /**
     * Condition on STATE_0
     */
    if (state == STATE_0_Edge) {
        if (input == OFF) {
            // do nothing
        }
        else {
            // if input is On, flip the output and change to STATE_1_Edge
            state = STATE_1_Edge;
            count = 0;
            return ON;
        }
    }

    /**
     * Condition on STATE_1_Edge
     */
    else if (state == STATE_1_Edge) {
        if (count < count_threshold) {
            // do the counting until the threshold
            count++;
        }
        else if (input == OFF) {
            // if input is Off, change to STATE_3_Edge and reset count
            state = STATE_3_Edge;
            count = 0;
        }
        else {
            // if input is On, change to STATE_2_Edge to wait for Off input, and reset count
            state = STATE_2_Edge;
            count = 0;
        }
    }

    /**
     * Condition for STATE_2_Edge
     */
    else if (state == STATE_2_Edge) {
        if (input == OFF) {
            // if input is Off, immediately go to STATE_3_Edge
            count = 0;
            state = STATE_3_Edge;
        }
        else {
            // do nothing, wait of input Off
        }
    }

    /**
     * Condition for STATE_3_Edge
     */
    else if (state == STATE_3_Edge) {
        if (count < count_threshold) {
            // wait for count to reach defined threshold
            count++;
        }
        else if (input == OFF) {
            // if input is Off, wait for input On on STATE_0_Edge, reset count value
            count = 0;
            state = STATE_0_Edge;
        }
        else {
            // if input is On, system receiving another input, so flip the output and change state to STATE_1_Edge
            count = 0;
            state = STATE_1_Edge;
            return ON;
        }
    }

    // return output value
    return OFF;
}

void fsm_edge :: setCountThreshold(int val) {
    count_threshold = val;
}

States_Edge fsm_edge :: getState() {
    return state;
}