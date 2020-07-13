#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class AimedFireSwitchView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "AimedFireSwitchView"));
	}

	template <typename T = uintptr_t> T& SwitchBtn() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(AimedFireSwitchView*))(Il2CppBase() + 0x3B67A1C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(AimedFireSwitchView*))(Il2CppBase() + 0x3B67BBC))(this);
	}
	template <typename T = void> T OnChange() {
		return ((T (*)(AimedFireSwitchView*))(Il2CppBase() + 0x3B67D5C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(AimedFireSwitchView*))(Il2CppBase() + 0x3B67E18))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(AimedFireSwitchView*))(Il2CppBase() + 0x3B67E20))(this);
	}

};

}
