#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class RewardGateState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "RewardGateState"));
	}

	template <typename T = uintptr_t> T& data() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& bReached() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& eState() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& fProgress() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& rewardLoc() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& bInShareWindow() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint64_t> T& TaskSeqId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
