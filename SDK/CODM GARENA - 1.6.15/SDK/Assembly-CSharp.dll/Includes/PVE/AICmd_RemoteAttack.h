#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AICmdRemoteAttack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AICmd_RemoteAttack"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Pushed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Popped() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Pushed() {
		return ((T (*)(AICmdRemoteAttack*))(Il2CppBase() + 0x4CEF954))(this);
	}
	template <typename T = void> T Popped() {
		return ((T (*)(AICmdRemoteAttack*))(Il2CppBase() + 0x4CEFA18))(this);
	}
	template <typename T = void> T OnPlayAnim() {
		return ((T (*)(AICmdRemoteAttack*))(Il2CppBase() + 0x4CEFADC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Pushed() {
		return ((T (*)(AICmdRemoteAttack*))(Il2CppBase() + 0x4CEFC18))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Popped() {
		return ((T (*)(AICmdRemoteAttack*))(Il2CppBase() + 0x4CEFC1C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnPlayAnim() {
		return ((T (*)(AICmdRemoteAttack*))(Il2CppBase() + 0x4CEFC20))(this);
	}

};

}
