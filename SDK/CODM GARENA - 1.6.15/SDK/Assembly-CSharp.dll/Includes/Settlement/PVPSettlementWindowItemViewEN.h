#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class PVPSettlementWindowItemViewEN
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "PVPSettlementWindowItemViewEN"));
	}

	template <typename T = uintptr_t> T& AdaptCell() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerStats() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T SetPlayerStats(uintptr_t gameMode, uintptr_t psd, uint64_t matchGuid, bool BlueTeam, uintptr_t mCutPanel) {
		return ((T (*)(PVPSettlementWindowItemViewEN*, uintptr_t, uintptr_t, uint64_t, bool, uintptr_t))(Il2CppBase() + 0x3B3AD78))(this, gameMode, psd, matchGuid, BlueTeam, mCutPanel);
	}
	template <typename T = void> T SetPlayerInfo(uintptr_t psd, uintptr_t mode) {
		return ((T (*)(PVPSettlementWindowItemViewEN*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3B549B0))(this, psd, mode);
	}
	template <typename T = void> T xLuaBaseProxy_SetPlayerInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(PVPSettlementWindowItemViewEN*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3B55018))(this, P0, P1);
	}

};

}
