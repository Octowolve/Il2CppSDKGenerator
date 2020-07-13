#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine.Landscape {

class LandscapeJob
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine.Landscape", "LandscapeJob"));
	}

	template <typename T = uintptr_t> T& m_Fence() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& status() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MakeWait() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareDoing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Execute() {
		return ((T (*)(LandscapeJob*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T MakeWait() {
		return ((T (*)(LandscapeJob*))(Il2CppBase() + 0x24885DC))(this);
	}
	template <typename T = bool> T PrepareDoing(uintptr_t next_job) {
		return ((T (*)(LandscapeJob*, uintptr_t))(Il2CppBase() + 0x2488684))(this, next_job);
	}

};

}
