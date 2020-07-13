#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class SettingsTipsButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "SettingsTipsButton"));
	}

	template <typename T = uintptr_t> T& mTipsTag() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T OnClick() {
		return ((T (*)(SettingsTipsButton*))(Il2CppBase() + 0x28B8028))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClick() {
		return ((T (*)(SettingsTipsButton*))(Il2CppBase() + 0x28B8298))(this);
	}

};

}
