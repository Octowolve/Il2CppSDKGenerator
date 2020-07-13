#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace InGameNewGuide {

class BRNewGuideDragSign
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InGameNewGuide", "BRNewGuide_DragSign"));
	}

	template <typename T = uintptr_t> T& m_BoxController() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_SignOperateController() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_HighLighttItem() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_SignBtnView() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHighLightItemView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Check() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckNearbyListView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInterface() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T OnEvent(uintptr_t Msg) {
		return ((T (*)(BRNewGuideDragSign*, uintptr_t))(Il2CppBase() + 0x4999A5C))(this, Msg);
	}
	template <typename T = void> T ShowEffect() {
		return ((T (*)(BRNewGuideDragSign*))(Il2CppBase() + 0x4999BE8))(this);
	}
	template <typename T = uintptr_t> T GetHighLightItemView(uintptr_t id) {
		return ((T (*)(BRNewGuideDragSign*, uintptr_t))(Il2CppBase() + 0x499A0A4))(this, id);
	}
	template <typename T = void> T CloseEffect() {
		return ((T (*)(BRNewGuideDragSign*))(Il2CppBase() + 0x499A46C))(this);
	}
	template <typename T = void> T OnDestory() {
		return ((T (*)(BRNewGuideDragSign*))(Il2CppBase() + 0x499A6A8))(this);
	}
	template <typename T = bool> T Check() {
		return ((T (*)(BRNewGuideDragSign*))(Il2CppBase() + 0x499A760))(this);
	}
	template <typename T = bool> T CheckNearbyListView(uintptr_t id) {
		return ((T (*)(BRNewGuideDragSign*, uintptr_t))(Il2CppBase() + 0x499AA54))(this, id);
	}
	template <typename T = uintptr_t> T GetController(uintptr_t id) {
		return ((T (*)(BRNewGuideDragSign*, uintptr_t))(Il2CppBase() + 0x499A200))(this, id);
	}
	template <typename T = uintptr_t> T GetInterface(uintptr_t ID) {
		return ((T (*)(BRNewGuideDragSign*, uintptr_t))(Il2CppBase() + 0x499ABB8))(this, ID);
	}
	template <typename T = void> T xLuaBaseProxy_OnEvent(uintptr_t P0) {
		return ((T (*)(BRNewGuideDragSign*, uintptr_t))(Il2CppBase() + 0x499AC60))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ShowEffect() {
		return ((T (*)(BRNewGuideDragSign*))(Il2CppBase() + 0x499AC68))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CloseEffect() {
		return ((T (*)(BRNewGuideDragSign*))(Il2CppBase() + 0x499AC70))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestory() {
		return ((T (*)(BRNewGuideDragSign*))(Il2CppBase() + 0x499AC78))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_Check() {
		return ((T (*)(BRNewGuideDragSign*))(Il2CppBase() + 0x499AC80))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetInterface(uintptr_t P0) {
		return ((T (*)(BRNewGuideDragSign*, uintptr_t))(Il2CppBase() + 0x499AC88))(this, P0);
	}

};

}
