#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ftLightmaps
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ftLightmaps"));
	}

	template <typename T = Il2CppList<int32_t>*> static T& lightmapRefCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& globalMapsAdditional() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> static T& directionalMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = void*> static T& f__mg$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> static T OnSceneChangedPlay(uintptr_t prev, uintptr_t next) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3B60420))(0, prev, next);
	}
	template <typename T = void> static T RefreshFull() {
		return ((T (*)(void *))(Il2CppBase() + 0x3B604DC))(0);
	}
	template <typename T = void> static T RebuildAllLightingData() {
		return ((T (*)(void *))(Il2CppBase() + 0x3B62FE0))(0);
	}
	template <typename T = uintptr_t> static T FindInScene(Il2CppString* nm, uintptr_t scn) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3B62FE4))(0, nm, scn);
	}
	template <typename T = uintptr_t> static T GetEmptyDirectionTex(uintptr_t storage) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3B631BC))(0, storage);
	}
	template <typename T = void> static T RefreshScene(uintptr_t scene, uintptr_t storage, bool updateNonBaked, bool modifyLightmapList) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool, bool))(Il2CppBase() + 0x3B60684))(0, scene, storage, updateNonBaked, modifyLightmapList);
	}
	template <typename T = void> static T UnloadScene(uintptr_t storage) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3B631EC))(0, storage);
	}
	template <typename T = void> static T RefreshScene2(uintptr_t scene, uintptr_t storage) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3B63710))(0, scene, storage);
	}

};

}
