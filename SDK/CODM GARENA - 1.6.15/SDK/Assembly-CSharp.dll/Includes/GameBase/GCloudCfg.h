#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class GCloudCfg
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "GCloudCfg"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGameID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGameSecret() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMapleID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMapleServerUrl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDolphinChannelID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDailyPufferWithDolphinChannelID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDolphinServerURL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPufferID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPufferServerURL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGVoiceAppID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGVoiceAppKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGVoiceURL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = int32_t> static T GetGameID() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EB1298))(0);
	}
	template <typename T = Il2CppString*> static T GetGameSecret() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EB1354))(0);
	}
	template <typename T = int32_t> static T GetMapleID() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EB1410))(0);
	}
	template <typename T = Il2CppString*> static T GetMapleServerUrl() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EB14CC))(0);
	}
	template <typename T = uint32_t> static T GetDolphinChannelID() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EB1588))(0);
	}
	template <typename T = uint32_t> static T GetDailyPufferWithDolphinChannelID() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EB169C))(0);
	}
	template <typename T = Il2CppString*> static T GetDolphinServerURL() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EB17B0))(0);
	}
	template <typename T = uint32_t> static T GetPufferID() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EB186C))(0);
	}
	template <typename T = Il2CppString*> static T GetPufferServerURL() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EB19FC))(0);
	}
	template <typename T = Il2CppString*> static T GetGVoiceAppID() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EB1AD8))(0);
	}
	template <typename T = Il2CppString*> static T GetGVoiceAppKey() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EB1B94))(0);
	}
	template <typename T = Il2CppString*> static T GetGVoiceURL() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EB1C50))(0);
	}

};

}
