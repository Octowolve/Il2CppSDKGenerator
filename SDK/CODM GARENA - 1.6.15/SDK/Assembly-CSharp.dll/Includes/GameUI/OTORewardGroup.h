#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class OTORewardGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "OTORewardGroup"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& items() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRewards() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetRewards(Il2CppList<uintptr_t>* rewards, Il2CppString* frameColor) {
		return ((T (*)(OTORewardGroup*, Il2CppList<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x3A8B8B4))(this, rewards, frameColor);
	}

};

}
