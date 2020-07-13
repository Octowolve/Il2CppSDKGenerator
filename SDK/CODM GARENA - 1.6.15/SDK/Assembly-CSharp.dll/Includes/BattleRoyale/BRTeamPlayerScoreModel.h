#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRTeamPlayerScoreModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRTeamPlayerScoreModel"));
	}

	template <typename T = bool> T& m_BIsValid() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_IndexOnCamp() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_ThePlayerInfo() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetScoreData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T get_BIsValid() {
		return ((T (*)(BRTeamPlayerScoreModel*))(Il2CppBase() + 0x261CC28))(this);
	}
	template <typename T = int32_t> T get_IndexOnCamp() {
		return ((T (*)(BRTeamPlayerScoreModel*))(Il2CppBase() + 0x261CC30))(this);
	}
	template <typename T = uintptr_t> T get_ThePlayerInfo() {
		return ((T (*)(BRTeamPlayerScoreModel*))(Il2CppBase() + 0x261CC38))(this);
	}
	template <typename T = void> T SetScoreData(int32_t inIndex, uintptr_t inPlayerInfo) {
		return ((T (*)(BRTeamPlayerScoreModel*, int32_t, uintptr_t))(Il2CppBase() + 0x2627BA0))(this, inIndex, inPlayerInfo);
	}
	template <typename T = void> T ResetData() {
		return ((T (*)(BRTeamPlayerScoreModel*))(Il2CppBase() + 0x2627C88))(this);
	}

};

}
