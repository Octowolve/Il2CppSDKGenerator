#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class SettlementDetailKDAPlayerItemFlowCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "SettlementDetailKDAPlayerItemFlowCell"));
	}

	template <typename T = uintptr_t> T& itemView() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetData(uintptr_t gameMode, uintptr_t data, int32_t rank, uint64_t matchGuid, bool isBlue, bool isTeammate, uintptr_t mCutPanel) {
		return ((T (*)(SettlementDetailKDAPlayerItemFlowCell*, uintptr_t, uintptr_t, int32_t, uint64_t, bool, bool, uintptr_t))(Il2CppBase() + 0x2953C74))(this, gameMode, data, rank, matchGuid, isBlue, isTeammate, mCutPanel);
	}

};

}
