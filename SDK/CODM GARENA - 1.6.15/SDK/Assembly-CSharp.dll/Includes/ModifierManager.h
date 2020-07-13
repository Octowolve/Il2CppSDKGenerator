#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ModifierManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ModifierManager"));
	}

	template <typename T = uintptr_t> T& m_ModifierPreset() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFogSkyBoxMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T get_ModifierPreset() {
		return ((T (*)(ModifierManager*))(Il2CppBase() + 0x330CB6C))(this);
	}
	template <typename T = uintptr_t> T GetFogSkyBoxMaterial(int32_t MapId) {
		return ((T (*)(ModifierManager*, int32_t))(Il2CppBase() + 0x330CC90))(this, MapId);
	}

};

}
