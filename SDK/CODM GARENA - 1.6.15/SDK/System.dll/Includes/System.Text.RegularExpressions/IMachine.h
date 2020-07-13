#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text.RegularExpressions {

class IMachine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Text.RegularExpressions", "IMachine"));
	}


	template <typename T = uintptr_t> T Scan(uintptr_t regex, Il2CppString* text, int32_t start, int32_t end) {
		return ((T (*)(IMachine*, uintptr_t, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x0))(this, regex, text, start, end);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T Split(uintptr_t regex, Il2CppString* input, int32_t count, int32_t startat) {
		return ((T (*)(IMachine*, uintptr_t, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x0))(this, regex, input, count, startat);
	}
	template <typename T = Il2CppString*> T Replace(uintptr_t regex, Il2CppString* input, Il2CppString* replacement, int32_t count, int32_t startat) {
		return ((T (*)(IMachine*, uintptr_t, Il2CppString*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x0))(this, regex, input, replacement, count, startat);
	}

};

}
