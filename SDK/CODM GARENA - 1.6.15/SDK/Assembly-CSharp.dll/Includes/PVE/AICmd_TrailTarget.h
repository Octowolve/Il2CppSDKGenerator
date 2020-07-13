#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AICmdTrailTarget
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AICmd_TrailTarget"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_State() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Resumed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T State() {
		return ((T (*)(AICmdTrailTarget*))(Il2CppBase() + 0x49A38D0))(this);
	}
	template <typename T = void> T Resumed(Il2CppString* oldCmdName) {
		return ((T (*)(AICmdTrailTarget*, Il2CppString*))(Il2CppBase() + 0x49A39B8))(this, oldCmdName);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_State() {
		return ((T (*)(AICmdTrailTarget*))(Il2CppBase() + 0x49A3BA8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Resumed(Il2CppString* P0) {
		return ((T (*)(AICmdTrailTarget*, Il2CppString*))(Il2CppBase() + 0x49A3CBC))(this, P0);
	}

};

}
