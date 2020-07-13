#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponPartSilencer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponPart_Silencer"));
	}

	template <typename T = bool> T& m_IsHideSelfInMiniMapWhenFiring() {
		return *(T*)((uintptr_t)this + 0xE1);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSilencerWeaponPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponPartSilencer*, uintptr_t, bool))(Il2CppBase() + 0x241BF7C))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponPartSilencer*))(Il2CppBase() + 0x241C09C))(this);
	}
	template <typename T = bool> T IsSilencerWeaponPart() {
		return ((T (*)(WeaponPartSilencer*))(Il2CppBase() + 0x241C158))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponPartSilencer*, uintptr_t, bool))(Il2CppBase() + 0x241C1F8))(this, P0, P1);
	}
	template <typename T = bool> T xLuaBaseProxy_IsSilencerWeaponPart() {
		return ((T (*)(WeaponPartSilencer*))(Il2CppBase() + 0x241C1FC))(this);
	}

};

}
