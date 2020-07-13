#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class ProfilerSample
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "ProfilerSample"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Dispose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Dispose() {
		return ((T (*)(ProfilerSample*))(Il2CppBase() + 0x1DEDEA8))(this);
	}

};

}
