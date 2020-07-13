#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class ReflectionMethodsCache
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "ReflectionMethodsCache"));
	}

	template <typename T = uintptr_t> T& raycast3D() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& raycast3DAll() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& raycast2D() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& getRayIntersectionAll() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& s_ReflectionMethodsCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T get_Singleton() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E2D008))(0);
	}

};

}
