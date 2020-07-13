#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerTweenOnActive
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerTweenOnActive"));
	}

	template <typename T = int32_t> T& groupId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Contex() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& bPlayOnEnable() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayTweenGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(TriggerTweenOnActive*))(Il2CppBase() + 0x496987C))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(TriggerTweenOnActive*))(Il2CppBase() + 0x4969A40))(this);
	}
	template <typename T = void> T PlayTweenGroup() {
		return ((T (*)(TriggerTweenOnActive*))(Il2CppBase() + 0x496992C))(this);
	}

};

}
