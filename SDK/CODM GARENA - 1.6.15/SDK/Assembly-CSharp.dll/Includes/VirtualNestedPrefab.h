#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VirtualNestedPrefab
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VirtualNestedPrefab"));
	}

	template <typename T = uintptr_t> T& prefab() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& runtimeInstantiate() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& meshMaterials() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RuntimeInstantiatePrefab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(VirtualNestedPrefab*))(Il2CppBase() + 0x488C8C8))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(VirtualNestedPrefab*))(Il2CppBase() + 0x488C960))(this);
	}
	template <typename T = void> T RuntimeInstantiatePrefab() {
		return ((T (*)(VirtualNestedPrefab*))(Il2CppBase() + 0x488CA04))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(VirtualNestedPrefab*))(Il2CppBase() + 0x488CBB8))(this);
	}

};

}
