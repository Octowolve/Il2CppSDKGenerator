#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AIReactionPlaymakerIntegration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AIReaction_PlaymakerIntegration"));
	}

	template <typename T = uintptr_t> T& PendingReaction() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<uintptr_t, bool>*> T& ChannelReactivityDic() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T SuppressAllReactions() {
		return ((T (*)(AIReactionPlaymakerIntegration*))(Il2CppBase() + 0x49B36E4))(this);
	}
	template <typename T = void> T UnsuppressAllReactions() {
		return ((T (*)(AIReactionPlaymakerIntegration*))(Il2CppBase() + 0x49B37DC))(this);
	}
	template <typename T = void> T PopulateSubscribeChannelTypes() {
		return ((T (*)(AIReactionPlaymakerIntegration*))(Il2CppBase() + 0x49B38F0))(this);
	}
	template <typename T = void> T Activate(uint32_t eventInstigatorID, uintptr_t originatingChannel) {
		return ((T (*)(AIReactionPlaymakerIntegration*, uint32_t, uintptr_t))(Il2CppBase() + 0x49B3A68))(this, eventInstigatorID, originatingChannel);
	}
	template <typename T = bool> T ShouldActivate(uint32_t eventInstigatorID, uintptr_t originatingChannel) {
		return ((T (*)(AIReactionPlaymakerIntegration*, uint32_t, uintptr_t))(Il2CppBase() + 0x49B3E70))(this, eventInstigatorID, originatingChannel);
	}
	template <typename T = bool> T ShouldHuntTarget(uint32_t eventInstigatorID) {
		return ((T (*)(AIReactionPlaymakerIntegration*, uint32_t))(Il2CppBase() + 0x49B3F94))(this, eventInstigatorID);
	}

};

}
