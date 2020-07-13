#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UICommonReceiveRoleView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UICommonReceiveRoleView"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGeneralInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetGeneralInfo(uintptr_t item) {
		return ((T (*)(UICommonReceiveRoleView*, uintptr_t))(Il2CppBase() + 0x39CE3A4))(this, item);
	}
	template <typename T = void> T xLuaBaseProxy_SetGeneralInfo(uintptr_t P0) {
		return ((T (*)(UICommonReceiveRoleView*, uintptr_t))(Il2CppBase() + 0x39CE454))(this, P0);
	}

};

}
