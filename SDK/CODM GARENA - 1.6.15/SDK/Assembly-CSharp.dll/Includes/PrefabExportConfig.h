#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PrefabExportConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PrefabExportConfig"));
	}

	template <typename T = uint32_t> T& overrideSceneLayerMask() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& isExportToServer() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& usePrefabLODSetting() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = uintptr_t> T& dontOptimaizeNode() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
