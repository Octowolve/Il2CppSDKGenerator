#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class BRSettlementRoomOBController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "BRSettlementRoomOBController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& ds() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_BRSettlementRoomOBScoreController() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_BRSettlementRoomOBMatchOneController() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_BRSettlementRoomOBMatchTwoController() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_BRSettlementRoomOBMatchFourController() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnScoreChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMatchChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowChildView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnExitClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BRSettlementRoomOBController*))(Il2CppBase() + 0x3C2B0BC))(this);
	}
	template <typename T = uintptr_t> T get_sds() {
		return ((T (*)(BRSettlementRoomOBController*))(Il2CppBase() + 0x3C2B160))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRSettlementRoomOBController*))(Il2CppBase() + 0x3C2B1FC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRSettlementRoomOBController*))(Il2CppBase() + 0x3C2B42C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BRSettlementRoomOBController*))(Il2CppBase() + 0x3C2B548))(this);
	}
	template <typename T = void> T OnScoreChange() {
		return ((T (*)(BRSettlementRoomOBController*))(Il2CppBase() + 0x3C2B654))(this);
	}
	template <typename T = void> T OnMatchChange() {
		return ((T (*)(BRSettlementRoomOBController*))(Il2CppBase() + 0x3C2B968))(this);
	}
	template <typename T = void> T ShowChildView(bool bShowScore) {
		return ((T (*)(BRSettlementRoomOBController*, bool))(Il2CppBase() + 0x3C2B72C))(this, bShowScore);
	}
	template <typename T = void> T OnBtnExitClick() {
		return ((T (*)(BRSettlementRoomOBController*))(Il2CppBase() + 0x3C2BA40))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BRSettlementRoomOBController*))(Il2CppBase() + 0x3C2BBF8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRSettlementRoomOBController*))(Il2CppBase() + 0x3C2BC00))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRSettlementRoomOBController*))(Il2CppBase() + 0x3C2BC08))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRSettlementRoomOBController*))(Il2CppBase() + 0x3C2BC10))(this);
	}

};

}
