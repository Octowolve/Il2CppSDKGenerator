#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace MileStone {

class MileStoneServerMultiTaskView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MileStone", "MileStoneServerMultiTaskView"));
	}

	template <typename T = uintptr_t> T& detailButton() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
