#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponPartMuzzle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponPart_Muzzle"));
	}

	template <typename T = Il2CppString*> T& m_MuzzleFlashSocketName() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = int32_t> T& m_MuzzleFlashAssetID1P() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = int32_t> T& m_MuzzleFlashAssetID3P() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = int32_t> T& m_MuzzleFlashToHipAssetID1P() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = int32_t> T& m_MuzzleFlashToHipAssetID3P() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = bool> T& m_ShouldChangeMuzzleFlashEffect() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupWeaponPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponPartMuzzle*, uintptr_t, bool))(Il2CppBase() + 0x2418068))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponPartMuzzle*))(Il2CppBase() + 0x24181B4))(this);
	}
	template <typename T = void> T SetupWeaponPart() {
		return ((T (*)(WeaponPartMuzzle*))(Il2CppBase() + 0x2418270))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponPartMuzzle*, uintptr_t, bool))(Il2CppBase() + 0x2418458))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_SetupWeaponPart() {
		return ((T (*)(WeaponPartMuzzle*))(Il2CppBase() + 0x241845C))(this);
	}

};

}
