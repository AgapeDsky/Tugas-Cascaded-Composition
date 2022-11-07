#ifndef FSM_LED_H
#define FSM_LED_H

#include <stdint.h>

enum States_LED {
    STATE_1_LED = 1,
    STATE_2_LED = 2,
    STATE_3_LED = 3,
    STATE_4_LED = 4
};

class fsm_led {
    private:
        States_LED state = STATE_1_LED;
        uint8_t condition = 0;
    public:
        States_LED computeState (uint8_t input_a, uint8_t input_b);
        States_LED getState();
        uint8_t getCondition();
};

#endif