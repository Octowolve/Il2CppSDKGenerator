#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NetworkZombieDance
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NetworkZombieDance"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAliveState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreReplaceAnims() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T PlayAliveState() {
		return ((T (*)(NetworkZombieDance*))(Il2CppBase() + 0x43B6968))(this);
	}
	template <typename T = void> T PreReplaceAnims() {
		return ((T (*)(NetworkZombieDance*))(Il2CppBase() + 0x43B6A54))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayAliveState() {
		return ((T (*)(NetworkZombieDance*))(Il2CppBase() + 0x43B6D40))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PreReplaceAnims() {
		return ((T (*)(NetworkZombieDance*))(Il2CppBase() + 0x43B6D48))(this);
	}

};

}
