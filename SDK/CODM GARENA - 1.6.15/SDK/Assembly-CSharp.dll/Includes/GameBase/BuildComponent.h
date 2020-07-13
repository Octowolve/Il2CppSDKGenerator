#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BuildComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BuildComponent"));
	}

	template <typename T = uintptr_t> T& m_BuildInfo() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_Building() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_NextBildingTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_BuildActor() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& m_CanBuildHere() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_DelayBuildTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_LastBuildTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPlayingBuildAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginBuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTickEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelBuildHereByPawnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayBuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelBuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_QuickBuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndBuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = bool> T get_IsBuilding() {
		return ((T (*)(BuildComponent*))(Il2CppBase() + 0x3C4A144))(this);
	}
	template <typename T = void> T set_IsBuilding(bool value) {
		return ((T (*)(BuildComponent*, bool))(Il2CppBase() + 0x3C4A14C))(this, value);
	}
	template <typename T = bool> T IsPlayingBuildAnim() {
		return ((T (*)(BuildComponent*))(Il2CppBase() + 0x3C4A218))(this);
	}
	template <typename T = void> T set_DelayBuildTime(float value) {
		return ((T (*)(BuildComponent*, float))(Il2CppBase() + 0x3C4A30C))(this, value);
	}
	template <typename T = void> T BeginBuild(uintptr_t info) {
		return ((T (*)(BuildComponent*, uintptr_t))(Il2CppBase() + 0x3C4A314))(this, info);
	}
	template <typename T = void> T OnLoadComplete(int32_t assetID, uintptr_t obj) {
		return ((T (*)(BuildComponent*, int32_t, uintptr_t))(Il2CppBase() + 0x3C4A8E8))(this, assetID, obj);
	}
	template <typename T = void> T ShowActor(int32_t assetID) {
		return ((T (*)(BuildComponent*, int32_t))(Il2CppBase() + 0x3C4A59C))(this, assetID);
	}
	template <typename T = void> T UpdateTickEnable() {
		return ((T (*)(BuildComponent*))(Il2CppBase() + 0x3C4A154))(this);
	}
	template <typename T = void> T Init(uintptr_t pawn) {
		return ((T (*)(BuildComponent*, uintptr_t))(Il2CppBase() + 0x3C4A9C0))(this, pawn);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BuildComponent*, float))(Il2CppBase() + 0x3C4AA7C))(this, deltaTime);
	}
	template <typename T = bool> T CancelBuildHereByPawnState() {
		return ((T (*)(BuildComponent*))(Il2CppBase() + 0x3C4B960))(this);
	}
	template <typename T = void> T DelayBuild() {
		return ((T (*)(BuildComponent*))(Il2CppBase() + 0x3C4B6C8))(this);
	}
	template <typename T = void> T CancelBuild() {
		return ((T (*)(BuildComponent*))(Il2CppBase() + 0x3C4BCA4))(this);
	}
	template <typename T = void> T HideActor() {
		return ((T (*)(BuildComponent*))(Il2CppBase() + 0x3C4BAC4))(this);
	}
	template <typename T = void> T QuickBuild(uintptr_t info) {
		return ((T (*)(BuildComponent*, uintptr_t))(Il2CppBase() + 0x3C4BDFC))(this, info);
	}
	template <typename T = void> T EndBuild() {
		return ((T (*)(BuildComponent*))(Il2CppBase() + 0x3C4B0E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(BuildComponent*, uintptr_t))(Il2CppBase() + 0x3C4BF00))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BuildComponent*, float))(Il2CppBase() + 0x3C4BF08))(this, P0);
	}

};

}
