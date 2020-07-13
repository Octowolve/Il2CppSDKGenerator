#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChannelSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChannelSettings"));
	}

	template <typename T = uintptr_t> static T& m_Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ChannelSettingToggle() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWesternSetting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCNSetting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterGameToggle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsGameToggeOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x1D1EE04))(0);
	}
	template <typename T = void> T SetWesternSetting() {
		return ((T (*)(ChannelSettings*))(Il2CppBase() + 0x1D1EC90))(this);
	}
	template <typename T = void> T SetCNSetting() {
		return ((T (*)(ChannelSettings*))(Il2CppBase() + 0x1D1ED44))(this);
	}
	template <typename T = void> T RegisterGameToggle(uintptr_t toggleID) {
		return ((T (*)(ChannelSettings*, uintptr_t))(Il2CppBase() + 0x1D1EEC4))(this, toggleID);
	}
	template <typename T = bool> T IsGameToggeOpen(uintptr_t toggleID) {
		return ((T (*)(ChannelSettings*, uintptr_t))(Il2CppBase() + 0x1D1F0E4))(this, toggleID);
	}

};

}
