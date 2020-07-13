#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace MileStone {

class MileStoneDetailItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MileStone", "MileStoneDetailItem"));
	}

	template <typename T = Il2CppString*> T& taskDesc() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& taskPoint() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& taskCount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
