#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ScreenEffectData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ScreenEffectData"));
	}

	template <typename T = uintptr_t> T& m_Effect() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_RefCount() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowOrHideEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T ShowOrHideEffect(bool active) {
		return ((T (*)(ScreenEffectData*, bool))(Il2CppBase() + 0x4476E74))(this, active);
	}
	template <typename T = void> T SetEffect(uintptr_t effect) {
		return ((T (*)(ScreenEffectData*, uintptr_t))(Il2CppBase() + 0x4477394))(this, effect);
	}

};

}
