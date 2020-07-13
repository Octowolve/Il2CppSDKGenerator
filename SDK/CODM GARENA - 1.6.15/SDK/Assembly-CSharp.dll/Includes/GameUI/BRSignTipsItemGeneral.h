#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BRSignTipsItemGeneral
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BRSignTipsItemGeneral"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T InitView() {
		return ((T (*)(BRSignTipsItemGeneral*))(Il2CppBase() + 0x3DBEC50))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitView() {
		return ((T (*)(BRSignTipsItemGeneral*))(Il2CppBase() + 0x3DBFD3C))(this);
	}

};

}
