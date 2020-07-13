#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class HasComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "HasComponent"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& component() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& removeOnExit() {
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
	template <typename T = uintptr_t> T& aComponent() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(HasComponent*))(Il2CppBase() + 0x4F08B38))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(HasComponent*))(Il2CppBase() + 0x4F08B5C))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(HasComponent*))(Il2CppBase() + 0x4F08E78))(this);
	}
	template <typename T = void> T OnExit() {
		return ((T (*)(HasComponent*))(Il2CppBase() + 0x4F08EF0))(this);
	}
	template <typename T = void> T DoHasComponent(uintptr_t go) {
		return ((T (*)(HasComponent*, uintptr_t))(Il2CppBase() + 0x4F08BEC))(this, go);
	}

};

}
