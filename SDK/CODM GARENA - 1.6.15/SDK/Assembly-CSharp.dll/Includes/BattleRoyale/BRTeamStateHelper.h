#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRTeamStateHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRTeamStateHelper"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTeamMateState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetTeamMateState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsTeammate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsTeammateByTeammateDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_IsTeammate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_IsTeammate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_IsTeammate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTeammateInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStateSpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = uintptr_t> T GetTeamMateState(uintptr_t info) {
		return ((T (*)(BRTeamStateHelper*, uintptr_t))(Il2CppBase() + 0x2633DD0))(this, info);
	}
	template <typename T = uintptr_t> T GetTeamMateState_1(uint32_t playerId) {
		return ((T (*)(BRTeamStateHelper*, uint32_t))(Il2CppBase() + 0x2633FE4))(this, playerId);
	}
	template <typename T = bool> T IsTeammate(uint32_t pId) {
		return ((T (*)(BRTeamStateHelper*, uint32_t))(Il2CppBase() + 0x263423C))(this, pId);
	}
	template <typename T = bool> T IsTeammateByTeammateDic(uint32_t pId) {
		return ((T (*)(BRTeamStateHelper*, uint32_t))(Il2CppBase() + 0x2634594))(this, pId);
	}
	template <typename T = bool> T IsTeammate_1(uintptr_t pInfo) {
		return ((T (*)(BRTeamStateHelper*, uintptr_t))(Il2CppBase() + 0x26343D0))(this, pInfo);
	}
	template <typename T = bool> T IsTeammate_2(uint32_t pIdLeft, uint32_t pIdRight) {
		return ((T (*)(BRTeamStateHelper*, uint32_t, uint32_t))(Il2CppBase() + 0x2634728))(this, pIdLeft, pIdRight);
	}
	template <typename T = bool> T IsTeammate_3(uintptr_t pInfoLeft, uintptr_t pInfoRight) {
		return ((T (*)(BRTeamStateHelper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x26348F8))(this, pInfoLeft, pInfoRight);
	}
	template <typename T = uintptr_t> T GetTeammateInfo(uint32_t pid) {
		return ((T (*)(BRTeamStateHelper*, uint32_t))(Il2CppBase() + 0x2634A48))(this, pid);
	}
	template <typename T = Il2CppString*> T GetStateSpriteName(uintptr_t state, uintptr_t pi) {
		return ((T (*)(BRTeamStateHelper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2634C10))(this, state, pi);
	}

};

}
