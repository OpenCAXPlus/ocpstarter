#include "app.h"
#include <stdarg.h>
#include <stdio.h>

// a function that wraps the printf and prepend INFO: before the message
void info(const char* fmt, ...)
{
    va_list args;
    va_start(args, fmt);
    printf("INFO: ");
    ocp_info(fmt, args);
    va_end(args);
}

// similar to info, but prepend DEBUG: before the message
void debug(const char* fmt, ...)
{
    va_list args;
    va_start(args, fmt);
    printf("DEBUG: ");
    ocp_debug(fmt, args);
    va_end(args);
}

ocpInfoFunc  ocp_info  = info;
ocpDebugFunc ocp_debug = debug;