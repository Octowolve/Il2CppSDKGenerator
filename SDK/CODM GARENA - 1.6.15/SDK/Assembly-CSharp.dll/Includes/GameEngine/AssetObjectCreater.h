#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AssetObjectCreater
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AssetObjectCreater"));
	}

	template <typename T = int32_t> T& m_AssetID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_CallBackObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_bBeginCreate() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_BeginLoadAsset() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = bool> T& m_LoadAssetComplete() {
		return *(T*)((uintptr_t)this + 0x12);
	}
	template <typename T = bool> T& m_TimeLimitExceeded() {
		return *(T*)((uintptr_t)this + 0x13);
	}
	template <typename T = float> T& m_TimeLimit() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_TickStartTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_HasException() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_AssetType() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_LoadStyle() {
		return *(T*)((uintptr_t)this + 0x24);
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
	template <typename T = uintptr_t> static T& __Hotfix0_IsTimeLimitExceeded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndLoadAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResourceComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FinishAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = bool> T get_IsBeginCreate() {
		return ((T (*)(AssetObjectCreater*))(Il2CppBase() + 0x2B9C990))(this);
	}
	template <typename T = float> T get_TimeLimitPerTick() {
		return ((T (*)(AssetObjectCreater*))(Il2CppBase() + 0x2B9C998))(this);
	}
	template <typename T = void> T set_TimeLimitPerTick(float value) {
		return ((T (*)(AssetObjectCreater*, float))(Il2CppBase() + 0x2B9C9A0))(this, value);
	}
	template <typename T = bool> T get_DoLimitPerTickTime() {
		return ((T (*)(AssetObjectCreater*))(Il2CppBase() + 0x2B9C9A8))(this);
	}
	template <typename T = void> T LoadAssetAsync(int32_t AssetID, uintptr_t assetType, uintptr_t CallBackObject) {
		return ((T (*)(AssetObjectCreater*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2B9C9D4))(this, AssetID, assetType, CallBackObject);
	}
	template <typename T = void> T LoadAssetSync(int32_t AssetID, uintptr_t assetType, uintptr_t CallBackObject) {
		return ((T (*)(AssetObjectCreater*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2B9CABC))(this, AssetID, assetType, CallBackObject);
	}
	template <typename T = bool> T IsTimeLimitExceeded() {
		return ((T (*)(AssetObjectCreater*))(Il2CppBase() + 0x2B9CBA0))(this);
	}
	template <typename T = void> T Tick(float fDeltaTime) {
		return ((T (*)(AssetObjectCreater*, float))(Il2CppBase() + 0x2B9CC90))(this, fDeltaTime);
	}
	template <typename T = bool> T CreateAsset() {
		return ((T (*)(AssetObjectCreater*))(Il2CppBase() + 0x2B9CD44))(this);
	}
	template <typename T = void> T LoadAsset() {
		return ((T (*)(AssetObjectCreater*))(Il2CppBase() + 0x2B9CE14))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(AssetObjectCreater*))(Il2CppBase() + 0x2B9CF60))(this);
	}
	template <typename T = bool> T LoadComplete() {
		return ((T (*)(AssetObjectCreater*))(Il2CppBase() + 0x2B9D0A8))(this);
	}
	template <typename T = bool> T EndLoadAsset() {
		return ((T (*)(AssetObjectCreater*))(Il2CppBase() + 0x2B9D148))(this);
	}
	template <typename T = void> T OnResourceComplete(int32_t AssetID, uintptr_t CallBackData) {
		return ((T (*)(AssetObjectCreater*, int32_t, uintptr_t))(Il2CppBase() + 0x2B9D1F0))(this, AssetID, CallBackData);
	}
	template <typename T = bool> T FinishAsset() {
		return ((T (*)(AssetObjectCreater*))(Il2CppBase() + 0x2B9D2B4))(this);
	}

};

}
