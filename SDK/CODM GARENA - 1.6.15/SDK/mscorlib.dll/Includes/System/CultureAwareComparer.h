#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class CultureAwareComparer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "CultureAwareComparer"));
	}

	template <typename T = bool> T& _ignoreCase() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _compareInfo() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T Compare(Il2CppString* x, Il2CppString* y) {
		return ((T (*)(CultureAwareComparer*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x36521F4))(this, x, y);
	}
	template <typename T = bool> T Equals(Il2CppString* x, Il2CppString* y) {
		return ((T (*)(CultureAwareComparer*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x365223C))(this, x, y);
	}
	template <typename T = int32_t> T GetHashCode(Il2CppString* s) {
		return ((T (*)(CultureAwareComparer*, Il2CppString*))(Il2CppBase() + 0x365225C))(this, s);
	}

};

}
