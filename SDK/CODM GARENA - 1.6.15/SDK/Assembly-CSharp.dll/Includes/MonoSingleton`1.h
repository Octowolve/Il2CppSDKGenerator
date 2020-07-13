#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MonoSingleton1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MonoSingleton`1"));
	}

	template <typename T = uintptr_t> static T& m_Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplicationQuit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T get_instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x4B5E4AC))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(MonoSingleton1*))(Il2CppBase() + 0x4B5EB38))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(MonoSingleton1*))(Il2CppBase() + 0x4B5EDEC))(this);
	}
	template <typename T = void> T OnApplicationQuit() {
		return ((T (*)(MonoSingleton1*))(Il2CppBase() + 0x4B5EEC4))(this);
	}

};

}
