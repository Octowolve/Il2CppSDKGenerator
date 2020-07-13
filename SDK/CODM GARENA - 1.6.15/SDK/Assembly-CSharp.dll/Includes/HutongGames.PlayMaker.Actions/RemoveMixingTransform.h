#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class RemoveMixingTransform
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "RemoveMixingTransform"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& animationName() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& transfrom() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(RemoveMixingTransform*))(Il2CppBase() + 0x4D83C0C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(RemoveMixingTransform*))(Il2CppBase() + 0x4D83CD8))(this);
	}
	template <typename T = void> T DoRemoveMixingTransform() {
		return ((T (*)(RemoveMixingTransform*))(Il2CppBase() + 0x4D83CF8))(this);
	}

};

}
