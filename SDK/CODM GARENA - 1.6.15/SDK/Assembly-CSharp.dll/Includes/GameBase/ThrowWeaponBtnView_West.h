#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class ThrowWeaponBtnViewWest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "ThrowWeaponBtnView_West"));
	}

	template <typename T = uintptr_t> T& WidgetDestructive() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& WidgetTactical() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& LabelDestructiveCount() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& LabelTacticalCount() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = int32_t> T& m_DestructiveCount() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& m_TaticalCount() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = float> T& m_ShowTime() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickLethal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickTactical() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchToTactical() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchToDestructive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(ThrowWeaponBtnViewWest*))(Il2CppBase() + 0x27CAC48))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(ThrowWeaponBtnViewWest*))(Il2CppBase() + 0x27CAC50))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ThrowWeaponBtnViewWest*))(Il2CppBase() + 0x27CAC60))(this);
	}
	template <typename T = void> T UpdateContent(bool force) {
		return ((T (*)(ThrowWeaponBtnViewWest*, bool))(Il2CppBase() + 0x27CADF4))(this, force);
	}
	template <typename T = void> T OnClickLethal(uintptr_t OBJ) {
		return ((T (*)(ThrowWeaponBtnViewWest*, uintptr_t))(Il2CppBase() + 0x27CB268))(this, OBJ);
	}
	template <typename T = void> T OnClickTactical(uintptr_t OBJ) {
		return ((T (*)(ThrowWeaponBtnViewWest*, uintptr_t))(Il2CppBase() + 0x27CB448))(this, OBJ);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(ThrowWeaponBtnViewWest*))(Il2CppBase() + 0x27CB628))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(ThrowWeaponBtnViewWest*, float))(Il2CppBase() + 0x27CB630))(this, dt);
	}
	template <typename T = void> T OnSwitchToTactical() {
		return ((T (*)(ThrowWeaponBtnViewWest*))(Il2CppBase() + 0x27CB4F4))(this);
	}
	template <typename T = void> T OnSwitchToDestructive() {
		return ((T (*)(ThrowWeaponBtnViewWest*))(Il2CppBase() + 0x27CB314))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(ThrowWeaponBtnViewWest*))(Il2CppBase() + 0x27CB764))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(ThrowWeaponBtnViewWest*, float))(Il2CppBase() + 0x27CB76C))(this, P0);
	}

};

}
