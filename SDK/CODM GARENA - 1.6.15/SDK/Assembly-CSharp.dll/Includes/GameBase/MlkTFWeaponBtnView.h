#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class MlkTFWeaponBtnView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "MlkTFWeaponBtnView"));
	}

	template <typename T = uintptr_t> T& m_RWeaponIcon() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& m_MWeaponLv() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& m_RWeaponLv() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& m_Stars() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = int32_t> T& nextId() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& LevelAnim() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = bool> T& bLevelUp() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uint32_t> T& NewWeaponID() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGunGameSwitchGun() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReplaceWeaponPic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayResetStars() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MlkWeaponTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMlkWeaponInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLvInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T Start() {
		return ((T (*)(MlkTFWeaponBtnView*))(Il2CppBase() + 0x19CFEE4))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(MlkTFWeaponBtnView*, float))(Il2CppBase() + 0x19CFFB4))(this, dt);
	}
	template <typename T = void> T OnGunGameSwitchGun(uintptr_t Msg) {
		return ((T (*)(MlkTFWeaponBtnView*, uintptr_t))(Il2CppBase() + 0x19D0280))(this, Msg);
	}
	template <typename T = void> T ReplaceWeaponPic() {
		return ((T (*)(MlkTFWeaponBtnView*))(Il2CppBase() + 0x19D058C))(this);
	}
	template <typename T = void> T DelayResetStars() {
		return ((T (*)(MlkTFWeaponBtnView*))(Il2CppBase() + 0x19D0730))(this);
	}
	template <typename T = void> T UpdateWeapon() {
		return ((T (*)(MlkTFWeaponBtnView*))(Il2CppBase() + 0x19D07EC))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(MlkTFWeaponBtnView*))(Il2CppBase() + 0x19D0B68))(this);
	}
	template <typename T = void> T MlkWeaponTick() {
		return ((T (*)(MlkTFWeaponBtnView*))(Il2CppBase() + 0x19D012C))(this);
	}
	template <typename T = void> T SetMlkWeaponInfo(int32_t weaponId, uintptr_t icon) {
		return ((T (*)(MlkTFWeaponBtnView*, int32_t, uintptr_t))(Il2CppBase() + 0x19D0D04))(this, weaponId, icon);
	}
	template <typename T = void> T SetLvInfo(int32_t orderIdx) {
		return ((T (*)(MlkTFWeaponBtnView*, int32_t))(Il2CppBase() + 0x19D093C))(this, orderIdx);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(MlkTFWeaponBtnView*))(Il2CppBase() + 0x19D1040))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(MlkTFWeaponBtnView*))(Il2CppBase() + 0x19D129C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(MlkTFWeaponBtnView*, float))(Il2CppBase() + 0x19D12A4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnGunGameSwitchGun(uintptr_t P0) {
		return ((T (*)(MlkTFWeaponBtnView*, uintptr_t))(Il2CppBase() + 0x19D12AC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateWeapon() {
		return ((T (*)(MlkTFWeaponBtnView*))(Il2CppBase() + 0x19D12B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Clear() {
		return ((T (*)(MlkTFWeaponBtnView*))(Il2CppBase() + 0x19D12BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(MlkTFWeaponBtnView*))(Il2CppBase() + 0x19D12C4))(this);
	}

};

}
