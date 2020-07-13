#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.SPVP {

class SPVPLadderSystemAssist
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.SPVP", "SPVPLadderSystemAssist"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_DS() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestGetSPVPLadderInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetSPVPLadderPlacementInfoResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLadderLevelUpNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShowSeasonSwitch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T RequestGetSPVPLadderInfo() {
		return ((T (*)(SPVPLadderSystemAssist*))(Il2CppBase() + 0x299B9E8))(this);
	}
	template <typename T = void> T OnGetSPVPLadderPlacementInfoResponse(uintptr_t res) {
		return ((T (*)(SPVPLadderSystemAssist*, uintptr_t))(Il2CppBase() + 0x299BB18))(this, res);
	}
	template <typename T = void> T OnNotifyLadderLevelUpNtf(uintptr_t ntf) {
		return ((T (*)(SPVPLadderSystemAssist*, uintptr_t))(Il2CppBase() + 0x299BC0C))(this, ntf);
	}
	template <typename T = void> T CheckShowSeasonSwitch() {
		return ((T (*)(SPVPLadderSystemAssist*))(Il2CppBase() + 0x299BD1C))(this);
	}

};

}
