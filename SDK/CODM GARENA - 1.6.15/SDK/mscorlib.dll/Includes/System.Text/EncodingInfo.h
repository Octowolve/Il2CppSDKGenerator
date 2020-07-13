#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text {

class EncodingInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Text", "EncodingInfo"));
	}

	template <typename T = int32_t> T& codepage() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& encoding() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T Equals(uintptr_t value) {
		return ((T (*)(EncodingInfo*, uintptr_t))(Il2CppBase() + 0x42A06B4))(this, value);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(EncodingInfo*))(Il2CppBase() + 0x42A0760))(this);
	}

};

}
