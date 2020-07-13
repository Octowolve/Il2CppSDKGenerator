#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class SPVPSettlementWindowItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "SPVPSettlementWindowItemView"));
	}

	template <typename T = uintptr_t> T& ResCol1() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& ResCol2() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& DetailCol1() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& DetailCol2() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& DetailCol3() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& ResRoot() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& DetailRoot() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& NormalBg() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& OwnBg() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = uintptr_t> T& RedCampColorLight() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& RedCampColorDark() {
		return *(T*)((uintptr_t)this + 0x158);
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

	template <typename T = void> T SetPlayerStats(uintptr_t gameMode, uintptr_t camp, uintptr_t psd, uint64_t matchGuid, bool BlueTeam) {
		return ((T (*)(SPVPSettlementWindowItemView*, uintptr_t, uintptr_t, uintptr_t, uint64_t, bool))(Il2CppBase() + 0x2984478))(this, gameMode, camp, psd, matchGuid, BlueTeam);
	}
	template <typename T = void> T SetPlayerInfo(uintptr_t psd, uintptr_t mode) {
		return ((T (*)(SPVPSettlementWindowItemView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x29846E4))(this, psd, mode);
	}
	template <typename T = void> T xLuaBaseProxy_SetPlayerInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(SPVPSettlementWindowItemView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2984DCC))(this, P0, P1);
	}

};

}
