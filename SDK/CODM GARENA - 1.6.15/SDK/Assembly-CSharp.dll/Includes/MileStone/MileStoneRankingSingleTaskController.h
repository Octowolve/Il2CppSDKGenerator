#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace MileStone {

class MileStoneRankingSingleTaskController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MileStone", "MileStoneRankingSingleTaskController"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetRankType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetActivityItemLocdDescript() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T ResetRankType() {
		return ((T (*)(MileStoneRankingSingleTaskController*))(Il2CppBase() + 0x41E44DC))(this);
	}
	template <typename T = Il2CppString*> T GetActivityItemLocdDescript() {
		return ((T (*)(MileStoneRankingSingleTaskController*))(Il2CppBase() + 0x41E45F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ResetRankType() {
		return ((T (*)(MileStoneRankingSingleTaskController*))(Il2CppBase() + 0x41E46B0))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetActivityItemLocdDescript() {
		return ((T (*)(MileStoneRankingSingleTaskController*))(Il2CppBase() + 0x41E46B8))(this);
	}

};

}
