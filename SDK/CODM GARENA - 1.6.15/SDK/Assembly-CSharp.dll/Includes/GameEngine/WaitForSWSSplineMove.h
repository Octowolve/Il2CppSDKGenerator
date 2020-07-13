#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WaitForSWSSplineMove
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WaitForSWSSplineMove"));
	}

	template <typename T = uintptr_t> T& m_SplineMove() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_Event() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_ReachedEnd() {
		return *(T*)((uintptr_t)this + 0x10);
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
	template <typename T = uintptr_t> static T& __Hotfix0_ReachedEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(WaitForSWSSplineMove*))(Il2CppBase() + 0x2E94A2C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(WaitForSWSSplineMove*))(Il2CppBase() + 0x2E94AD8))(this);
	}
	template <typename T = void> T ReachedEnd() {
		return ((T (*)(WaitForSWSSplineMove*))(Il2CppBase() + 0x2E94BE0))(this);
	}
	template <typename T = uintptr_t> T get_Current() {
		return ((T (*)(WaitForSWSSplineMove*))(Il2CppBase() + 0x2E94CF0))(this);
	}

};

}
