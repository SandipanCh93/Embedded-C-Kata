# Embedded-C-Kata
*✅ 30-Day Embedded C Kata Plan
(Each kata takes ~30–60 min. Use a local compiler or an embedded dev board for realism.)

Week 1: Pointers & Memory Safety (Foundations)
Goal: Solidify pointer arithmetic, const correctness, and prevent UB.

Day 1: Write a function that reverses an array in place using pointers only.

Day 2: Implement a memcpy()-like function without using <string.h>. Ensure no buffer overrun.

Day 3: Write a function that converts a uint8_t* buffer into a uint32_t safely (consider alignment).

Day 4: Create a safe string length function (strlen) without UB.

Day 5: Write a function to swap two variables using pointers—no temporary variable allowed.

Day 6: Implement a structure containing a pointer to another structure and practice safe dereferencing.

Day 7: Review and add MISRA compliance to all your code so far.

Week 2: Bitwise Operations & Register Access
Goal: Practice MCU-style register work and macros.

Day 8: Implement SET_BIT, CLEAR_BIT, and TOGGLE_BIT macros, ensuring MISRA compliance.

Day 9: Write a function that checks if a bit is set without using branch statements.

Day 10: Simulate an MCU register block as a struct and perform read/write.

Day 11: Write a function that sets multiple bits based on a mask.

Day 12: Create a macro for writing a register field (e.g., bits [7:4]) and test it.

Day 13: Implement a function that packs 4 bytes into a uint32_t and vice versa.

Day 14: Code review: Make sure all macros/functions avoid UB and follow MISRA.

Week 3: Drivers & Peripheral Simulation
Goal: Write safe, modular code for UART/SPI/I2C without hardware.

Day 15: Implement a circular buffer (push/pop) for UART RX queue.

Day 16: Write a UART transmit function using a mock register structure.

Day 17: Add interrupt simulation for UART TX complete flag. Use volatile correctly.

Day 18: Implement a minimal SPI driver that supports full-duplex transfer.

Day 19: Simulate an I2C write transaction (start condition → write → stop).

Day 20: Add error handling (timeout or NACK) for your I2C function.

Day 21: Integrate UART + SPI drivers into a simple test app (simulate data flow).

Week 4: Advanced Topics (RTOS, Safety, MISRA)
Goal: Real-time thinking, safety-critical coding, and compliance.

Day 22: Create two FreeRTOS tasks that communicate using a queue (simulate producer/consumer).

Day 23: Add a mutex for shared resource access (simulate logging).

Day 24: Write a watchdog timer mock driver and simulate triggering/resetting.

Day 25: Implement a diagnostic memory check (pattern fill + verify).

Day 26: Write a function that computes CRC32 for a given buffer.

Day 27: Design an API for a Bootloader command handler (commands: read, write, erase).

Day 28: Add MISRA compliance review + static analysis using a tool like cppcheck.

Day 29: Simulate an ISO 26262 safety mechanism: dual read-back verification of registers.

Day 30: Final Project – Build a mock “embedded framework” integrating UART, SPI, RTOS tasks, and watchdog simulation.*