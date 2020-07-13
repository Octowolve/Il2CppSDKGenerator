#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WorkShopViewReport
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WorkShopViewReport"));
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
		return ((T (*)(WorkShopViewReport*))(Il2CppBase() + 0x495CD98))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTLogArgs(uintptr_t eWorkShopViewTlogPos, int32_t index) {
		return ((T (*)(WorkShopViewReport*, uintptr_t, int32_t))(Il2CppBase() + 0x495CE10))(this, eWorkShopViewTlogPos, index);
	}

};

}
