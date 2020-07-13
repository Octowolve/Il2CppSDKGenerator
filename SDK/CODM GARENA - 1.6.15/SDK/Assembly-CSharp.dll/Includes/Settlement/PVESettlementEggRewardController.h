#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class PVESettlementEggRewardController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "PVESettlementEggRewardController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& GoGumballMachine() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& Zmax() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& Zmin() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& lastTime() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnNextClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadModelFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCumballMachinePos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(PVESettlementEggRewardController*))(Il2CppBase() + 0x3B302F8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PVESettlementEggRewardController*))(Il2CppBase() + 0x3B3039C))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(PVESettlementEggRewardController*))(Il2CppBase() + 0x3B30590))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PVESettlementEggRewardController*))(Il2CppBase() + 0x3B30688))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PVESettlementEggRewardController*))(Il2CppBase() + 0x3B307BC))(this);
	}
	template <typename T = void> T OnBtnNextClick() {
		return ((T (*)(PVESettlementEggRewardController*))(Il2CppBase() + 0x3B308D8))(this);
	}
	template <typename T = void> T OnLoadModelFinish(int32_t assetId, uintptr_t param) {
		return ((T (*)(PVESettlementEggRewardController*, int32_t, uintptr_t))(Il2CppBase() + 0x3B309C8))(this, assetId, param);
	}
	template <typename T = void> T UpdateCumballMachinePos(uintptr_t obj, float animLength) {
		return ((T (*)(PVESettlementEggRewardController*, uintptr_t, float))(Il2CppBase() + 0x3B30DF8))(this, obj, animLength);
	}
	template <typename T = void> T OnLoadModelFinishm__0() {
		return ((T (*)(PVESettlementEggRewardController*))(Il2CppBase() + 0x3B31024))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(PVESettlementEggRewardController*))(Il2CppBase() + 0x3B320B0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PVESettlementEggRewardController*))(Il2CppBase() + 0x3B320B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(PVESettlementEggRewardController*))(Il2CppBase() + 0x3B320C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PVESettlementEggRewardController*))(Il2CppBase() + 0x3B320C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PVESettlementEggRewardController*))(Il2CppBase() + 0x3B320D0))(this);
	}

};

}
