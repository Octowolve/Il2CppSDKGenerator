#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AICmdTakeCover
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AICmd_TakeCover"));
	}

	template <typename T = uintptr_t> T& destCover() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& enemy() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& coverDuration() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& origMaxSpeed() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = uintptr_t> static T Execute(uintptr_t owner, uintptr_t inCover, float maxTime) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x4CF2E40))(0, owner, inCover, maxTime);
	}
	template <typename T = bool> T ShouldUnHide() {
		return ((T (*)(AICmdTakeCover*))(Il2CppBase() + 0x4CF2F34))(this);
	}
	template <typename T = bool> T SwitchToNeighborCover() {
		return ((T (*)(AICmdTakeCover*))(Il2CppBase() + 0x4CF312C))(this);
	}
	template <typename T = void> T SlowDown() {
		return ((T (*)(AICmdTakeCover*))(Il2CppBase() + 0x4CF3398))(this);
	}
	template <typename T = void> T RecoverSpeed() {
		return ((T (*)(AICmdTakeCover*))(Il2CppBase() + 0x4CF33E8))(this);
	}
	template <typename T = uintptr_t> T State() {
		return ((T (*)(AICmdTakeCover*))(Il2CppBase() + 0x4CF342C))(this);
	}
	template <typename T = void> T Pushed() {
		return ((T (*)(AICmdTakeCover*))(Il2CppBase() + 0x4CF34D8))(this);
	}
	template <typename T = void> T Popped() {
		return ((T (*)(AICmdTakeCover*))(Il2CppBase() + 0x4CF35D8))(this);
	}
	template <typename T = bool> T CheckPrecondition() {
		return ((T (*)(AICmdTakeCover*))(Il2CppBase() + 0x4CF377C))(this);
	}

};

}
