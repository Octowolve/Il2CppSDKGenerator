#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class MergeScenes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "MergeScenes"));
	}

	template <typename T = uintptr_t> T& sourceReference() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& sourceAtIndex() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& sourceByName() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& sourceByPath() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& sourceByGameObject() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& destinationReference() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& destinationAtIndex() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& destinationByName() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& destinationByPath() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& destinationByGameObject() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& success() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& successEvent() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& failureEvent() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _sourceScene() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& _sourceFound() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _destinationScene() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& _destinationFound() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(MergeScenes*))(Il2CppBase() + 0x4D78230))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(MergeScenes*))(Il2CppBase() + 0x4D78258))(this);
	}
	template <typename T = void> T GetSourceScene() {
		return ((T (*)(MergeScenes*))(Il2CppBase() + 0x4D783EC))(this);
	}
	template <typename T = void> T GetDestinationScene() {
		return ((T (*)(MergeScenes*))(Il2CppBase() + 0x4D78674))(this);
	}
	template <typename T = Il2CppString*> T ErrorCheck() {
		return ((T (*)(MergeScenes*))(Il2CppBase() + 0x4D788FC))(this);
	}

};

}
