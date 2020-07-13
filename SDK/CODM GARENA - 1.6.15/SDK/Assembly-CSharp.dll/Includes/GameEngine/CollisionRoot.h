#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class CollisionRoot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "CollisionRoot"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& ColliderList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x4199584))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(CollisionRoot*))(Il2CppBase() + 0x4199604))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(CollisionRoot*))(Il2CppBase() + 0x41996A4))(this);
	}

};

}
