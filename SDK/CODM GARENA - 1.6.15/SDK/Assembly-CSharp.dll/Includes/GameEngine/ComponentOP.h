#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class ComponentOP
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "ComponentOP"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_GetCopyOf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> static T GetCopyOf(uintptr_t comp, uintptr_t other) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x334FDF8))(0, comp, other);
	}
	template <typename T = uintptr_t> static T AddComponent(uintptr_t go, uintptr_t toAdd) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x334FCAC))(0, go, toAdd);
	}

};

}
