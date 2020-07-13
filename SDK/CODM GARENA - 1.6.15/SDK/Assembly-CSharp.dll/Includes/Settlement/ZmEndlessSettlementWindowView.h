#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class ZmEndlessSettlementWindowView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "ZmEndlessSettlementWindowView"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& playerList() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = uintptr_t> T& LabelMission() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayBgm() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerListItemBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T SetTop(uintptr_t SettlementDS) {
		return ((T (*)(ZmEndlessSettlementWindowView*, uintptr_t))(Il2CppBase() + 0x2987630))(this, SettlementDS);
	}
	template <typename T = void> T SetPlayerInfo(uintptr_t data, uint64_t gspGuid, uintptr_t gameMode) {
		return ((T (*)(ZmEndlessSettlementWindowView*, uintptr_t, uint64_t, uintptr_t))(Il2CppBase() + 0x2987170))(this, data, gspGuid, gameMode);
	}
	template <typename T = void> T PlayBgm(uintptr_t settlementDS) {
		return ((T (*)(ZmEndlessSettlementWindowView*, uintptr_t))(Il2CppBase() + 0x29873AC))(this, settlementDS);
	}
	template <typename T = void> T SetPlayerListItemBtn(uintptr_t eBtnMode) {
		return ((T (*)(ZmEndlessSettlementWindowView*, uintptr_t))(Il2CppBase() + 0x298788C))(this, eBtnMode);
	}
	template <typename T = void> T xLuaBaseProxy_SetTop(uintptr_t P0) {
		return ((T (*)(ZmEndlessSettlementWindowView*, uintptr_t))(Il2CppBase() + 0x2987A18))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SetPlayerListItemBtn(uintptr_t P0) {
		return ((T (*)(ZmEndlessSettlementWindowView*, uintptr_t))(Il2CppBase() + 0x2987A20))(this, P0);
	}

};

}
