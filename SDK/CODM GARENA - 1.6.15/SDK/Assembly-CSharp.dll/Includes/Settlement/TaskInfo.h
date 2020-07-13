#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class TaskInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "TaskInfo"));
	}

	template <typename T = uintptr_t> T& mType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& mModeType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& mTask() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& mWeekid() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& mSeasonid() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
