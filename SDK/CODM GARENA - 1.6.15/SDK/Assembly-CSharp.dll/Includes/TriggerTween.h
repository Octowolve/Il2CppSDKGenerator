#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerTween
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerTween"));
	}

	template <typename T = int32_t> T& groupId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Contex() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayTweenGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(TriggerTween*))(Il2CppBase() + 0x4969560))(this);
	}
	template <typename T = void> T PlayTweenGroup() {
		return ((T (*)(TriggerTween*))(Il2CppBase() + 0x49696BC))(this);
	}

};

}
