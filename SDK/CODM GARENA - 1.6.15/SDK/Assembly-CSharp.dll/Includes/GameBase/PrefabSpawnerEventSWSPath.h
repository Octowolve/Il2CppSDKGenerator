#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PrefabSpawnerEventSWSPath
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PrefabSpawnerEventSWSPath"));
	}

	template <typename T = uintptr_t> T& Path() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& LoopType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& ClosedLoop() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& Speed() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Invoke() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T Invoke(uintptr_t inGO) {
		return ((T (*)(PrefabSpawnerEventSWSPath*, uintptr_t))(Il2CppBase() + 0x170CDD4))(this, inGO);
	}
	template <typename T = bool> T xLuaBaseProxy_Invoke(uintptr_t P0) {
		return ((T (*)(PrefabSpawnerEventSWSPath*, uintptr_t))(Il2CppBase() + 0x170CFB8))(this, P0);
	}

};

}
