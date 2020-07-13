#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class NetworkSlime
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "NetworkSlime"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitBehaviors() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T InitBehaviors(uintptr_t info) {
		return ((T (*)(NetworkSlime*, uintptr_t))(Il2CppBase() + 0x3EBCA8C))(this, info);
	}
	template <typename T = void> T xLuaBaseProxy_InitBehaviors(uintptr_t P0) {
		return ((T (*)(NetworkSlime*, uintptr_t))(Il2CppBase() + 0x3EBCB2C))(this, P0);
	}

};

}
