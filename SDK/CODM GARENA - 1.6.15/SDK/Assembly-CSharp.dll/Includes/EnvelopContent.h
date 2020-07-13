#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EnvelopContent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnvelopContent"));
	}

	template <typename T = uintptr_t> T& targetRoot() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& padLeft() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& padRight() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& padBottom() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& padTop() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& ignoreDisabled() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& mStarted() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Execute() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Start() {
		return ((T (*)(EnvelopContent*))(Il2CppBase() + 0x4BCFDDC))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(EnvelopContent*))(Il2CppBase() + 0x4BD029C))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(EnvelopContent*))(Il2CppBase() + 0x4BCFE88))(this);
	}

};

}
