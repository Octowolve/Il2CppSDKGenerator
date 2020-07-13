#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class IsKinematic
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "IsKinematic"));
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
		return ((T (*)(IsKinematic*))(Il2CppBase() + 0x4F0A920))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(IsKinematic*))(Il2CppBase() + 0x4F0A938))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(IsKinematic*))(Il2CppBase() + 0x4F0AA9C))(this);
	}
	template <typename T = void> T DoIsKinematic() {
		return ((T (*)(IsKinematic*))(Il2CppBase() + 0x4F0A964))(this);
	}

};

}
