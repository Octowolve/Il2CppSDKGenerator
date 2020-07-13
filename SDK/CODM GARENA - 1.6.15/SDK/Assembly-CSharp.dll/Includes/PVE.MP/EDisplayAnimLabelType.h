#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class EDisplayAnimLabelType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "EDisplayAnimLabelType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& EDISPLAYANIM_NOMAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& EDISPLAYANIM_MONEY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& EDISPLAYANIM_TD_NOMAL_1P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& EDISPLAYANIM_TD_NORMAL_TOWER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
