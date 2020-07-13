#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponShakeModeAndDataTypeInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponShakeModeAndDataTypeInfo"));
	}

	template <typename T = uintptr_t> T& ModeType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& ModeDataType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& Tag() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& ignoreAiming() {
		return *(T*)((uintptr_t)this + 0x14);
	}


};

}
