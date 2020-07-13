#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GraphicsDeviceSetting
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GraphicsDeviceSetting"));
	}

	template <typename T = uintptr_t> static T& Level1SettingNoFoundSetting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& Level2SettingNoFoundSetting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppString*> T& GraphicsDeviceKey() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& MinNum() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Generation() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& NoLightmap() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& HighFPS() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}


};

}
