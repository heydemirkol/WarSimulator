/*
============================================================================

      DESCRIPTION:
         This utility enables ANSI escape code support in the Windows console
         via virtual terminal processing, allowing colors, screen manipulation,
         and other display features.

      C++ STANDARD:
         Any (Standard C++)

      TARGET OS:
         Windows Only

      TARGET ENVIRONMENT:
         Terminal and console environments

      LAST MODIFIED:
         June 27, 2026

============================================================================
*/

#include "Ansi.h"

#ifdef _WIN32
#include <windows.h>
#endif

// enables ANSI escape sequence processing in Windows console
void enableANSI() {
#ifdef _WIN32
     HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);

     DWORD mode = 0;
      
      // retrieve current console mode
      if (GetConsoleMode(hOut, &mode)) {
          // enable virtual terminal processing (ANSI support)
          SetConsoleMode(hOut, mode | ENABLE_VIRTUAL_TERMINAL_PROCESSING);
      }
#endif
}