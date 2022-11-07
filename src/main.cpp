#include <Arduino.h>
#include "fsm_edge.h"
#include "fsm_led.h"

#define LED_1 2
#define LED_2 3
#define LED_3 8
#define LED_4 9

#define BUT_1 6
#define BUT_2 7

#define PERIOD 100      // number of cycles before ISR

fsm_led fsmled;
fsm_edge fsmedge1, fsmedge2;

volatile States_LED state = STATE_1_LED;

void setup() {
  // Initialize FSM
  fsmedge1.setCountThreshold(200);
  fsmedge2.setCountThreshold(200);

  // Initialize GPIO for LEDs and Buttons
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(LED_3, OUTPUT);
  pinMode(LED_4, OUTPUT);

  pinMode(BUT_1, INPUT);
  pinMode(BUT_2, INPUT);

  // Initialize Timer Interurpt for lED's and Edge detector's FSM
  cli();
  TCCR1A = 0;
  TCCR1B = 0; TCCR1B |= 0b010;  // pres 8
  TIMSK1 = 0; TIMSK1 |= 0b1;    // enable ovf int
  TCNT1 = 65535 - PERIOD;
  sei();

}

void loop() {}

ISR (TIMER1_OVF_vect) {
  // Reset counter
  TCNT1 = 65535 - PERIOD;

  // Read buttons and feed it into the fsm
  state = fsmled.computeState(fsmedge1.process(digitalRead(BUT_1)), fsmedge2.process(digitalRead(BUT_2)));

  // Turn on/off LEDs
  digitalWrite(LED_1, state == STATE_1_LED);
  digitalWrite(LED_2, state == STATE_2_LED);
  digitalWrite(LED_3, state == STATE_3_LED);
  digitalWrite(LED_4, state == STATE_4_LED);

}