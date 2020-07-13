#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class StartCoroutine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "StartCoroutine"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& behaviour() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& functionCall() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& stopOnExit() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& component() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(StartCoroutine*))(Il2CppBase() + 0x50322E8))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(StartCoroutine*))(Il2CppBase() + 0x5032300))(this);
	}
	template <typename T = void> T DoStartCoroutine() {
		return ((T (*)(StartCoroutine*))(Il2CppBase() + 0x5032320))(this);
	}
	template <typename T = void> T OnExit() {
		return ((T (*)(StartCoroutine*))(Il2CppBase() + 0x5032C1C))(this);
	}

};

}
