#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.ZM {

class RoomZombieDailyChallengeView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.ZM", "RoomZombieDailyChallengeView"));
	}

	template <typename T = uintptr_t> T& LabelRemainTime() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& SpriteIcon() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& LabelName() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& GridReward() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ItemTemplates() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& GridComplete() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& CompleteIcons() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& LabelLimit() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& LabelRecommendSpi() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetViewInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetViewInfo(int32_t highestPassedDifficultyId, int32_t currentSpi, Il2CppList<uintptr_t>* sortedByDifficultyList) {
		return ((T (*)(RoomZombieDailyChallengeView*, int32_t, int32_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x405E0D0))(this, highestPassedDifficultyId, currentSpi, sortedByDifficultyList);
	}

};

}
