#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class Vector3Lerp
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "Vector3Lerp"));
	}

	template <typename T = uintptr_t> T& fromVector() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& toVector() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& amount() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(Vector3Lerp*))(Il2CppBase() + 0x4F1DFEC))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(Vector3Lerp*))(Il2CppBase() + 0x4F1E0F0))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(Vector3Lerp*))(Il2CppBase() + 0x4F1E1D8))(this);
	}
	template <typename T = void> T DoVector3Lerp() {
		return ((T (*)(Vector3Lerp*))(Il2CppBase() + 0x4F1E11C))(this);
	}

};

}
