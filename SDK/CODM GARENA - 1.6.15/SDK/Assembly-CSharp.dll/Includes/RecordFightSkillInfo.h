#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RecordFightSkillInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RecordFightSkillInfo"));
	}

	template <typename T = int32_t> T& SkillId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& SkillEntryId() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& SkillEntryLevel() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
