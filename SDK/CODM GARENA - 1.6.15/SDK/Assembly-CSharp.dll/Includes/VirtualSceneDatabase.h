#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VirtualSceneDatabase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VirtualSceneDatabase"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& prefabPaths() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& scenes() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrefabPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearNonSerializedData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppString*> T GetPrefabPath(int32_t prefabIndex) {
		return ((T (*)(VirtualSceneDatabase*, int32_t))(Il2CppBase() + 0x488D000))(this, prefabIndex);
	}
	template <typename T = void> T ClearNonSerializedData() {
		return ((T (*)(VirtualSceneDatabase*))(Il2CppBase() + 0x488D0DC))(this);
	}

};

}
