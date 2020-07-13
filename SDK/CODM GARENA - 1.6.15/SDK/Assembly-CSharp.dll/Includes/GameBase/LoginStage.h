#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class LoginStage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "LoginStage"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZoneEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T OnEvent(uintptr_t msg) {
		return ((T (*)(LoginStage*, uintptr_t))(Il2CppBase() + 0x19ACA88))(this, msg);
	}
	template <typename T = void> T OnZoneEvent(uintptr_t msg) {
		return ((T (*)(LoginStage*, uintptr_t))(Il2CppBase() + 0x19ACB8C))(this, msg);
	}
	template <typename T = void> T xLuaBaseProxy_OnEvent(uintptr_t P0) {
		return ((T (*)(LoginStage*, uintptr_t))(Il2CppBase() + 0x19ACC90))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnZoneEvent(uintptr_t P0) {
		return ((T (*)(LoginStage*, uintptr_t))(Il2CppBase() + 0x19ACC98))(this, P0);
	}

};

}
