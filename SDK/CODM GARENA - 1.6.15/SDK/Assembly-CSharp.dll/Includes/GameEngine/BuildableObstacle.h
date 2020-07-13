#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class BuildableObstacle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "BuildableObstacle"));
	}

	template <typename T = uintptr_t> T& OutsideTrigger() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& InsideTrigger() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> T& OneAward() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& CurrentHealth() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& TestShow() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& AllBlockAnim() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& AllMesh() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& BlocksBuildEffectSockets() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& BlocksBreakEffectSockets() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& m_BuildEffectSocket() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppList<int32_t>*> T& downBlocks() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppList<int32_t>*> T& upBlocks() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& HUD() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = int32_t> T& Expect_Health() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& m_Pawn() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& m_CurrentDelayBlock() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLevelObjectType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncUsability() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyInteractiveContext() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InvokeShowBuildEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayBuildOneBlock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayLostOneBlock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayShowInner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = int32_t> T get_Max_Health() {
		return ((T (*)(BuildableObstacle*))(Il2CppBase() + 0x418C310))(this);
	}
	template <typename T = int32_t> T get_OneSufferTime() {
		return ((T (*)(BuildableObstacle*))(Il2CppBase() + 0x418C318))(this);
	}
	template <typename T = float> T get_BuildWaitTime() {
		return ((T (*)(BuildableObstacle*))(Il2CppBase() + 0x418C320))(this);
	}
	template <typename T = int32_t> T get_CurrentHealth() {
		return ((T (*)(BuildableObstacle*))(Il2CppBase() + 0x418C328))(this);
	}
	template <typename T = void> T set_CurrentHealth(int32_t value) {
		return ((T (*)(BuildableObstacle*, int32_t))(Il2CppBase() + 0x418C330))(this, value);
	}
	template <typename T = uintptr_t> T get_HUD() {
		return ((T (*)(BuildableObstacle*))(Il2CppBase() + 0x418C338))(this);
	}
	template <typename T = void> T set_HUD(uintptr_t value) {
		return ((T (*)(BuildableObstacle*, uintptr_t))(Il2CppBase() + 0x418C340))(this, value);
	}
	template <typename T = int32_t> T get_Expect_Health() {
		return ((T (*)(BuildableObstacle*))(Il2CppBase() + 0x418C348))(this);
	}
	template <typename T = void> T set_Expect_Health(int32_t value) {
		return ((T (*)(BuildableObstacle*, int32_t))(Il2CppBase() + 0x418C350))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BuildableObstacle*))(Il2CppBase() + 0x418C358))(this);
	}
	template <typename T = uintptr_t> T GetLevelObjectType() {
		return ((T (*)(BuildableObstacle*))(Il2CppBase() + 0x418C4E8))(this);
	}
	template <typename T = void> T OnSyncUsability(bool available) {
		return ((T (*)(BuildableObstacle*, bool))(Il2CppBase() + 0x418C588))(this, available);
	}
	template <typename T = void> T NotifyInteractiveContext(bool show) {
		return ((T (*)(BuildableObstacle*, bool))(Il2CppBase() + 0x418C7AC))(this, show);
	}
	template <typename T = void> T OnSyncStatus(uintptr_t status) {
		return ((T (*)(BuildableObstacle*, uintptr_t))(Il2CppBase() + 0x418C84C))(this, status);
	}
	template <typename T = void> T InvokeShowBuildEffect() {
		return ((T (*)(BuildableObstacle*))(Il2CppBase() + 0x418D3B0))(this);
	}
	template <typename T = void> T PlayBuildOneBlock(uint32_t PlayerId) {
		return ((T (*)(BuildableObstacle*, uint32_t))(Il2CppBase() + 0x418CFB8))(this, PlayerId);
	}
	template <typename T = void> T PlayLostOneBlock() {
		return ((T (*)(BuildableObstacle*))(Il2CppBase() + 0x418CAF8))(this);
	}
	template <typename T = void> T DelayShow(int32_t index) {
		return ((T (*)(BuildableObstacle*, int32_t))(Il2CppBase() + 0x418D620))(this, index);
	}
	template <typename T = void> T DelayShowInner() {
		return ((T (*)(BuildableObstacle*))(Il2CppBase() + 0x418D86C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(BuildableObstacle*))(Il2CppBase() + 0x418D984))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetLevelObjectType() {
		return ((T (*)(BuildableObstacle*))(Il2CppBase() + 0x418D98C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncUsability(bool P0) {
		return ((T (*)(BuildableObstacle*, bool))(Il2CppBase() + 0x418D994))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_NotifyInteractiveContext(bool P0) {
		return ((T (*)(BuildableObstacle*, bool))(Il2CppBase() + 0x418D99C))(this, P0);
	}

};

}
