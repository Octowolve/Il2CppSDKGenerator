#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PersonalInfo {

class AchievementGiftUIView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PersonalInfo", "AchievementGiftUIView"));
	}

	template <typename T = uintptr_t> T& m_RewardItemScrollView() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& m_LoadingTimes() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
