#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PVPHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PVPHelper"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_GetPVPModeName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPVPModeLocName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPVPMatchingTimeStr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerInfoListBySort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPVPModule() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = Il2CppString*> static T GetPVPModeName(uintptr_t mode) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3DA04F8))(0, mode);
	}
	template <typename T = Il2CppString*> static T GetPVPModeLocName(uintptr_t mode) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3DA0610))(0, mode);
	}
	template <typename T = Il2CppString*> static T GetPVPMatchingTimeStr(uint64_t startTimeStamp) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x3DA0728))(0, startTimeStamp);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T GetPlayerInfoListBySort() {
		return ((T (*)(void *))(Il2CppBase() + 0x3DA0998))(0);
	}
	template <typename T = Il2CppString*> static T GetPVPModule(int32_t num) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3DA0C74))(0, num);
	}

};

}
