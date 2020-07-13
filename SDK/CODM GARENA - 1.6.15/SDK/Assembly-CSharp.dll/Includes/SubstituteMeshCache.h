#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SubstituteMeshCache
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SubstituteMeshCache"));
	}

	template <typename T = Il2CppString*> T& assetIDStr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& caches() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& bounds() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& SetedBounds() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMeshKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Add() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Get() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshMeshBounds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = Il2CppString*> T get_assetIDStr() {
		return ((T (*)(SubstituteMeshCache*))(Il2CppBase() + 0x3F2DA10))(this);
	}
	template <typename T = void> T set_assetIDStr(Il2CppString* value) {
		return ((T (*)(SubstituteMeshCache*, Il2CppString*))(Il2CppBase() + 0x3F2DA00))(this, value);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T get_caches() {
		return ((T (*)(SubstituteMeshCache*))(Il2CppBase() + 0x3F2DA18))(this);
	}
	template <typename T = void> T set_caches(Il2CppDictionary<uintptr_t, uintptr_t>* value) {
		return ((T (*)(SubstituteMeshCache*, Il2CppDictionary<uintptr_t, uintptr_t>*))(Il2CppBase() + 0x3F2DA08))(this, value);
	}
	template <typename T = uintptr_t> T GetMeshKey(uintptr_t mesh) {
		return ((T (*)(SubstituteMeshCache*, uintptr_t))(Il2CppBase() + 0x3F2DA20))(this, mesh);
	}
	template <typename T = void> T Add(uintptr_t originalMesh, uintptr_t optimizedMesh) {
		return ((T (*)(SubstituteMeshCache*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F2DB2C))(this, originalMesh, optimizedMesh);
	}
	template <typename T = uintptr_t> T Get(uintptr_t originalMesh) {
		return ((T (*)(SubstituteMeshCache*, uintptr_t))(Il2CppBase() + 0x3F2DC84))(this, originalMesh);
	}
	template <typename T = void> T RefreshMeshBounds(bool forceRefresh, float boundScale) {
		return ((T (*)(SubstituteMeshCache*, bool, float))(Il2CppBase() + 0x3F2DDCC))(this, forceRefresh, boundScale);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(SubstituteMeshCache*))(Il2CppBase() + 0x3F2E0EC))(this);
	}

};

}
