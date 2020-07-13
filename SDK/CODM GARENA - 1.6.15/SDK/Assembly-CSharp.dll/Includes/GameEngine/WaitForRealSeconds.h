#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WaitForRealSeconds
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WaitForRealSeconds"));
	}

	template <typename T = float> T& m_Duration() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& m_StartTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MoveNext() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(WaitForRealSeconds*))(Il2CppBase() + 0x2E946CC))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(WaitForRealSeconds*))(Il2CppBase() + 0x2E94798))(this);
	}
	template <typename T = uintptr_t> T get_Current() {
		return ((T (*)(WaitForRealSeconds*))(Il2CppBase() + 0x2E94844))(this);
	}

};

}
