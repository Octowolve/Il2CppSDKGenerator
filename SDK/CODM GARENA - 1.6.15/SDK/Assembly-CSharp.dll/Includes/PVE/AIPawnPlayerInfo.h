#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AIPawnPlayerInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AIPawnPlayerInfo"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AutoGen_Copy_PVE_AIPawnPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> static T AutoGen_Copy_PVE_AIPawnPlayerInfo(uintptr_t src, uintptr_t dest) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x49AAFFC))(0, src, dest);
	}

};

}
