#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Loading {

class EDolphinVersionCfgType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Loading", "EDolphinVersionCfgType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& APP_UPDATE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& RES_UPDATE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& RES_EXTRACT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
