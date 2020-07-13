#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class SignDailyReward
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "SignDailyReward"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& items() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitDailyReward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T InitDailyReward(uintptr_t data) {
		return ((T (*)(SignDailyReward*, uintptr_t))(Il2CppBase() + 0x385C084))(this, data);
	}

};

}
