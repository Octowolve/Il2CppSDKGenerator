#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text.RegularExpressions {

class Group
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Text.RegularExpressions", "Group"));
	}

	template <typename T = uintptr_t> static T& Fail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& success() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& captures() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T get_Captures() {
		return ((T (*)(Group*))(Il2CppBase() + 0x4AD3C18))(this);
	}
	template <typename T = bool> T get_Success() {
		return ((T (*)(Group*))(Il2CppBase() + 0x4AD3C20))(this);
	}

};

}
