#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class InverseTransformPoint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "InverseTransformPoint"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& worldPosition() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(InverseTransformPoint*))(Il2CppBase() + 0x4F0A120))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(InverseTransformPoint*))(Il2CppBase() + 0x4F0A138))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(InverseTransformPoint*))(Il2CppBase() + 0x4F0A2CC))(this);
	}
	template <typename T = void> T DoInverseTransformPoint() {
		return ((T (*)(InverseTransformPoint*))(Il2CppBase() + 0x4F0A164))(this);
	}

};

}
