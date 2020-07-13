#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class DynamicSkinBoneRefManagerComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "DynamicSkinBoneRefManagerComponent"));
	}

	template <typename T = uintptr_t> T& m_Manager() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& EmptyTransformArray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInitMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindInFirstClassChild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentFPSMR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDynamicSkinnedMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDynamicSkinnedMeshWithNativeGPUSkin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncDynamicSkinedMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DetachFPMeshBones() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = uintptr_t> T get_Manager() {
		return ((T (*)(DynamicSkinBoneRefManagerComponent*))(Il2CppBase() + 0x51E9A30))(this);
	}
	template <typename T = void> T Init(uintptr_t pawn) {
		return ((T (*)(DynamicSkinBoneRefManagerComponent*, uintptr_t))(Il2CppBase() + 0x51E9AD0))(this, pawn);
	}
	template <typename T = void> T OnInitMesh(uintptr_t curMesh) {
		return ((T (*)(DynamicSkinBoneRefManagerComponent*, uintptr_t))(Il2CppBase() + 0x51E9BBC))(this, curMesh);
	}
	template <typename T = bool> T FindInFirstClassChild() {
		return ((T (*)(DynamicSkinBoneRefManagerComponent*))(Il2CppBase() + 0x51E9E5C))(this);
	}
	template <typename T = uintptr_t> T GetCurrentFPSMR() {
		return ((T (*)(DynamicSkinBoneRefManagerComponent*))(Il2CppBase() + 0x51E9F2C))(this);
	}
	template <typename T = bool> T SetDynamicSkinnedMesh(uintptr_t weaponMesh) {
		return ((T (*)(DynamicSkinBoneRefManagerComponent*, uintptr_t))(Il2CppBase() + 0x51EA1A0))(this, weaponMesh);
	}
	template <typename T = bool> T SetDynamicSkinnedMeshWithNativeGPUSkin(uintptr_t weaponMesh, uintptr_t gpuSkinAnyBone) {
		return ((T (*)(DynamicSkinBoneRefManagerComponent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x51EA980))(this, weaponMesh, gpuSkinAnyBone);
	}
	template <typename T = bool> T SyncDynamicSkinedMesh(uintptr_t weaponMesh) {
		return ((T (*)(DynamicSkinBoneRefManagerComponent*, uintptr_t))(Il2CppBase() + 0x51EAEB8))(this, weaponMesh);
	}
	template <typename T = void> T DetachFPMeshBones() {
		return ((T (*)(DynamicSkinBoneRefManagerComponent*))(Il2CppBase() + 0x51EB01C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(DynamicSkinBoneRefManagerComponent*, uintptr_t))(Il2CppBase() + 0x51EB470))(this, P0);
	}

};

}
