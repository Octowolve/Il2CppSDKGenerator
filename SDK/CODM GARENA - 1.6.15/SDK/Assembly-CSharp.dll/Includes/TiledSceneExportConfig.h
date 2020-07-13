#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TiledSceneExportConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TiledSceneExportConfig"));
	}

	template <typename T = bool> T& exportVirtualScene() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& unloadSkySceneHeight() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& unloadSkySceneHeightLow() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& hismInstanceDataValueRange() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& vehicleOption() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& layerInfos() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Validate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppString*> T Validate() {
		return ((T (*)(TiledSceneExportConfig*))(Il2CppBase() + 0x4659A68))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_Validate() {
		return ((T (*)(TiledSceneExportConfig*))(Il2CppBase() + 0x4659B08))(this);
	}

};

}
