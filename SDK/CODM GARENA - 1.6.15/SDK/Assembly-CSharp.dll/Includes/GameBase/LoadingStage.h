#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class LoadingStage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "LoadingStage"));
	}

	template <typename T = uintptr_t> T& m_Preloader() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_EventChannel() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLeave() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPreloadInventory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPreloadAssetList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPreloadCommonMatchAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZoneEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadMapComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreloadAssets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T Init() {
		return ((T (*)(LoadingStage*))(Il2CppBase() + 0x195E8F8))(this);
	}
	template <typename T = void> T OnEvent(uintptr_t Msg) {
		return ((T (*)(LoadingStage*, uintptr_t))(Il2CppBase() + 0x195EA54))(this, Msg);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(LoadingStage*))(Il2CppBase() + 0x195EB2C))(this);
	}
	template <typename T = void> T OnLeave() {
		return ((T (*)(LoadingStage*))(Il2CppBase() + 0x195ED94))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(LoadingStage*, float))(Il2CppBase() + 0x195EEA4))(this, deltaTime);
	}
	template <typename T = void> T OnPreloadInventory(uintptr_t Msg) {
		return ((T (*)(LoadingStage*, uintptr_t))(Il2CppBase() + 0x195EF68))(this, Msg);
	}
	template <typename T = void> T OnPreloadAssetList(uintptr_t Msg) {
		return ((T (*)(LoadingStage*, uintptr_t))(Il2CppBase() + 0x195F268))(this, Msg);
	}
	template <typename T = void> T OnPreloadCommonMatchAsset(uintptr_t Msg) {
		return ((T (*)(LoadingStage*, uintptr_t))(Il2CppBase() + 0x195F560))(this, Msg);
	}
	template <typename T = void> T OnZoneEvent(uintptr_t msg) {
		return ((T (*)(LoadingStage*, uintptr_t))(Il2CppBase() + 0x195F624))(this, msg);
	}
	template <typename T = void> T OnLoadMapComplete(uintptr_t msg) {
		return ((T (*)(LoadingStage*, uintptr_t))(Il2CppBase() + 0x195F76C))(this, msg);
	}
	template <typename T = void> T PreloadAssets(int32_t LoadMapID) {
		return ((T (*)(LoadingStage*, int32_t))(Il2CppBase() + 0x1960134))(this, LoadMapID);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LoadingStage*))(Il2CppBase() + 0x196091C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEvent(uintptr_t P0) {
		return ((T (*)(LoadingStage*, uintptr_t))(Il2CppBase() + 0x1960924))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnter() {
		return ((T (*)(LoadingStage*))(Il2CppBase() + 0x196092C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnLeave() {
		return ((T (*)(LoadingStage*))(Il2CppBase() + 0x1960934))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(LoadingStage*, float))(Il2CppBase() + 0x196093C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnZoneEvent(uintptr_t P0) {
		return ((T (*)(LoadingStage*, uintptr_t))(Il2CppBase() + 0x1960944))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnLoadMapComplete(uintptr_t P0) {
		return ((T (*)(LoadingStage*, uintptr_t))(Il2CppBase() + 0x196094C))(this, P0);
	}

};

}
