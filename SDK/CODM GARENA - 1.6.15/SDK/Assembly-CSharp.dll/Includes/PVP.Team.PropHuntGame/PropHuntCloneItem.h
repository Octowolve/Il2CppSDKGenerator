#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.PropHuntGame {

class PropHuntCloneItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.PropHuntGame", "PropHuntCloneItem"));
	}

	template <typename T = uint32_t> T& m_UID() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& m_Asset() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& m_TriggerCollider() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_TriggerMeshCollider() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& m_IsVisible() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& m_Layer() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppVector3> T& m_Scale() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& m_HaveInit() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& m_BaseItem() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanBeDamagedBy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TakeDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeLayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = uintptr_t> T get_BaseItem() {
		return ((T (*)(PropHuntCloneItem*))(Il2CppBase() + 0x3494D34))(this);
	}
	template <typename T = uintptr_t> T get_ServerType() {
		return ((T (*)(PropHuntCloneItem*))(Il2CppBase() + 0x3494D3C))(this);
	}
	template <typename T = uintptr_t> T get_FireColliderShape() {
		return ((T (*)(PropHuntCloneItem*))(Il2CppBase() + 0x3494D44))(this);
	}
	template <typename T = void> T Init(uint32_t uid, uint32_t actorId, float hp, Il2CppVector3 scale) {
		return ((T (*)(PropHuntCloneItem*, uint32_t, uint32_t, float, Il2CppVector3))(Il2CppBase() + 0x3494D4C))(this, uid, actorId, hp, scale);
	}
	template <typename T = void> T InitAsset() {
		return ((T (*)(PropHuntCloneItem*))(Il2CppBase() + 0x3494E8C))(this);
	}
	template <typename T = void> T OnLoadAsset(int32_t assetId, uintptr_t param) {
		return ((T (*)(PropHuntCloneItem*, int32_t, uintptr_t))(Il2CppBase() + 0x3495090))(this, assetId, param);
	}
	template <typename T = bool> T CanBeDamagedBy(uintptr_t pawn) {
		return ((T (*)(PropHuntCloneItem*, uintptr_t))(Il2CppBase() + 0x349578C))(this, pawn);
	}
	template <typename T = bool> T get_DisplayImpactEffect() {
		return ((T (*)(PropHuntCloneItem*))(Il2CppBase() + 0x3495834))(this);
	}
	template <typename T = void> T TakeDamage(uintptr_t damageInfo) {
		return ((T (*)(PropHuntCloneItem*, uintptr_t))(Il2CppBase() + 0x349583C))(this, damageInfo);
	}
	template <typename T = void> T SetVisible(bool visible) {
		return ((T (*)(PropHuntCloneItem*, bool))(Il2CppBase() + 0x34958F4))(this, visible);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(PropHuntCloneItem*))(Il2CppBase() + 0x3495A28))(this);
	}
	template <typename T = void> T ClearItem() {
		return ((T (*)(PropHuntCloneItem*))(Il2CppBase() + 0x3495AD8))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(PropHuntCloneItem*))(Il2CppBase() + 0x3495CA4))(this);
	}
	template <typename T = void> T ChangeLayer(int32_t layer) {
		return ((T (*)(PropHuntCloneItem*, int32_t))(Il2CppBase() + 0x3495EC0))(this, layer);
	}
	template <typename T = bool> T xLuaBaseProxy_CanBeDamagedBy(uintptr_t P0) {
		return ((T (*)(PropHuntCloneItem*, uintptr_t))(Il2CppBase() + 0x3496024))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_TakeDamage(uintptr_t P0) {
		return ((T (*)(PropHuntCloneItem*, uintptr_t))(Il2CppBase() + 0x349602C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(PropHuntCloneItem*))(Il2CppBase() + 0x3496034))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(PropHuntCloneItem*))(Il2CppBase() + 0x349603C))(this);
	}

};

}
