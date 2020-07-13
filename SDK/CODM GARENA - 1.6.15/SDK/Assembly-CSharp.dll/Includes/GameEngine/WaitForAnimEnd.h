#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WaitForAnimEnd
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WaitForAnimEnd"));
	}

	template <typename T = uintptr_t> T& m_AnimStateInfo() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_AnimNameHash() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix2_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MoveNext() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(WaitForAnimEnd*))(Il2CppBase() + 0x2E9409C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(WaitForAnimEnd*))(Il2CppBase() + 0x2E94184))(this);
	}
	template <typename T = uintptr_t> T get_Current() {
		return ((T (*)(WaitForAnimEnd*))(Il2CppBase() + 0x2E9421C))(this);
	}

};

}
