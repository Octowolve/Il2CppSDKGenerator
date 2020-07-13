#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AIReactChanSeePlayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AIReactChan_SeePlayer"));
	}

	template <typename T = uintptr_t> T& SeenPawn() {
		return *(T*)((uintptr_t)this + 0xC);
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
		return ((T (*)(AIReactChanSeePlayer*))(Il2CppBase() + 0x49B30B0))(this);
	}
	template <typename T = uintptr_t> T GetPerceptionType() {
		return ((T (*)(AIReactChanSeePlayer*))(Il2CppBase() + 0x49B3150))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetChannelType() {
		return ((T (*)(AIReactChanSeePlayer*))(Il2CppBase() + 0x49B31F0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetPerceptionType() {
		return ((T (*)(AIReactChanSeePlayer*))(Il2CppBase() + 0x49B31F4))(this);
	}

};

}
