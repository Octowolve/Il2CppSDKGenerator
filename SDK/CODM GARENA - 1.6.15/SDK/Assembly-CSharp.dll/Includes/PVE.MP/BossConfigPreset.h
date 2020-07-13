#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class BossConfigPreset
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "BossConfigPreset"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& BossHealthPlayerSoundList() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = bool> T& DieDissolveEffect() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& DieDissolveEffectMaterials() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& behaviorConfig() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& behaviorEventConfig() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& animExportData() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitBehaviorIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllBehaviors() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPreloadAssets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T InitBehaviorIndex() {
		return ((T (*)(BossConfigPreset*))(Il2CppBase() + 0x49C609C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetAllBehaviors() {
		return ((T (*)(BossConfigPreset*))(Il2CppBase() + 0x49C6140))(this);
	}
	template <typename T = void> T GetPreloadAssets(uintptr_t assetsList) {
		return ((T (*)(BossConfigPreset*, uintptr_t))(Il2CppBase() + 0x49C5FA4))(this, assetsList);
	}
	template <typename T = void> T xLuaBaseProxy_GetPreloadAssets(uintptr_t P0) {
		return ((T (*)(BossConfigPreset*, uintptr_t))(Il2CppBase() + 0x49C6428))(this, P0);
	}

};

}
