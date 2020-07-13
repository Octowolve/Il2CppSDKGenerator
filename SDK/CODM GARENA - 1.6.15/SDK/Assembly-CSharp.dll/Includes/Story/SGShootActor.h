#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Story {

class SGShootActor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Story", "SGShootActor"));
	}

	template <typename T = uintptr_t> T& m_DestroyEffectID() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TakeDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SGShootActor*))(Il2CppBase() + 0x3F0E62C))(this);
	}
	template <typename T = void> T TakeDamage(uintptr_t info) {
		return ((T (*)(SGShootActor*, uintptr_t))(Il2CppBase() + 0x3F0E6E0))(this, info);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(SGShootActor*))(Il2CppBase() + 0x3F0E93C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TakeDamage(uintptr_t P0) {
		return ((T (*)(SGShootActor*, uintptr_t))(Il2CppBase() + 0x3F0E944))(this, P0);
	}

};

}
