#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class DefaultEventAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "DefaultEventAttribute"));
	}

	template <typename T = Il2CppString*> T& eventName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& Default() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T Equals(uintptr_t o) {
		return ((T (*)(DefaultEventAttribute*, uintptr_t))(Il2CppBase() + 0x4CA8318))(this, o);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(DefaultEventAttribute*))(Il2CppBase() + 0x4CA8404))(this);
	}

};

}
