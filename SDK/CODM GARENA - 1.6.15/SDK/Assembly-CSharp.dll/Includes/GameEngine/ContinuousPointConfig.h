#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class ContinuousPointConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "ContinuousPointConfig"));
	}

	template <typename T = float> T& ClickIntervalTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& MaxPointNum() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& BanInputTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
