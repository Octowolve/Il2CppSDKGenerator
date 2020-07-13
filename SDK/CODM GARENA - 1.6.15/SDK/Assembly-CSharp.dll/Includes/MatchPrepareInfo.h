#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MatchPrepareInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MatchPrepareInfo"));
	}

	template <typename T = float> T& PrepareTime() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& IsHalfwayJoin() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& ServerTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrepareTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = float> T GetPrepareTime() {
		return ((T (*)(MatchPrepareInfo*))(Il2CppBase() + 0x36DD31C))(this);
	}

};

}
