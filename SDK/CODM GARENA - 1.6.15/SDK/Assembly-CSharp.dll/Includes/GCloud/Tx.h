#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class Tx
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "Tx"));
	}

	template <typename T = uintptr_t> T& TXNetworkChangedEvent() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_TXNetworkChangedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_TXNetworkChangedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Initialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNetworkState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDetailNetworkInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_setNetworkChangedCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_onNetworkChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T add_TXNetworkChangedEvent(uintptr_t value) {
		return ((T (*)(Tx*, uintptr_t))(Il2CppBase() + 0x442F28C))(this, value);
	}
	template <typename T = void> T remove_TXNetworkChangedEvent(uintptr_t value) {
		return ((T (*)(Tx*, uintptr_t))(Il2CppBase() + 0x44434DC))(this, value);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(Tx*))(Il2CppBase() + 0x4443704))(this);
	}
	template <typename T = uintptr_t> T GetType(Il2CppString* name) {
		return ((T (*)(Tx*, Il2CppString*))(Il2CppBase() + 0x4443AB4))(this, name);
	}
	template <typename T = void> T OnUpdate(float deltaTime) {
		return ((T (*)(Tx*, float))(Il2CppBase() + 0x4443C9C))(this, deltaTime);
	}
	template <typename T = uintptr_t> T GetNetworkState() {
		return ((T (*)(Tx*))(Il2CppBase() + 0x442FA3C))(this);
	}
	template <typename T = uintptr_t> T GetDetailNetworkInfo() {
		return ((T (*)(Tx*))(Il2CppBase() + 0x442FC64))(this);
	}
	template <typename T = void> T setNetworkChangedCallback() {
		return ((T (*)(Tx*))(Il2CppBase() + 0x44438CC))(this);
	}
	template <typename T = void> static T onNetworkChanged(uintptr_t state) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4443248))(0, state);
	}
	template <typename T = void> static T abase_target_unity_enable_ui_update() {
		return ((T (*)(void *))(Il2CppBase() + 0x44437FC))(0);
	}
	template <typename T = void> static T abase_target_unity_update() {
		return ((T (*)(void *))(Il2CppBase() + 0x4443D94))(0);
	}
	template <typename T = uintptr_t> static T abase_network_GetNetworkState() {
		return ((T (*)(void *))(Il2CppBase() + 0x4443E64))(0);
	}
	template <typename T = bool> static T abase_network_GetDetailNetworkInfo(Il2CppArray<uintptr_t>* data, int32_t size) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4443F34))(0, data, size);
	}
	template <typename T = void> static T abase_network_SetNetworkChangedCallback(uintptr_t callback) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x444402C))(0, callback);
	}
	template <typename T = void> T xLuaBaseProxy_OnUpdate(float P0) {
		return ((T (*)(Tx*, float))(Il2CppBase() + 0x44441B0))(this, P0);
	}

};

}
