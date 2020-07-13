#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Squad {

class SquadData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Squad", "SquadData"));
	}

	template <typename T = int32_t> T& SquadIndex() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> static T& MAX_MEMBER_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_SquadMemberList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ScoreStreak() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& IndividuationItems() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSquadData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeScoreStreak() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeIndividuationItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddMember() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSquadMemberList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T SetSquadData(uintptr_t squadType, uintptr_t info, uintptr_t opponentInventory) {
		return ((T (*)(SquadData*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3934BF4))(this, squadType, info, opponentInventory);
	}
	template <typename T = void> T ChangeScoreStreak(Il2CppList<uintptr_t>* newScoreStreakList) {
		return ((T (*)(SquadData*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3935558))(this, newScoreStreakList);
	}
	template <typename T = void> T ChangeIndividuationItems(Il2CppList<uintptr_t>* newScoreStreakList) {
		return ((T (*)(SquadData*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3935768))(this, newScoreStreakList);
	}
	template <typename T = void> T AddMember(uintptr_t member) {
		return ((T (*)(SquadData*, uintptr_t))(Il2CppBase() + 0x3935408))(this, member);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetSquadMemberList() {
		return ((T (*)(SquadData*))(Il2CppBase() + 0x3935808))(this);
	}

};

}
