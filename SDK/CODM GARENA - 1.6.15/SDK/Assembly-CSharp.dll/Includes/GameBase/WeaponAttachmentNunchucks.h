#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponAttachmentNunchucks
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponAttachmentNunchucks"));
	}

	template <typename T = uintptr_t> T& m_Animator() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ActivateWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAnimatorControler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ThirdPersonStartFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T ActivateWeapon(int32_t assetId) {
		return ((T (*)(WeaponAttachmentNunchucks*, int32_t))(Il2CppBase() + 0x1C52E04))(this, assetId);
	}
	template <typename T = void> T SetAnimatorControler(int32_t assetID) {
		return ((T (*)(WeaponAttachmentNunchucks*, int32_t))(Il2CppBase() + 0x1C52F60))(this, assetID);
	}
	template <typename T = void> T ThirdPersonStartFire(int32_t inFireCompIndex, bool aimedFire, bool isSingle, int32_t aommoCount) {
		return ((T (*)(WeaponAttachmentNunchucks*, int32_t, bool, bool, int32_t))(Il2CppBase() + 0x1C53364))(this, inFireCompIndex, aimedFire, isSingle, aommoCount);
	}
	template <typename T = void> T xLuaBaseProxy_ActivateWeapon(int32_t P0) {
		return ((T (*)(WeaponAttachmentNunchucks*, int32_t))(Il2CppBase() + 0x1C534C0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SetAnimatorControler(int32_t P0) {
		return ((T (*)(WeaponAttachmentNunchucks*, int32_t))(Il2CppBase() + 0x1C534C8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ThirdPersonStartFire(int32_t P0, bool P1, bool P2, int32_t P3) {
		return ((T (*)(WeaponAttachmentNunchucks*, int32_t, bool, bool, int32_t))(Il2CppBase() + 0x1C534D0))(this, P0, P1, P2, P3);
	}

};

}
