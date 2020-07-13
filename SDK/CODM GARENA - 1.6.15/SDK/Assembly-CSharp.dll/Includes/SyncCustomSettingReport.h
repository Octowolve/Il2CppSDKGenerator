#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SyncCustomSettingReport
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SyncCustomSettingReport"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTLogArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppString*> T get_Tag() {
		return ((T (*)(SyncCustomSettingReport*))(Il2CppBase() + 0x495B8E8))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTLogArgs(int32_t IsFirstTimeOpenCustomSetting, int32_t IsSimpleMode, int32_t IsSynchronized) {
		return ((T (*)(SyncCustomSettingReport*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x495B960))(this, IsFirstTimeOpenCustomSetting, IsSimpleMode, IsSynchronized);
	}

};

}
