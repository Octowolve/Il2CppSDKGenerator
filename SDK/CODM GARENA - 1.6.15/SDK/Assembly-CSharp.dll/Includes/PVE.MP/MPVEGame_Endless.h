#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class MPVEGameEndless
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "MPVEGame_Endless"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadingSceneUnloadDelayTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = float> T LoadingSceneUnloadDelayTime() {
		return ((T (*)(MPVEGameEndless*))(Il2CppBase() + 0x4628600))(this);
	}
	template <typename T = float> T xLuaBaseProxy_LoadingSceneUnloadDelayTime() {
		return ((T (*)(MPVEGameEndless*))(Il2CppBase() + 0x46286A4))(this);
	}

};

}
