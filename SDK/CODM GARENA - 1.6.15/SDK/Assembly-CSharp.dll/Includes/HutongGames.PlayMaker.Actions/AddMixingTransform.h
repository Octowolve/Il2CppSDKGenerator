#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class AddMixingTransform
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "AddMixingTransform"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& animationName() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& transform() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& recursive() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(AddMixingTransform*))(Il2CppBase() + 0x476CBC4))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(AddMixingTransform*))(Il2CppBase() + 0x476CCD0))(this);
	}
	template <typename T = void> T DoAddMixingTransform() {
		return ((T (*)(AddMixingTransform*))(Il2CppBase() + 0x476CCF0))(this);
	}

};

}
