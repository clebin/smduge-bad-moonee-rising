#pragma output CRT_ORG_CODE = 0x5DCF
#pragma output CRT_ORG_DATA = 0
#pragma output CRT_ORG_BSS = 0
#pragma output REGISTER_SP = 0xD000

#pragma output CRT_ENABLE_CLOSE = 0          // don't bother closing files on exit
#pragma output CRT_ENABLE_EIDI = 0x1        // disable interrupts at start
#pragma output CRT_ON_EXIT = 0              // jump to 0 on exit
#pragma output CLIB_STDIO_HEAP_SIZE = 0     // no stdio heap (no files)
#pragma output CLIB_EXIT_STACK_SIZE = 0     // no atexit() functions

// create a memory block allocator with one queue
#pragma output CLIB_BALLOC_TABLE_SIZE = 1
#pragma output CRT_STACK_SIZE = 128
