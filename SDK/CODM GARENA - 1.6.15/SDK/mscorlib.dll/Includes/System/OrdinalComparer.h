#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class OrdinalComparer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "OrdinalComparer"));
	}

	template <typename T = bool> T& _ignoreCase() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = int32_t> T Compare(Il2CppString* x, Il2CppString* y) {
		return ((T (*)(OrdinalComparer*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x455E378))(this, x, y);
	}
	template <typename T = bool> T Equals(Il2CppString* x, Il2CppString* y) {
		return ((T (*)(OrdinalComparer*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x455E4A8))(this, x, y);
	}
	template <typename T = int32_t> T GetHashCode(Il2CppString* s) {
		return ((T (*)(OrdinalComparer*, Il2CppString*))(Il2CppBase() + 0x455E58C))(this, s);
	}

};

}
