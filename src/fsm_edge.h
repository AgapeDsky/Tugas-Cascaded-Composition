#ifndef FSM_EDGE_H
#define FSM_EDGE_H

#define ON 1
#define OFF 0

/**
 * @brief State type, listing STATE_0 - STATE_3 to show current object's state
 * 
 */
typedef enum States_Edge {
    STATE_0_Edge,
    STATE_1_Edge,
    STATE_2_Edge,
    STATE_3_Edge
} States_Edge;

/**
 * @brief fsm class
 * initialize an fsm with 0 count, 0 output, and at STATE_0
 * params are made public for simplicity
 * 
 */
class fsm_edge {
    private:
        int count = 0;
        States_Edge state = STATE_0_Edge;
        int count_threshold = 200;
    public:
        /**
         * @brief execute process on fsm based on input value
         * 
         * @param input integer input value
         * @return int fsm's output
         */
        bool process(bool input);

        /**
         * @brief Set the Count Threshold object
         * 
         * @param int val 
         */
        void setCountThreshold(int val);

        /**
         * @brief Get the State object
         * 
         * @return States_Edge 
         */
        States_Edge getState();
};

#endif