#include "xparameters.h"
#include "xil_printf.h"

/*
 * Minimal standalone entry point.
 *
 * init_platform() / cleanup_platform() are NOT available here: they live in
 * platform.c, which ships with the hello_world template rather than with
 * empty_application, and the BSP does not export them. Copy platform.c and
 * platform.h into this folder if you want the cache and UART setup they do.
 */
int main(void)
{
    xil_printf("firmware up\r\n");

    while (1) {
        /* application code */
    }

    return 0;
}
