#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class EModuleOpenFlag
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "EModuleOpenFlag"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& eModuleOpenFlag_LightType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eModuleOpenFlag_SkyPlatform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eModuleOpenFlag_GameLightType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eModuleOpenFlag_InterfereFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
