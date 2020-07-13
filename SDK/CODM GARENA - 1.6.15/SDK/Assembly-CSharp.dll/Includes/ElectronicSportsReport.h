#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ElectronicSportsReport
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ElectronicSportsReport"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTLogArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppString*> T get_Tag() {
		return ((T (*)(ElectronicSportsReport*))(Il2CppBase() + 0x4674AD0))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTLogArgs(int32_t BtnFrom) {
		return ((T (*)(ElectronicSportsReport*, int32_t))(Il2CppBase() + 0x4674B48))(this, BtnFrom);
	}

};

}
