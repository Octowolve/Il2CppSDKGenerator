#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class SettingsTipPosition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "SettingsTipPosition"));
	}

	template <typename T = uintptr_t> T& parent() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& isVertical() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& DELTA_PIXEL() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& IsUpdate() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& bAlignRight() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Start() {
		return ((T (*)(SettingsTipPosition*))(Il2CppBase() + 0x28B7988))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(SettingsTipPosition*))(Il2CppBase() + 0x28B7DF8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SettingsTipPosition*))(Il2CppBase() + 0x28B7E9C))(this);
	}
	template <typename T = void> T CheckPosition() {
		return ((T (*)(SettingsTipPosition*))(Il2CppBase() + 0x28B7A2C))(this);
	}

};

}
