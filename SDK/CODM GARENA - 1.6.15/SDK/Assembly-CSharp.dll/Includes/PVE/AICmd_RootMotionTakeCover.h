#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AICmdRootMotionTakeCover
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AICmd_RootMotionTakeCover"));
	}

	template <typename T = uintptr_t> T& m_DestCover() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = uintptr_t> static T Execute(uintptr_t inOwner, uintptr_t inCover) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CF133C))(0, inOwner, inCover);
	}
	template <typename T = uintptr_t> T State() {
		return ((T (*)(AICmdRootMotionTakeCover*))(Il2CppBase() + 0x4CF141C))(this);
	}
	template <typename T = void> T Pushed() {
		return ((T (*)(AICmdRootMotionTakeCover*))(Il2CppBase() + 0x4CF14C8))(this);
	}
	template <typename T = void> T Popped() {
		return ((T (*)(AICmdRootMotionTakeCover*))(Il2CppBase() + 0x4CF1534))(this);
	}

};

}
