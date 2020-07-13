#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace SignSystem {

class SignOperateController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SignSystem", "SignOperateController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GamepadSignButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSignButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Init() {
		return ((T (*)(SignOperateController*))(Il2CppBase() + 0x38EE670))(this);
	}
	template <typename T = bool> T GamepadSignButtonClick() {
		return ((T (*)(SignOperateController*))(Il2CppBase() + 0x38EE804))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SignOperateController*))(Il2CppBase() + 0x38EECC8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SignOperateController*))(Il2CppBase() + 0x38EEE5C))(this);
	}
	template <typename T = void> T OnSignButtonClick() {
		return ((T (*)(SignOperateController*))(Il2CppBase() + 0x38EE8AC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SignOperateController*))(Il2CppBase() + 0x38EF6BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SignOperateController*))(Il2CppBase() + 0x38EF6C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SignOperateController*))(Il2CppBase() + 0x38EF6CC))(this);
	}

};

}
