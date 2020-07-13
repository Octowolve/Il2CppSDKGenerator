#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.AudioConfig.Base {

class ISoundConfigManager2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.AudioConfig.Base", "ISoundConfigManager`2"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T HasConfig(uintptr_t iID) {
		return ((T (*)(ISoundConfigManager2*, uintptr_t))(Il2CppBase() + 0x0))(this, iID);
	}
	template <typename T = uintptr_t> T GetConfig(uintptr_t iID) {
		return ((T (*)(ISoundConfigManager2*, uintptr_t))(Il2CppBase() + 0x0))(this, iID);
	}

};

}
