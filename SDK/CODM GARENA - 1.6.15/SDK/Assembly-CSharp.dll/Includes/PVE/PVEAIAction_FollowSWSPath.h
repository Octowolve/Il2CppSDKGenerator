#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class PVEAIActionFollowSWSPath
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "PVEAIAction_FollowSWSPath"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryExeCmd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T TryExeCmd() {
		return ((T (*)(PVEAIActionFollowSWSPath*))(Il2CppBase() + 0x436ED3C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_TryExeCmd() {
		return ((T (*)(PVEAIActionFollowSWSPath*))(Il2CppBase() + 0x436EE38))(this);
	}

};

}
