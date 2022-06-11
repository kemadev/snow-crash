//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) Retargetable Decompiler <info@retdec.com>
//

#include <stdint.h>
#include <stdlib.h>
#include <unistd.h>

// ------------------------ Functions -------------------------

// From module:   /home/user/level07/level07.c
// Address range: 0x8048514 - 0x80485a1
// Line range:    6 - 24
int main() {
    int32_t v1 = getegid(); // 0x804851d
    int32_t v2 = geteuid(); // 0x8048526
    setresgid(v1, v1, v1);
    setresuid(v2, v2, v2);
    char * buffer = NULL; // bp-28, 0x8048567
    asprintf(&buffer, "/bin/echo %s ", getenv("LOGNAME"));
    return system(buffer);
}

// --------------- Dynamically Linked Functions ---------------

// int asprintf(char ** restrict ptr, const char * restrict fmt, ...);
// __gid_t getegid(void);
// char * getenv(const char * name);
// __uid_t geteuid(void);
// int setresgid(__gid_t rgid, __gid_t egid, __gid_t sgid);
// int setresuid(__uid_t ruid, __uid_t euid, __uid_t suid);
// int system(const char * command);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (4.5.x)
// Detected language: C
// Detected functions: 1