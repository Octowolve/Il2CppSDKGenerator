#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class LevelUpReason
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "LevelUpReason"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& LevelUpReason_FinishDailyTask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& LevelUpReason_FinishWeekTask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& LevelUpReason_FinishChallTask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
