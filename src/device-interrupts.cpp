/*
 * This file is part of the µOS++ distribution.
 *   (https://github.com/micro-os-plus)
 * Copyright (c) 2017 Liviu Ionescu.
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom
 * the Software is furnished to do so, subject to the following
 * conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */

#include <micro-os-plus/board.h>

#include <stddef.h>
#include <stdbool.h>

// ----------------------------------------------------------------------------

extern "C"
{
  void
  riscv_interrupt_device_handle_unused (void);
}

// ----------------------------------------------------------------------------

// To provide the desired functionality, redefine any of these
// functions in the application.

#if defined (SIFIVE_FREEDOM_E310)

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_wdogcmp (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_rtccmp (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_uart0 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_uart1 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_qspi0 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_qspi1 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_qspi2 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_gpio0 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_gpio1 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_gpio2 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_gpio3 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_gpio4 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_gpio5 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_gpio6 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_gpio7 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_gpio8 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_gpio9 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_gpio10 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_gpio11 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_gpio12 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_gpio13 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_gpio14 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_gpio15 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_gpio16 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_gpio17 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_gpio18 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_gpio19 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_gpio20 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_gpio21 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_gpio22 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_gpio23 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_gpio24 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_gpio25 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_gpio26 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_gpio27 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_gpio28 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_gpio29 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_gpio30 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_gpio31 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_pwm0cmp0 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_pwm0cmp1 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_pwm0cmp2 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_pwm0cmp3 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_pwm1cmp0 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_pwm1cmp1 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_pwm1cmp2 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_pwm1cmp3 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_pwm2cmp0 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_pwm2cmp1 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_pwm2cmp2 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_pwm2cmp3 (void);

/*
 * Array of pointers to interrupt handlers. See Table 3.6 from Volume II.
 */
riscv_trap_handler_ptr_t __attribute__ ((section(".interrupts_global_array")))
riscv_interrupts_global_handlers[] =
  { //
    riscv_interrupt_device_handle_unused, /* 0 */
    riscv_interrupt_global_handle_wdogcmp, /* 1 */
    riscv_interrupt_global_handle_rtccmp, /* 2 */
    riscv_interrupt_global_handle_uart0, /* 3 */
    riscv_interrupt_global_handle_uart1, /* 4 */
    riscv_interrupt_global_handle_qspi0, /* 5 */
    riscv_interrupt_global_handle_qspi1, /* 6 */
    riscv_interrupt_global_handle_qspi2, /* 7 */
    riscv_interrupt_global_handle_gpio0, /* 8 */
    riscv_interrupt_global_handle_gpio1, /* 9 */
    riscv_interrupt_global_handle_gpio2, /* 10 */
    riscv_interrupt_global_handle_gpio3, /* 11 */
    riscv_interrupt_global_handle_gpio4, /* 12 */
    riscv_interrupt_global_handle_gpio5, /* 13 */
    riscv_interrupt_global_handle_gpio6, /* 14 */
    riscv_interrupt_global_handle_gpio7, /* 15 */
    riscv_interrupt_global_handle_gpio8, /* 16 */
    riscv_interrupt_global_handle_gpio9, /* 17 */
    riscv_interrupt_global_handle_gpio10, /* 18 */
    riscv_interrupt_global_handle_gpio11, /* 19 */
    riscv_interrupt_global_handle_gpio12, /* 20 */
    riscv_interrupt_global_handle_gpio13, /* 21 */
    riscv_interrupt_global_handle_gpio14, /* 22 */
    riscv_interrupt_global_handle_gpio15, /* 23 */
    riscv_interrupt_global_handle_gpio16, /* 24 */
    riscv_interrupt_global_handle_gpio17, /* 25 */
    riscv_interrupt_global_handle_gpio18, /* 26 */
    riscv_interrupt_global_handle_gpio19, /* 27 */
    riscv_interrupt_global_handle_gpio20, /* 28 */
    riscv_interrupt_global_handle_gpio21, /* 29 */
    riscv_interrupt_global_handle_gpio22, /* 30 */
    riscv_interrupt_global_handle_gpio23, /* 31 */
    riscv_interrupt_global_handle_gpio24, /* 32 */
    riscv_interrupt_global_handle_gpio25, /* 33 */
    riscv_interrupt_global_handle_gpio26, /* 34 */
    riscv_interrupt_global_handle_gpio27, /* 35 */
    riscv_interrupt_global_handle_gpio28, /* 36 */
    riscv_interrupt_global_handle_gpio29, /* 37 */
    riscv_interrupt_global_handle_gpio30, /* 38 */
    riscv_interrupt_global_handle_gpio31, /* 39 */
    riscv_interrupt_global_handle_pwm0cmp0, /* 40 */
    riscv_interrupt_global_handle_pwm0cmp1, /* 41 */
    riscv_interrupt_global_handle_pwm0cmp2, /* 42 */
    riscv_interrupt_global_handle_pwm0cmp3, /* 43 */
    riscv_interrupt_global_handle_pwm1cmp0, /* 44 */
    riscv_interrupt_global_handle_pwm1cmp1, /* 45 */
    riscv_interrupt_global_handle_pwm1cmp2, /* 46 */
    riscv_interrupt_global_handle_pwm1cmp3, /* 47 */
    riscv_interrupt_global_handle_pwm2cmp0, /* 48 */
    riscv_interrupt_global_handle_pwm2cmp1, /* 49 */
    riscv_interrupt_global_handle_pwm2cmp2, /* 50 */
    riscv_interrupt_global_handle_pwm2cmp3 /* 51 */
  };

#elif defined (SIFIVE_COREPLEX_31) || defined (SIFIVE_COREPLEX_51)

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_uart0 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_external (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_spi0 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_gpio0 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_gpio1 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_gpio2 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_gpio3 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_gpio4 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_gpio5 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_gpio6 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_gpio7 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_gpio8 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_gpio9 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_gpio10 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_gpio11 (void);

void __attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_gpio12 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_gpio13 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_gpio14 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_gpio15 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_pwm0cmp0 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_pwm0cmp1 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_pwm0cmp2 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_global_handle_pwm0cmp3 (void);

/*
 * Array of pointers to interrupt handlers. See Table 3.6 from Volume II.
 */
riscv_trap_handler_ptr_t __attribute__ ((section(".interrupts_global_array")))
riscv_interrupts_global_handlers[] =
  { //
    riscv_interrupt_device_handle_unused, /* 0 */
    riscv_interrupt_global_handle_uart0, /* 1 */
    riscv_interrupt_global_handle_external, /* 2 */
    riscv_interrupt_device_handle_unused, /* 3 */
    riscv_interrupt_device_handle_unused, /* 4 */
    riscv_interrupt_device_handle_unused, /* 5 */
    riscv_interrupt_global_handle_spi0, /* 6 */
    riscv_interrupt_global_handle_gpio0, /* 7 */
    riscv_interrupt_global_handle_gpio1, /* 8 */
    riscv_interrupt_global_handle_gpio2, /* 9 */
    riscv_interrupt_global_handle_gpio3, /* 10 */
    riscv_interrupt_global_handle_gpio4, /* 11 */
    riscv_interrupt_global_handle_gpio5, /* 12 */
    riscv_interrupt_global_handle_gpio6, /* 13 */
    riscv_interrupt_global_handle_gpio7, /* 14 */
    riscv_interrupt_global_handle_gpio8, /* 15 */
    riscv_interrupt_global_handle_gpio9, /* 16 */
    riscv_interrupt_global_handle_gpio10, /* 17 */
    riscv_interrupt_global_handle_gpio11, /* 18 */
    riscv_interrupt_global_handle_gpio12, /* 19 */
    riscv_interrupt_global_handle_gpio13, /* 20 */
    riscv_interrupt_global_handle_gpio14, /* 21 */
    riscv_interrupt_global_handle_gpio15, /* 22 */
    riscv_interrupt_global_handle_pwm0cmp0, /* 23 */
    riscv_interrupt_global_handle_pwm0cmp1, /* 24 */
    riscv_interrupt_global_handle_pwm0cmp2, /* 25 */
    riscv_interrupt_global_handle_pwm0cmp3 /* 26 */
  };

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_local_handle_device0 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_local_handle_device1 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_local_handle_device2 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_local_handle_device3 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_local_handle_device4 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_local_handle_device5 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_local_handle_device6 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_local_handle_device7 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_local_handle_device8 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_local_handle_device9 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_local_handle_device10 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_local_handle_device11 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_local_handle_device12 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_local_handle_device13 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_local_handle_device14 (void);

void
__attribute__ ((weak, alias ("riscv_interrupt_device_handle_unused")))
riscv_interrupt_local_handle_device15 (void);

/*
 * Array of pointers to interrupt handlers. See Table 3.6 from Volume II.
 */
riscv_trap_handler_ptr_t __attribute__ ((section(".interrupts_local_device_array")))
riscv_interrupts_local_device_handlers[] =
  { //
    riscv_interrupt_local_handle_device0, /* 0 */
    riscv_interrupt_local_handle_device1, /* 1 */
    riscv_interrupt_local_handle_device2, /* 2 */
    riscv_interrupt_local_handle_device3, /* 3 */
    riscv_interrupt_local_handle_device4, /* 4 */
    riscv_interrupt_local_handle_device5, /* 5 */
    riscv_interrupt_local_handle_device6, /* 6 */
    riscv_interrupt_local_handle_device7, /* 7 */
    riscv_interrupt_local_handle_device8, /* 8 */
    riscv_interrupt_local_handle_device9, /* 9 */
    riscv_interrupt_local_handle_device10, /* 10 */
    riscv_interrupt_local_handle_device11, /* 11 */
    riscv_interrupt_local_handle_device12, /* 12 */
    riscv_interrupt_local_handle_device13, /* 13 */
    riscv_interrupt_local_handle_device14, /* 14 */
    riscv_interrupt_local_handle_device15 /* 15 */
  };

#endif /* DEVICE */

static_assert(
    sizeof(riscv_interrupts_global_handlers)/sizeof(riscv_interrupts_global_handlers[0]) == RISCV_INTERRUPTS_GLOBAL_ARRAY_SIZE,
    "riscv_interrupts_global_handlers[] size must match RISCV_INTERRUPTS_GLOBAL_ARRAY_SIZE");

#if defined(RISCV_INTERRUPTS_LOCAL_DEVICE_ARRAY_SIZE) && RISCV_INTERRUPTS_LOCAL_DEVICE_ARRAY_SIZE != 0

static_assert(
    sizeof(riscv_interrupts_local_device_handlers)/sizeof(riscv_interrupts_local_device_handlers[0]) == RISCV_INTERRUPTS_LOCAL_DEVICE_ARRAY_SIZE,
    "riscv_interrupts_local_device_handlers[] size must match RISCV_INTERRUPTS_LOCAL_DEVICE_ARRAY_SIZE");

#endif /* RISCV_INTERRUPTS_LOCAL_DEVICE_ARRAY_SIZE */

void
__attribute__ ((section(".traps_handlers"),weak))
riscv_interrupt_device_handle_unused (void)
{
#if defined(DEBUG)
  riscv::arch::ebreak ();
#endif /* defined(DEBUG) */

  while (true)
    {
      riscv::arch::nop ();
    }
}

// ----------------------------------------------------------------------------
