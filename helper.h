#include "nrf_log.h"
#include "bsp.h"
#include "nrf_log.h"
#include "nrf_log_ctrl.h"
#include "nrf_log_default_backends.h"

#include "ble_advertising.h"
#include "bsp_btn_ble.h"

#define DEAD_BEEF                       0xDEADBEEF                                  /**< Value used as error code on stack dump, can be used to identify stack location on stack unwind. */

void timers_init(void);
void log_init(void);