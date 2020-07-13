#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class TransformDirection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "TransformDirection"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& localDirection() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(TransformDirection*))(Il2CppBase() + 0x4F191F4))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(TransformDirection*))(Il2CppBase() + 0x4F1920C))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(TransformDirection*))(Il2CppBase() + 0x4F193A0))(this);
	}
	template <typename T = void> T DoTransformDirection() {
		return ((T (*)(TransformDirection*))(Il2CppBase() + 0x4F19238))(this);
	}

};

}
