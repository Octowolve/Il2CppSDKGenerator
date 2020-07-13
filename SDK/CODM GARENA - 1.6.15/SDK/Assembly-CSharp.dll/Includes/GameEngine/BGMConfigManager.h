#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class BGMConfigManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "BGMConfigManager"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& mModeBGMConfig() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mPlayTypeConfig() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mMapBGMConfig() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBGMConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T GetBGMConfig(uintptr_t pModeType, uintptr_t pMapPlayType, Il2CppString* strMapName) {
		return ((T (*)(BGMConfigManager*, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x3611844))(this, pModeType, pMapPlayType, strMapName);
	}

};

}