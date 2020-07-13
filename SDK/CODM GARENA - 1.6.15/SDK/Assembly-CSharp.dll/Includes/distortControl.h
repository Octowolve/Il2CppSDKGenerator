#pragma once
#include <Il2Cpp/Il2Cpp.h>

class distortControl
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "distortControl"));
	}

	template <typename T = Il2CppVector2> T& m_FlowSpeed() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_distortStrength() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& postEffectChain() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector2> T& m_tiling() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_time() {
		return *(T*)((uintptr_t)this + 0x24);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnValidate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(distortControl*))(Il2CppBase() + 0x417743C))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(distortControl*))(Il2CppBase() + 0x4177690))(this);
	}
	template <typename T = void> T OnValidate() {
		return ((T (*)(distortControl*))(Il2CppBase() + 0x4177750))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(distortControl*))(Il2CppBase() + 0x4177890))(this);
	}

};

}
