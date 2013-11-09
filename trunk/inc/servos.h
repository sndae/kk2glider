/*********************************************************************
 * servos.h
 ********************************************************************/

//***********************************************************
//* Externals
//***********************************************************

extern void output_servo_ppm(void);
extern uint16_t ServoOut[MAX_OUTPUTS];

extern void bind_master(void);
extern void bind_slave(void);

