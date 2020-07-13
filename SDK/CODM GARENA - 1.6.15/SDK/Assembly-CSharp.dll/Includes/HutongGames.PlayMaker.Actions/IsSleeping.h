#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class IsSleeping
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "IsSleeping"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& trueEvent() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& falseEvent() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& store() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(IsSleeping*))(Il2CppBase() + 0x4F0AD40))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(IsSleeping*))(Il2CppBase() + 0x4F0AD58))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(IsSleeping*))(Il2CppBase() + 0x4F0AEBC))(this);
	}
	template <typename T = void> T DoIsSleeping() {
		return ((T (*)(IsSleeping*))(Il2CppBase() + 0x4F0AD84))(this);
	}

};

}
