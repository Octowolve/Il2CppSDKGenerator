#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LiveOpsActivityClickReport
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LiveOpsActivityClickReport"));
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
		return ((T (*)(LiveOpsActivityClickReport*))(Il2CppBase() + 0x4948430))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTLogArgs(uintptr_t buttonID, int32_t topNum, int32_t leftNum, int32_t activityType, uint64_t activityID) {
		return ((T (*)(LiveOpsActivityClickReport*, uintptr_t, int32_t, int32_t, int32_t, uint64_t))(Il2CppBase() + 0x49484A8))(this, buttonID, topNum, leftNum, activityType, activityID);
	}

};

}
