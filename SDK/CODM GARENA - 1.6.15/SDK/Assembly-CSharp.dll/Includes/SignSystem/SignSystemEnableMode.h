#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace SignSystem {

class SignSystemEnableMode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SignSystem", "SignSystemEnableMode"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& SignSystemEnableNone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& SignSystemEnableBR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& SignSystemEnableMP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
