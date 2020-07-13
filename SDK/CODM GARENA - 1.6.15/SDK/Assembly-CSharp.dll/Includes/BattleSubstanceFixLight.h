#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BattleSubstanceFixLight
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BattleSubstanceFixLight"));
	}

	template <typename T = uintptr_t> T& LightColor() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& LightIntensity() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& LightPosition() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetLight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BattleSubstanceFixLight*))(Il2CppBase() + 0x35B9E40))(this);
	}
	template <typename T = void> T SetLight() {
		return ((T (*)(BattleSubstanceFixLight*))(Il2CppBase() + 0x35B9EE4))(this);
	}
	template <typename T = void> T ResetLight() {
		return ((T (*)(BattleSubstanceFixLight*))(Il2CppBase() + 0x35BA00C))(this);
	}

};

}
