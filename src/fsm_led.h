#ifndef FSM_LED_H
#define FSM_LED_H

#include <stdint.h>

/**
 * @brief Variable to show LED States
 * Listing LED States from 1, 2, 3, to 4 
 */
enum States_LED {
    STATE_1_LED = 1,
    STATE_2_LED = 2,
    STATE_3_LED = 3,
    STATE_4_LED = 4
};

/**
 * @brief LED's FSM class 
 */
class fsm_led {
    private:
        States_LED state = STATE_1_LED;
        uint8_t condition = 0;
    public:
        /**
         * @brief compute LED state based on input values
         * 
         * @param input_a 
         * @param input_b 
         * @return States_LED 
         */
        States_LED computeState (uint8_t input_a, uint8_t input_b);
        /**
         * @brief Get the State object
         * 
         * @return States_LED 
         */
        States_LED getState();
        /**
         * @brief Get the Condition object
         * 
         * @return uint8_t 
         */
        uint8_t getCondition();
};

#endif