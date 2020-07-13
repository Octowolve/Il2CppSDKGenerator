#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ComposeInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ComposeInfo"));
	}

	template <typename T = int32_t> T& AssetID() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& ActorID() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& ComposeStep() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& data() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& mainMesh() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& RaiMesh() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mainAllTransform() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& RaiAllTransform() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& AssetInfo() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& WeaponAssetInfoList() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& is3PWeapon() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& isStaticBatched() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = bool> T& cacheComposePart() {
		return *(T*)((uintptr_t)this + 0x2A);
	}
	template <typename T = bool> T& ComposeAfterLoad() {
		return *(T*)((uintptr_t)this + 0x2B);
	}
	template <typename T = bool> T& IsLoadComplete() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& IsComposeComplete() {
		return *(T*)((uintptr_t)this + 0x2D);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ComposeComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsReadyForCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsComposing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Init(int32_t assetID, Il2CppList<uintptr_t>* weaponAssetInfoList, bool callbakAfterCompose, int32_t actorID, bool is3P, bool cacheCompose) {
		return ((T (*)(ComposeInfo*, int32_t, Il2CppList<uintptr_t>*, bool, int32_t, bool, bool))(Il2CppBase() + 0x249F488))(this, assetID, weaponAssetInfoList, callbakAfterCompose, actorID, is3P, cacheCompose);
	}
	template <typename T = void> T LoadComplete() {
		return ((T (*)(ComposeInfo*))(Il2CppBase() + 0x249F4B8))(this);
	}
	template <typename T = void> T ComposeComplete() {
		return ((T (*)(ComposeInfo*))(Il2CppBase() + 0x249F4C0))(this);
	}
	template <typename T = bool> T IsReadyForCallback() {
		return ((T (*)(ComposeInfo*))(Il2CppBase() + 0x249F4C8))(this);
	}
	template <typename T = bool> T IsComposing() {
		return ((T (*)(ComposeInfo*))(Il2CppBase() + 0x249F4D0))(this);
	}

};

}
