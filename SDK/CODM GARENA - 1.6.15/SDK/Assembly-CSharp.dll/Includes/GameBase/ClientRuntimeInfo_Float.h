#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class ClientRuntimeInfoFloat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "ClientRuntimeInfo_Float"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInfoValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T SetInfoValue(float inValueInt) {
		return ((T (*)(ClientRuntimeInfoFloat*, float))(Il2CppBase() + 0x3C70098))(this, inValueInt);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ClientRuntimeInfoFloat*))(Il2CppBase() + 0x3C70148))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetInfoValue(float P0) {
		return ((T (*)(ClientRuntimeInfoFloat*, float))(Il2CppBase() + 0x3C701F0))(this, P0);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(ClientRuntimeInfoFloat*))(Il2CppBase() + 0x3C701F4))(this);
	}

};

}
