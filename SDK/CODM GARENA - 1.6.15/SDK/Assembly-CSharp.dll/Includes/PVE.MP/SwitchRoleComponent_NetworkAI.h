#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class SwitchRoleComponentNetworkAI
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "SwitchRoleComponent_NetworkAI"));
	}

	template <typename T = int32_t> static T& LastInitFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& FramingCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> static T& EnableFraming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> T& m_CacheInitModel() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& m_IsInFraming() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& m_CurrnetAIPawn() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchRole() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadMeshComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecycleCacheModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Destroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T Init(uintptr_t pawn) {
		return ((T (*)(SwitchRoleComponentNetworkAI*, uintptr_t))(Il2CppBase() + 0x435BC48))(this, pawn);
	}
	template <typename T = void> T SwitchRole() {
		return ((T (*)(SwitchRoleComponentNetworkAI*))(Il2CppBase() + 0x435BD90))(this);
	}
	template <typename T = void> T OnLoadMeshComplete(int32_t assetID, uintptr_t param) {
		return ((T (*)(SwitchRoleComponentNetworkAI*, int32_t, uintptr_t))(Il2CppBase() + 0x435C2E0))(this, assetID, param);
	}
	template <typename T = void> T RecycleCacheModel() {
		return ((T (*)(SwitchRoleComponentNetworkAI*))(Il2CppBase() + 0x435C150))(this);
	}
	template <typename T = void> T InitModel() {
		return ((T (*)(SwitchRoleComponentNetworkAI*))(Il2CppBase() + 0x435C8D8))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(SwitchRoleComponentNetworkAI*, float))(Il2CppBase() + 0x435CB1C))(this, deltaTime);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(SwitchRoleComponentNetworkAI*))(Il2CppBase() + 0x435CCD8))(this);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(SwitchRoleComponentNetworkAI*))(Il2CppBase() + 0x435CDB8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(SwitchRoleComponentNetworkAI*, uintptr_t))(Il2CppBase() + 0x435CF28))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SwitchRole() {
		return ((T (*)(SwitchRoleComponentNetworkAI*))(Il2CppBase() + 0x435CF30))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(SwitchRoleComponentNetworkAI*, float))(Il2CppBase() + 0x435CF38))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(SwitchRoleComponentNetworkAI*))(Il2CppBase() + 0x435CF40))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Destroy() {
		return ((T (*)(SwitchRoleComponentNetworkAI*))(Il2CppBase() + 0x435CF48))(this);
	}

};

}
