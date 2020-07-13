#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class LuaInteractionActor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "LuaInteractionActor"));
	}

	template <typename T = bool> T& active() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& triggerCollider() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& actorConfig() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& actorInfo() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& insideTriggerVolume() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& dugEffect() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& activeEffect() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLocalPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStateChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReleaseModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InteractiveMine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsGravestone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMineClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayShakeAni() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayActiveAni() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowDugEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MineActiveEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	template <typename T = bool> T get_canTrigger() {
		return ((T (*)(LuaInteractionActor*))(Il2CppBase() + 0x4A91EC4))(this);
	}
	template <typename T = uintptr_t> T get_modelAsset() {
		return ((T (*)(LuaInteractionActor*))(Il2CppBase() + 0x4A9204C))(this);
	}
	template <typename T = Il2CppString*> T get_syncAnimStateName() {
		return ((T (*)(LuaInteractionActor*))(Il2CppBase() + 0x4A92368))(this);
	}
	template <typename T = Il2CppString*> T get_buttonSpriteName() {
		return ((T (*)(LuaInteractionActor*))(Il2CppBase() + 0x4A9265C))(this);
	}
	template <typename T = Il2CppString*> T get_buttonMessageText() {
		return ((T (*)(LuaInteractionActor*))(Il2CppBase() + 0x4A92970))(this);
	}
	template <typename T = Il2CppString*> T get_buttonContentText() {
		return ((T (*)(LuaInteractionActor*))(Il2CppBase() + 0x4A92CE0))(this);
	}
	template <typename T = void> T Init(uint32_t actorID, uint32_t configID) {
		return ((T (*)(LuaInteractionActor*, uint32_t, uint32_t))(Il2CppBase() + 0x4A93050))(this, actorID, configID);
	}
	template <typename T = bool> T IsLocalPlayer(uintptr_t other) {
		return ((T (*)(LuaInteractionActor*, uintptr_t))(Il2CppBase() + 0x4A9338C))(this, other);
	}
	template <typename T = void> T OnTriggerEnter(uintptr_t other) {
		return ((T (*)(LuaInteractionActor*, uintptr_t))(Il2CppBase() + 0x4A93598))(this, other);
	}
	template <typename T = void> T OnClick() {
		return ((T (*)(LuaInteractionActor*))(Il2CppBase() + 0x4A93D28))(this);
	}
	template <typename T = void> T OnTriggerExit(uintptr_t other) {
		return ((T (*)(LuaInteractionActor*, uintptr_t))(Il2CppBase() + 0x4A940BC))(this, other);
	}
	template <typename T = void> T OnStateChange(uint32_t newState) {
		return ((T (*)(LuaInteractionActor*, uint32_t))(Il2CppBase() + 0x4A943F4))(this, newState);
	}
	template <typename T = void> T SetHidden(bool hidden) {
		return ((T (*)(LuaInteractionActor*, bool))(Il2CppBase() + 0x4A94854))(this, hidden);
	}
	template <typename T = void> T SyncHUD() {
		return ((T (*)(LuaInteractionActor*))(Il2CppBase() + 0x4A94AB8))(this);
	}
	template <typename T = void> T SyncTip() {
		return ((T (*)(LuaInteractionActor*))(Il2CppBase() + 0x4A94B70))(this);
	}
	template <typename T = void> T DestroyComponent() {
		return ((T (*)(LuaInteractionActor*))(Il2CppBase() + 0x4A94FF0))(this);
	}
	template <typename T = void> T ReleaseModel() {
		return ((T (*)(LuaInteractionActor*))(Il2CppBase() + 0x4A953DC))(this);
	}
	template <typename T = uintptr_t> T UpdateModel() {
		return ((T (*)(LuaInteractionActor*))(Il2CppBase() + 0x4A95730))(this);
	}
	template <typename T = void> T InteractiveMine(bool state) {
		return ((T (*)(LuaInteractionActor*, bool))(Il2CppBase() + 0x4A93678))(this, state);
	}
	template <typename T = bool> T IsCanTrigger() {
		return ((T (*)(LuaInteractionActor*))(Il2CppBase() + 0x4A95C6C))(this);
	}
	template <typename T = bool> T IsGravestone() {
		return ((T (*)(LuaInteractionActor*))(Il2CppBase() + 0x4A94724))(this);
	}
	template <typename T = void> T OnMineClick() {
		return ((T (*)(LuaInteractionActor*))(Il2CppBase() + 0x4A95D10))(this);
	}
	template <typename T = void> T PlayShakeAni(bool state) {
		return ((T (*)(LuaInteractionActor*, bool))(Il2CppBase() + 0x4A95E5C))(this, state);
	}
	template <typename T = void> T PlayActiveAni() {
		return ((T (*)(LuaInteractionActor*))(Il2CppBase() + 0x4A96008))(this);
	}
	template <typename T = int32_t> T get_DugEffectAssetId() {
		return ((T (*)(LuaInteractionActor*))(Il2CppBase() + 0x4A961CC))(this);
	}
	template <typename T = void> T ShowDugEffect(bool state) {
		return ((T (*)(LuaInteractionActor*, bool))(Il2CppBase() + 0x4A96214))(this, state);
	}
	template <typename T = int32_t> T get_ActiveEffectAssetId() {
		return ((T (*)(LuaInteractionActor*))(Il2CppBase() + 0x4A96548))(this);
	}
	template <typename T = void> T MineActiveEffect(bool state) {
		return ((T (*)(LuaInteractionActor*, bool))(Il2CppBase() + 0x4A96648))(this, state);
	}
	template <typename T = void> T xLuaBaseProxy_SetHidden(bool P0) {
		return ((T (*)(LuaInteractionActor*, bool))(Il2CppBase() + 0x4A968DC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_DestroyComponent() {
		return ((T (*)(LuaInteractionActor*))(Il2CppBase() + 0x4A968E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ReleaseModel() {
		return ((T (*)(LuaInteractionActor*))(Il2CppBase() + 0x4A968E4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_UpdateModel() {
		return ((T (*)(LuaInteractionActor*))(Il2CppBase() + 0x4A968E8))(this);
	}

};

}
