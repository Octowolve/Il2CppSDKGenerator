#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BRThrowWeaponAnimDefine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BRThrowWeaponAnimDefine"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& ThrowWeaponFireNone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ThrowWeaponFireStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ThrowWeaponFireIdle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ThrowWeaponFireEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
