#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRVendingMachineBtn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRVendingMachineBtn"));
	}

	template <typename T = uintptr_t> T& ShowRoot() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& UseBtn() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& BtnSprite() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_Machine() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& m_NextSendTime() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetShowState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBtnSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRootActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoCheckRootActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckLocalPawnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(BRVendingMachineBtn*))(Il2CppBase() + 0x2655F14))(this);
	}
	template <typename T = uintptr_t> T get_mPawnSwitchState() {
		return ((T (*)(BRVendingMachineBtn*))(Il2CppBase() + 0x2655F1C))(this);
	}
	template <typename T = uintptr_t> T get_VendingMachineHUD() {
		return ((T (*)(BRVendingMachineBtn*))(Il2CppBase() + 0x2655F28))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BRVendingMachineBtn*))(Il2CppBase() + 0x2655F74))(this);
	}
	template <typename T = void> T SetShowState(bool isShow, uintptr_t machine) {
		return ((T (*)(BRVendingMachineBtn*, bool, uintptr_t))(Il2CppBase() + 0x2656114))(this, isShow, machine);
	}
	template <typename T = Il2CppString*> T GetBtnSprite() {
		return ((T (*)(BRVendingMachineBtn*))(Il2CppBase() + 0x26562CC))(this);
	}
	template <typename T = void> T CheckRootActive() {
		return ((T (*)(BRVendingMachineBtn*))(Il2CppBase() + 0x2656490))(this);
	}
	template <typename T = bool> T DoCheckRootActive() {
		return ((T (*)(BRVendingMachineBtn*))(Il2CppBase() + 0x26565E0))(this);
	}
	template <typename T = bool> T CheckLocalPawnState() {
		return ((T (*)(BRVendingMachineBtn*))(Il2CppBase() + 0x2656828))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(BRVendingMachineBtn*))(Il2CppBase() + 0x2656AF8))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(BRVendingMachineBtn*, float))(Il2CppBase() + 0x2656B9C))(this, dt);
	}
	template <typename T = void> T OnUseBtnClick() {
		return ((T (*)(BRVendingMachineBtn*))(Il2CppBase() + 0x2656C48))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(BRVendingMachineBtn*))(Il2CppBase() + 0x2656F20))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(BRVendingMachineBtn*))(Il2CppBase() + 0x2656F28))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRVendingMachineBtn*, float))(Il2CppBase() + 0x2656F30))(this, P0);
	}

};

}
