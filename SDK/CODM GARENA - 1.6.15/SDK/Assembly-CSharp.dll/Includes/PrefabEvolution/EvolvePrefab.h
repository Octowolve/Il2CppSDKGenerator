#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PrefabEvolution {

class EvolvePrefab
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PrefabEvolution", "EvolvePrefab"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideInternals() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowInternals() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EvolvePrefab*))(Il2CppBase() + 0x4805574))(this);
	}
	template <typename T = void> T HideInternals() {
		return ((T (*)(EvolvePrefab*))(Il2CppBase() + 0x480562C))(this);
	}
	template <typename T = void> T ShowInternals() {
		return ((T (*)(EvolvePrefab*))(Il2CppBase() + 0x480591C))(this);
	}

};

}
