#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FoliageDatabase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FoliageDatabase"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& foliageLayers() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& foliagePrototypes() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& foliageTypes() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Refresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFoliageLayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIdentifier() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrototypeIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrototypeLOD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRenderKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Refresh() {
		return ((T (*)(FoliageDatabase*))(Il2CppBase() + 0x3CD2E50))(this);
	}
	template <typename T = uintptr_t> T GetFoliageLayer(uintptr_t layerType) {
		return ((T (*)(FoliageDatabase*, uintptr_t))(Il2CppBase() + 0x3CD3098))(this, layerType);
	}
	template <typename T = int32_t> static T GetIdentifier(int32_t prototypeIndex, uintptr_t lod) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x3CD31D0))(0, prototypeIndex, lod);
	}
	template <typename T = int32_t> static T GetPrototypeIndex(int32_t identifier) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3CD327C))(0, identifier);
	}
	template <typename T = uintptr_t> static T GetPrototypeLOD(int32_t identifier) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3CD3328))(0, identifier);
	}
	template <typename T = Il2CppList<void*>*> T GetRenderKey(int32_t prototypeIndex, uintptr_t lod) {
		return ((T (*)(FoliageDatabase*, int32_t, uintptr_t))(Il2CppBase() + 0x3CD33DC))(this, prototypeIndex, lod);
	}

};

}
