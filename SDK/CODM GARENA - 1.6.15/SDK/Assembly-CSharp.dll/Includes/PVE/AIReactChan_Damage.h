#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AIReactChanDamage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AIReactChan_Damage"));
	}

	template <typename T = uint32_t> T& DamageInstigatorID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& HitInfo() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetChannelType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPerceptionType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T GetChannelType() {
		return ((T (*)(AIReactChanDamage*))(Il2CppBase() + 0x49B2D88))(this);
	}
	template <typename T = uintptr_t> T GetPerceptionType() {
		return ((T (*)(AIReactChanDamage*))(Il2CppBase() + 0x49B2E28))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetChannelType() {
		return ((T (*)(AIReactChanDamage*))(Il2CppBase() + 0x49B2EC8))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetPerceptionType() {
		return ((T (*)(AIReactChanDamage*))(Il2CppBase() + 0x49B2F6C))(this);
	}

};

}
