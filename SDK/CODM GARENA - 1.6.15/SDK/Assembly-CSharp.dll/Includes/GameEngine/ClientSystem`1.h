#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class ClientSystem1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "ClientSystem`1"));
	}

	template <typename T = uintptr_t> static T& m_Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x48D677C))(0);
	}
	template <typename T = void> static T ResetInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x48D6C24))(0);
	}

};

}
