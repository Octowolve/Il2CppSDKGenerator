#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class PVEBloodAndExpHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "PVEBloodAndExpHUD"));
	}

	template <typename T = uintptr_t> T& BloodBar() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& AutoFireChangeBtn() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& AutoFire() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& ManualFire() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& FirstTips() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& PickupTips() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& m_PawnBuffMgr() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& BuffGrid() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_BuffItemList() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& BuffItemTemplate() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateHP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBuff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyFireModeChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyPVEFireModeChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShowFirstTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowFirstSwitchAutoModeTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCheckShowPickUpItemTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenerateBuffItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PVEBloodAndExpHUD*))(Il2CppBase() + 0x3A9DF2C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PVEBloodAndExpHUD*))(Il2CppBase() + 0x3A9E1A0))(this);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(PVEBloodAndExpHUD*))(Il2CppBase() + 0x3A9E318))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(PVEBloodAndExpHUD*))(Il2CppBase() + 0x3A9E320))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(PVEBloodAndExpHUD*))(Il2CppBase() + 0x3A9E32C))(this);
	}
	template <typename T = void> T UpdateHP() {
		return ((T (*)(PVEBloodAndExpHUD*))(Il2CppBase() + 0x3A9E580))(this);
	}
	template <typename T = void> T UpdateBuff() {
		return ((T (*)(PVEBloodAndExpHUD*))(Il2CppBase() + 0x3A9E77C))(this);
	}
	template <typename T = void> T OnNotifyFireModeChange(uintptr_t Msg) {
		return ((T (*)(PVEBloodAndExpHUD*, uintptr_t))(Il2CppBase() + 0x3A9EEF0))(this, Msg);
	}
	template <typename T = void> T OnNotifyPVEFireModeChange(uintptr_t Msg) {
		return ((T (*)(PVEBloodAndExpHUD*, uintptr_t))(Il2CppBase() + 0x3A9F0AC))(this, Msg);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(PVEBloodAndExpHUD*))(Il2CppBase() + 0x3A9F364))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(PVEBloodAndExpHUD*, float))(Il2CppBase() + 0x3A9F36C))(this, dt);
	}
	template <typename T = void> T ChangeFireMode() {
		return ((T (*)(PVEBloodAndExpHUD*))(Il2CppBase() + 0x3A9F1F4))(this);
	}
	template <typename T = void> T OnSwitchFireMode() {
		return ((T (*)(PVEBloodAndExpHUD*))(Il2CppBase() + 0x3A9F430))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(PVEBloodAndExpHUD*))(Il2CppBase() + 0x3A9F570))(this);
	}
	template <typename T = void> T CheckShowFirstTips(uintptr_t MSG) {
		return ((T (*)(PVEBloodAndExpHUD*, uintptr_t))(Il2CppBase() + 0x3A9F618))(this, MSG);
	}
	template <typename T = void> T ShowFirstSwitchAutoModeTips() {
		return ((T (*)(PVEBloodAndExpHUD*))(Il2CppBase() + 0x3A9FA48))(this);
	}
	template <typename T = void> T OnCheckShowPickUpItemTip(uintptr_t msg) {
		return ((T (*)(PVEBloodAndExpHUD*, uintptr_t))(Il2CppBase() + 0x3A9FC94))(this, msg);
	}
	template <typename T = uintptr_t> T GenerateBuffItem() {
		return ((T (*)(PVEBloodAndExpHUD*))(Il2CppBase() + 0x3A9EB0C))(this);
	}
	template <typename T = void> T CheckShowFirstTipsm__0() {
		return ((T (*)(PVEBloodAndExpHUD*))(Il2CppBase() + 0x3AA0204))(this);
	}
	template <typename T = void> T OnCheckShowPickUpItemTipm__1() {
		return ((T (*)(PVEBloodAndExpHUD*))(Il2CppBase() + 0x3AA02B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PVEBloodAndExpHUD*))(Il2CppBase() + 0x3AA0364))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PVEBloodAndExpHUD*))(Il2CppBase() + 0x3AA036C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(PVEBloodAndExpHUD*))(Il2CppBase() + 0x3AA0374))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(PVEBloodAndExpHUD*, float))(Il2CppBase() + 0x3AA037C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(PVEBloodAndExpHUD*))(Il2CppBase() + 0x3AA0384))(this);
	}

};

}
