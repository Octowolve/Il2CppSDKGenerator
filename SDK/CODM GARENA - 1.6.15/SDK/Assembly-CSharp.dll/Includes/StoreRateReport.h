#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreRateReport
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreRateReport"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTLogArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppString*> T get_Tag() {
		return ((T (*)(StoreRateReport*))(Il2CppBase() + 0x495B54C))(this);
	}
	template <typename T = Il2CppString*> T get_EventTime() {
		return ((T (*)(StoreRateReport*))(Il2CppBase() + 0x495B5C4))(this);
	}
	template <typename T = Il2CppString*> T get_GameAppId() {
		return ((T (*)(StoreRateReport*))(Il2CppBase() + 0x495B5FC))(this);
	}
	template <typename T = int32_t> T get_PlatID() {
		return ((T (*)(StoreRateReport*))(Il2CppBase() + 0x495B608))(this);
	}
	template <typename T = Il2CppString*> T get_OpenId() {
		return ((T (*)(StoreRateReport*))(Il2CppBase() + 0x495B614))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTLogArgs(int32_t countType) {
		return ((T (*)(StoreRateReport*, int32_t))(Il2CppBase() + 0x495B620))(this, countType);
	}

};

}
