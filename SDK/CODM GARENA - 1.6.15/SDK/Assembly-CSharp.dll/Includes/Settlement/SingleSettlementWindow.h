#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class SingleSettlementWindow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "SingleSettlementWindow"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& gridList() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = uintptr_t> T& LabelRank() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCampStats() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupRank() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowContainersWhenShare() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerListItemBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T SetCampStats(uintptr_t campData, uint64_t matchGuid, uintptr_t gameMode) {
		return ((T (*)(SingleSettlementWindow*, uintptr_t, uint64_t, uintptr_t))(Il2CppBase() + 0x2982184))(this, campData, matchGuid, gameMode);
	}
	template <typename T = void> T SetupRank(int32_t myselfRank) {
		return ((T (*)(SingleSettlementWindow*, int32_t))(Il2CppBase() + 0x2982538))(this, myselfRank);
	}
	template <typename T = void> T ShowContainersWhenShare(bool show) {
		return ((T (*)(SingleSettlementWindow*, bool))(Il2CppBase() + 0x29826B4))(this, show);
	}
	template <typename T = void> T SetPlayerListItemBtn(uintptr_t eBtnMode) {
		return ((T (*)(SingleSettlementWindow*, uintptr_t))(Il2CppBase() + 0x2982820))(this, eBtnMode);
	}
	template <typename T = void> T xLuaBaseProxy_ShowContainersWhenShare(bool P0) {
		return ((T (*)(SingleSettlementWindow*, bool))(Il2CppBase() + 0x298299C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SetPlayerListItemBtn(uintptr_t P0) {
		return ((T (*)(SingleSettlementWindow*, uintptr_t))(Il2CppBase() + 0x29829A4))(this, P0);
	}

};

}
