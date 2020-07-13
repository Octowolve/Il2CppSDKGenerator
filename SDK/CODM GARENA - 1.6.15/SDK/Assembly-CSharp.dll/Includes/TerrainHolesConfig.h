#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TerrainHolesConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TerrainHolesConfig"));
	}

	template <typename T = int32_t> T& maskResolution() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_Terrain() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& landscape() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& maskTexture() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& modifyMaskTexture() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& patchesHoleFlagTexture() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& patchesHoleFlag() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& patchesHoleFlagInEdit() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& holeCollisonPatchPositionHashSet() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppString*> T get_maskPath() {
		return ((T (*)(TerrainHolesConfig*))(Il2CppBase() + 0x4656BE8))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(TerrainHolesConfig*))(Il2CppBase() + 0x4656CD0))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(TerrainHolesConfig*))(Il2CppBase() + 0x4656D68))(this);
	}

};

}
