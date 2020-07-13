#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class IntClamp
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "IntClamp"));
	}

	template <typename T = uintptr_t> T& intVariable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& minValue() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& maxValue() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(IntClamp*))(Il2CppBase() + 0x4F09664))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(IntClamp*))(Il2CppBase() + 0x4F0967C))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(IntClamp*))(Il2CppBase() + 0x4F097CC))(this);
	}
	template <typename T = void> T DoClamp() {
		return ((T (*)(IntClamp*))(Il2CppBase() + 0x4F096A8))(this);
	}

};

}
