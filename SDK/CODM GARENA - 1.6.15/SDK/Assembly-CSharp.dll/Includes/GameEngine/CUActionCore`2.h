#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class CUActionCore2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "CUActionCore`2"));
	}

	template <typename T = uintptr_t> T& mCurAction() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& mActionMap() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& mInitMap() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& mCacheFadeTime() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& mCacheActionName() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& mLinkPlayer() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& FucTick() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& OnEvent() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__mg$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAcationMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_LoadAcationMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnregisterEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadActionMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_OnLoadActionMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_PlayAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_PlayAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnActionFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NullTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T LoadAcationMap(uintptr_t inOwner, int32_t inAssetID, uintptr_t inCallback) {
		return ((T (*)(CUActionCore2*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x48D71B0))(this, inOwner, inAssetID, inCallback);
	}
	template <typename T = void> T LoadAcationMap_1(uintptr_t inOwner, int32_t inMapAssetID, int32_t inLinkAssetID, uintptr_t inCallback) {
		return ((T (*)(CUActionCore2*, uintptr_t, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x48D7404))(this, inOwner, inMapAssetID, inLinkAssetID, inCallback);
	}
	template <typename T = void> T RegisterEvent(uintptr_t callback) {
		return ((T (*)(CUActionCore2*, uintptr_t))(Il2CppBase() + 0x48D76D8))(this, callback);
	}
	template <typename T = void> T UnregisterEvent(uintptr_t callback) {
		return ((T (*)(CUActionCore2*, uintptr_t))(Il2CppBase() + 0x48D77D8))(this, callback);
	}
	template <typename T = void> T OnLoadActionMap(int32_t inAssetID, uintptr_t inCallBackData) {
		return ((T (*)(CUActionCore2*, int32_t, uintptr_t))(Il2CppBase() + 0x48D78D4))(this, inAssetID, inCallBackData);
	}
	template <typename T = void> T OnLoadActionMap_1(Il2CppArray<uintptr_t>* inAssetID, uintptr_t inCallBackData) {
		return ((T (*)(CUActionCore2*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x48D7BD8))(this, inAssetID, inCallBackData);
	}
	template <typename T = void> T PlayAction(uintptr_t inOwner, int32_t inAssetID, float inFadeTime, uintptr_t callback) {
		return ((T (*)(CUActionCore2*, uintptr_t, int32_t, float, uintptr_t))(Il2CppBase() + 0x48D800C))(this, inOwner, inAssetID, inFadeTime, callback);
	}
	template <typename T = void> T OnLoadAction(int32_t inAssetID, uintptr_t inCallBackData) {
		return ((T (*)(CUActionCore2*, int32_t, uintptr_t))(Il2CppBase() + 0x48D827C))(this, inAssetID, inCallBackData);
	}
	template <typename T = void> T PlayAction_1(uintptr_t inOwner, Il2CppString* inActionName, float inFadeTime, uintptr_t callback) {
		return ((T (*)(CUActionCore2*, uintptr_t, Il2CppString*, float, uintptr_t))(Il2CppBase() + 0x48D8570))(this, inOwner, inActionName, inFadeTime, callback);
	}
	template <typename T = void> T PlayAction_2(uintptr_t inOwner, uintptr_t inAction, float inFadeTime, uintptr_t callback) {
		return ((T (*)(CUActionCore2*, uintptr_t, uintptr_t, float, uintptr_t))(Il2CppBase() + 0x48D88B0))(this, inOwner, inAction, inFadeTime, callback);
	}
	template <typename T = void> T OnActionFinish(uintptr_t inAction) {
		return ((T (*)(CUActionCore2*, uintptr_t))(Il2CppBase() + 0x48D8BF8))(this, inAction);
	}
	template <typename T = void> T StopAction(uintptr_t inOwner) {
		return ((T (*)(CUActionCore2*, uintptr_t))(Il2CppBase() + 0x48D8D3C))(this, inOwner);
	}
	template <typename T = bool> static T NullTick(float delta, uintptr_t inOwner) {
		return ((T (*)(void *, float, uintptr_t))(Il2CppBase() + 0x48D8F88))(0, delta, inOwner);
	}
	template <typename T = bool> T _Tick(float delta, uintptr_t inOwner) {
		return ((T (*)(CUActionCore2*, float, uintptr_t))(Il2CppBase() + 0x48D90B4))(this, delta, inOwner);
	}
	template <typename T = void> T Tick(uintptr_t inOwner, float delta) {
		return ((T (*)(CUActionCore2*, uintptr_t, float))(Il2CppBase() + 0x48D920C))(this, inOwner, delta);
	}
	template <typename T = void> T PreEvent(uintptr_t inEvent) {
		return ((T (*)(CUActionCore2*, uintptr_t))(Il2CppBase() + 0x48D935C))(this, inEvent);
	}
	template <typename T = void> T Shutdown(uintptr_t inOwner) {
		return ((T (*)(CUActionCore2*, uintptr_t))(Il2CppBase() + 0x48D9474))(this, inOwner);
	}

};

}
