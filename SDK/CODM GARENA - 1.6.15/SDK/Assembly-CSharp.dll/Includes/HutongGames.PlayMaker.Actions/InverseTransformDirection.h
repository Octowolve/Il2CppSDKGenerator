#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class InverseTransformDirection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "InverseTransformDirection"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& worldDirection() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(InverseTransformDirection*))(Il2CppBase() + 0x4F09F68))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(InverseTransformDirection*))(Il2CppBase() + 0x4F09F80))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(InverseTransformDirection*))(Il2CppBase() + 0x4F0A114))(this);
	}
	template <typename T = void> T DoInverseTransformDirection() {
		return ((T (*)(InverseTransformDirection*))(Il2CppBase() + 0x4F09FAC))(this);
	}

};

}
