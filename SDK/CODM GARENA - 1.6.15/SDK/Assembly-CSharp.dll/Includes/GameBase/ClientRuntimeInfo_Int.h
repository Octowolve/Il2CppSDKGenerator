#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class ClientRuntimeInfoInt
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "ClientRuntimeInfo_Int"));
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

	template <typename T = void> T SetInfoValue(int32_t inValueInt) {
		return ((T (*)(ClientRuntimeInfoInt*, int32_t))(Il2CppBase() + 0x3C701F8))(this, inValueInt);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ClientRuntimeInfoInt*))(Il2CppBase() + 0x3C702A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetInfoValue(int32_t P0) {
		return ((T (*)(ClientRuntimeInfoInt*, int32_t))(Il2CppBase() + 0x3C70350))(this, P0);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(ClientRuntimeInfoInt*))(Il2CppBase() + 0x3C70354))(this);
	}

};

}
