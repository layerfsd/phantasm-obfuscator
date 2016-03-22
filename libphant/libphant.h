/*
	Code markers for using the static library
	refer to https://github.com/chvrn/phantasm-obfuscator
*/
#pragma once
#pragma comment(lib, "libphant.lib")

extern "C" {
	void __stdcall BeginProtect(unsigned int);
	void __stdcall EndProtect(unsigned int);
}

//BeginProtect(0xb1f12057);
// 68 57 20 f1 b1
#define BeginProtect __asm {\
	__asm push 0xb1f12057\
	__asm call BeginProtect\
}
//EndProtect(0x5720f1b1);
// 68 b1 f1 20 57
#define EndProtect __asm {\
	__asm push 0x5720f1b1\
	__asm call EndProtect\
}