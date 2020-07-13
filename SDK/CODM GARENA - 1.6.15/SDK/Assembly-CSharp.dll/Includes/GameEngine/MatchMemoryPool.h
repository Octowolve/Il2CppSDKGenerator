#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class MatchMemoryPool
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "MatchMemoryPool"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_Recycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x4AAA664))(0);
	}
	template <typename T = uintptr_t> T Alloc() {
		return ((T (*)(MatchMemoryPool*))(Il2CppBase() + 0x3352A04))(this);
	}
	template <typename T = void> T Recycle(uintptr_t obj) {
		return ((T (*)(MatchMemoryPool*, uintptr_t))(Il2CppBase() + 0x4AAA714))(this, obj);
	}

};

}
