#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AvatarObjectCreater
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AvatarObjectCreater"));
	}

	template <typename T = float> static T& TIME_OUT_THRESHOLD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_LastRecTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_Model() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& m_IsAvatarModelLoaded() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_AvatarModelComponent() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& m_CurrentStep() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAssetAsync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAssetSync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckTimeOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FinishAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInitAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndLoadAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T LoadAssetAsync(int32_t AssetID, uintptr_t assetType, uintptr_t CallBackObject) {
		return ((T (*)(AvatarObjectCreater*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3605EBC))(this, AssetID, assetType, CallBackObject);
	}
	template <typename T = void> T LoadAssetSync(int32_t AssetID, uintptr_t assetType, uintptr_t CallBackObject) {
		return ((T (*)(AvatarObjectCreater*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3606020))(this, AssetID, assetType, CallBackObject);
	}
	template <typename T = void> T LoadAsset() {
		return ((T (*)(AvatarObjectCreater*))(Il2CppBase() + 0x36061A4))(this);
	}
	template <typename T = void> T Tick(float fDeltaTime) {
		return ((T (*)(AvatarObjectCreater*, float))(Il2CppBase() + 0x3606370))(this, fDeltaTime);
	}
	template <typename T = bool> T CheckTimeOut() {
		return ((T (*)(AvatarObjectCreater*))(Il2CppBase() + 0x3606600))(this);
	}
	template <typename T = bool> T FinishAsset() {
		return ((T (*)(AvatarObjectCreater*))(Il2CppBase() + 0x3606978))(this);
	}
	template <typename T = bool> T PostInitAsset() {
		return ((T (*)(AvatarObjectCreater*))(Il2CppBase() + 0x3606534))(this);
	}
	template <typename T = bool> T LoadComplete() {
		return ((T (*)(AvatarObjectCreater*))(Il2CppBase() + 0x3606B90))(this);
	}
	template <typename T = bool> T EndLoadAsset() {
		return ((T (*)(AvatarObjectCreater*))(Il2CppBase() + 0x3606C44))(this);
	}
	template <typename T = void> T xLuaBaseProxy_LoadAssetAsync(int32_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(AvatarObjectCreater*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3606CF4))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_LoadAssetSync(int32_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(AvatarObjectCreater*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3606D14))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_LoadAsset() {
		return ((T (*)(AvatarObjectCreater*))(Il2CppBase() + 0x3606D34))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(AvatarObjectCreater*, float))(Il2CppBase() + 0x3606D3C))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_FinishAsset() {
		return ((T (*)(AvatarObjectCreater*))(Il2CppBase() + 0x3606D44))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_LoadComplete() {
		return ((T (*)(AvatarObjectCreater*))(Il2CppBase() + 0x3606D4C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_EndLoadAsset() {
		return ((T (*)(AvatarObjectCreater*))(Il2CppBase() + 0x3606D54))(this);
	}

};

}
