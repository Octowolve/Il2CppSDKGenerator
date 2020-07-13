#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class ManagedAsset
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "ManagedAsset"));
	}

	template <typename T = uintptr_t> T& m_Pool() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_AssetID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& SkinID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint64_t> T& ObjID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_Parent() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& ExtraInfo() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_InitMarerials() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Despawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Despawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetParent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DetachParent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecoveMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDestroyed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = uintptr_t> T get_Pool() {
		return ((T (*)(ManagedAsset*))(Il2CppBase() + 0x4A9A454))(this);
	}
	template <typename T = int32_t> T get_AssetID() {
		return ((T (*)(ManagedAsset*))(Il2CppBase() + 0x4A9A45C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_InitMarerials() {
		return ((T (*)(ManagedAsset*))(Il2CppBase() + 0x4A9A464))(this);
	}
	template <typename T = void> T set_InitMarerials(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ManagedAsset*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4A9A46C))(this, value);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ManagedAsset*))(Il2CppBase() + 0x4A9A474))(this);
	}
	template <typename T = void> T Init_1(uintptr_t pool, int32_t assetID, bool needSetParent) {
		return ((T (*)(ManagedAsset*, uintptr_t, int32_t, bool))(Il2CppBase() + 0x4A9A50C))(this, pool, assetID, needSetParent);
	}
	template <typename T = void> T Despawn() {
		return ((T (*)(ManagedAsset*))(Il2CppBase() + 0x4A9A7F0))(this);
	}
	template <typename T = void> T Despawn_1(float delay) {
		return ((T (*)(ManagedAsset*, float))(Il2CppBase() + 0x4A9AC34))(this, delay);
	}
	template <typename T = void> T SetParent() {
		return ((T (*)(ManagedAsset*))(Il2CppBase() + 0x4A9A600))(this);
	}
	template <typename T = void> T DetachParent() {
		return ((T (*)(ManagedAsset*))(Il2CppBase() + 0x4A9AE90))(this);
	}
	template <typename T = void> T SetAssetID(int32_t assetID) {
		return ((T (*)(ManagedAsset*, int32_t))(Il2CppBase() + 0x4A9AFA4))(this, assetID);
	}
	template <typename T = void> T RecoveMaterial() {
		return ((T (*)(ManagedAsset*))(Il2CppBase() + 0x4A9A9A0))(this);
	}
	template <typename T = bool> T IsDestroyed() {
		return ((T (*)(ManagedAsset*))(Il2CppBase() + 0x4A9B04C))(this);
	}

};

}
