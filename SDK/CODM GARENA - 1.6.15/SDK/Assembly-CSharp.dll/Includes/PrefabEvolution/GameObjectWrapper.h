#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PrefabEvolution {

class GameObjectWrapper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PrefabEvolution", "GameObjectWrapper"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T get_m_IsActive() {
		return ((T (*)(GameObjectWrapper*))(Il2CppBase() + 0x4808634))(this);
	}
	template <typename T = void> T set_m_IsActive(bool value) {
		return ((T (*)(GameObjectWrapper*, bool))(Il2CppBase() + 0x4808660))(this, value);
	}

};

}
