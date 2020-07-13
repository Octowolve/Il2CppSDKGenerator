#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class Vector3Interpolate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "Vector3Interpolate"));
	}

	template <typename T = uintptr_t> T& mode() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& fromVector() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& toVector() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& time() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& finishEvent() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& realTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& startTime() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& currentTime() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(Vector3Interpolate*))(Il2CppBase() + 0x4F1DB0C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(Vector3Interpolate*))(Il2CppBase() + 0x4F1DC2C))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(Vector3Interpolate*))(Il2CppBase() + 0x4F1DCB4))(this);
	}

};

}
