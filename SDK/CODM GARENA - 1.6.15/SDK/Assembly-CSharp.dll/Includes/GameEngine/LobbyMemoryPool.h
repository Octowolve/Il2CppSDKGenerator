#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class LobbyMemoryPool
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "LobbyMemoryPool"));
	}

	template <typename T = uintptr_t> static T& m_Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, void*>*> T& m_CacheDict() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Alloc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Alloc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Recycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AllocCSPkg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecycleCSPkg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x249F748))(0);
	}
	template <typename T = uintptr_t> T Alloc() {
		return ((T (*)(LobbyMemoryPool*))(Il2CppBase() + 0x3352750))(this);
	}
	template <typename T = uintptr_t> T Alloc_1(uintptr_t type) {
		return ((T (*)(LobbyMemoryPool*, uintptr_t))(Il2CppBase() + 0x249F7F8))(this, type);
	}
	template <typename T = void> T Recycle(uintptr_t obj) {
		return ((T (*)(LobbyMemoryPool*, uintptr_t))(Il2CppBase() + 0x249FAD4))(this, obj);
	}
	template <typename T = uintptr_t> T AllocCSPkg() {
		return ((T (*)(LobbyMemoryPool*))(Il2CppBase() + 0x249FCF4))(this);
	}
	template <typename T = void> T RecycleCSPkg(uintptr_t pkg) {
		return ((T (*)(LobbyMemoryPool*, uintptr_t))(Il2CppBase() + 0x249FE38))(this, pkg);
	}

};

}
