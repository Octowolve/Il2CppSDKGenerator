#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AvatarModelComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AvatarModelComponent"));
	}

	template <typename T = uintptr_t> T& m_LocalPlayer1PMesh() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_LocalPlayer3PMesh() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_AvatarAssetType() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_AvatarCreater() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAvatarModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInitMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAsyncLoadCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeAvatarModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAvatarLoadCompleted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateAvatarObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalAvatar3PModelResourceReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyOldAvatarModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchFirstThirdPersonAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T set_AvatarAssetType(uintptr_t value) {
		return ((T (*)(AvatarModelComponent*, uintptr_t))(Il2CppBase() + 0x36043A0))(this, value);
	}
	template <typename T = uintptr_t> T get_AvatarCreater() {
		return ((T (*)(AvatarModelComponent*))(Il2CppBase() + 0x36043A8))(this);
	}
	template <typename T = void> T LoadAvatarModel() {
		return ((T (*)(AvatarModelComponent*))(Il2CppBase() + 0x36043B0))(this);
	}
	template <typename T = void> T PostInitMesh() {
		return ((T (*)(AvatarModelComponent*))(Il2CppBase() + 0x36047D0))(this);
	}
	template <typename T = void> T ClearAsyncLoadCallback(uintptr_t pawn) {
		return ((T (*)(AvatarModelComponent*, uintptr_t))(Il2CppBase() + 0x3604C34))(this, pawn);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AvatarModelComponent*))(Il2CppBase() + 0x3604DB8))(this);
	}
	template <typename T = void> T ChangeAvatarModel(uintptr_t pawn, int32_t modelID) {
		return ((T (*)(AvatarModelComponent*, uintptr_t, int32_t))(Il2CppBase() + 0x360512C))(this, pawn, modelID);
	}
	template <typename T = void> T OnAvatarLoadCompleted() {
		return ((T (*)(AvatarModelComponent*))(Il2CppBase() + 0x3604910))(this);
	}
	template <typename T = uintptr_t> T CreateAvatarObject(int32_t AssetID) {
		return ((T (*)(AvatarModelComponent*, int32_t))(Il2CppBase() + 0x3605688))(this, AssetID);
	}
	template <typename T = void> T OnLocalAvatar3PModelResourceReady(int32_t assetID, uintptr_t obj) {
		return ((T (*)(AvatarModelComponent*, int32_t, uintptr_t))(Il2CppBase() + 0x36058C0))(this, assetID, obj);
	}
	template <typename T = void> T DestroyOldAvatarModel() {
		return ((T (*)(AvatarModelComponent*))(Il2CppBase() + 0x3605BA4))(this);
	}
	template <typename T = void> T SwitchFirstThirdPersonAvatar(bool show3P) {
		return ((T (*)(AvatarModelComponent*, bool))(Il2CppBase() + 0x3604F04))(this, show3P);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(AvatarModelComponent*))(Il2CppBase() + 0x3605EB4))(this);
	}

};

}
