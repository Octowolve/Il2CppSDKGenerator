#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PerkMachineSignboard
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PerkMachineSignboard"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& PerkConfigs() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& perkMachineVisible() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& lastCheckVisibleTime() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& visibleAlphaFactor() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& iconSprite() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& dirSprite() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPerkID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPerkMachineVisibility() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T SetPerkID(int32_t perkID) {
		return ((T (*)(PerkMachineSignboard*, int32_t))(Il2CppBase() + 0x3F0743C))(this, perkID);
	}
	template <typename T = void> T SetPerkMachineVisibility(bool visible) {
		return ((T (*)(PerkMachineSignboard*, bool))(Il2CppBase() + 0x3F07754))(this, visible);
	}
	template <typename T = void> T Update() {
		return ((T (*)(PerkMachineSignboard*))(Il2CppBase() + 0x3F077FC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Update() {
		return ((T (*)(PerkMachineSignboard*))(Il2CppBase() + 0x3F07D50))(this);
	}

};

}
