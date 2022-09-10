/* 
 * File:   interrupt.h
 * Author: Ludo
 *
 * Created on 18 jul 2018, 02:44
 */

#include "interrupt.h"
#include <pic12lf1571.h>

/*** INTERRUPT functions ***/

/* ENABLE GLOBAL AND PERIPHERAL INTERRUPTS.
 * @param:  None.
 * @return: None.
 */
void INTERRUPT_init(void) {
    INTCON |= 0xC0; // GIE='1' and PEIE='1'.
}
