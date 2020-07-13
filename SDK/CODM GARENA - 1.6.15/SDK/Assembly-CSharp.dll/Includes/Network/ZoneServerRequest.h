#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class ZoneServerRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "ZoneServerRequest"));
	}

	template <typename T = uintptr_t> T& SendPkgBody() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& SequenceId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& SendCmd() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& RecvCmd() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& FirstSendTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& LastSendTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& TryCount() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& ShouldBeResent() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint64_t> T& ModeRouteId() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& CanSendWhenDisconnect() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& ShowModel() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = bool> T& HasRecycle() {
		return *(T*)((uintptr_t)this + 0x32);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T get_SendPkgBody() {
		return ((T (*)(ZoneServerRequest*))(Il2CppBase() + 0x43AE250))(this);
	}
	template <typename T = void> T set_SendPkgBody(uintptr_t value) {
		return ((T (*)(ZoneServerRequest*, uintptr_t))(Il2CppBase() + 0x43B28D0))(this, value);
	}
	template <typename T = int32_t> T get_SequenceId() {
		return ((T (*)(ZoneServerRequest*))(Il2CppBase() + 0x43B1924))(this);
	}
	template <typename T = void> T set_SequenceId(int32_t value) {
		return ((T (*)(ZoneServerRequest*, int32_t))(Il2CppBase() + 0x43B2918))(this, value);
	}
	template <typename T = uint32_t> T get_SendCmd() {
		return ((T (*)(ZoneServerRequest*))(Il2CppBase() + 0x43B236C))(this);
	}
	template <typename T = void> T set_SendCmd(uint32_t value) {
		return ((T (*)(ZoneServerRequest*, uint32_t))(Il2CppBase() + 0x43B2900))(this, value);
	}
	template <typename T = uint32_t> T get_RecvCmd() {
		return ((T (*)(ZoneServerRequest*))(Il2CppBase() + 0x43AE5F4))(this);
	}
	template <typename T = void> T set_RecvCmd(uint32_t value) {
		return ((T (*)(ZoneServerRequest*, uint32_t))(Il2CppBase() + 0x43B2908))(this, value);
	}
	template <typename T = float> T get_FirstSendTime() {
		return ((T (*)(ZoneServerRequest*))(Il2CppBase() + 0x43B3B50))(this);
	}
	template <typename T = void> T set_FirstSendTime(float value) {
		return ((T (*)(ZoneServerRequest*, float))(Il2CppBase() + 0x43AE5E4))(this, value);
	}
	template <typename T = float> T get_LastSendTime() {
		return ((T (*)(ZoneServerRequest*))(Il2CppBase() + 0x43B1914))(this);
	}
	template <typename T = void> T set_LastSendTime(float value) {
		return ((T (*)(ZoneServerRequest*, float))(Il2CppBase() + 0x43AE5EC))(this, value);
	}
	template <typename T = int32_t> T get_TryCount() {
		return ((T (*)(ZoneServerRequest*))(Il2CppBase() + 0x43AE5DC))(this);
	}
	template <typename T = void> T set_TryCount(int32_t value) {
		return ((T (*)(ZoneServerRequest*, int32_t))(Il2CppBase() + 0x43B1A60))(this, value);
	}
	template <typename T = bool> T get_ShouldBeResent() {
		return ((T (*)(ZoneServerRequest*))(Il2CppBase() + 0x43B191C))(this);
	}
	template <typename T = void> T set_ShouldBeResent(bool value) {
		return ((T (*)(ZoneServerRequest*, bool))(Il2CppBase() + 0x43B28E8))(this, value);
	}
	template <typename T = uint64_t> T get_ModeRouteId() {
		return ((T (*)(ZoneServerRequest*))(Il2CppBase() + 0x43B2910))(this);
	}
	template <typename T = void> T set_ModeRouteId(uint64_t value) {
		return ((T (*)(ZoneServerRequest*, uint64_t))(Il2CppBase() + 0x43B28D8))(this, value);
	}
	template <typename T = bool> T get_CanSendWhenDisconnect() {
		return ((T (*)(ZoneServerRequest*))(Il2CppBase() + 0x43B133C))(this);
	}
	template <typename T = void> T set_CanSendWhenDisconnect(bool value) {
		return ((T (*)(ZoneServerRequest*, bool))(Il2CppBase() + 0x43B28F0))(this, value);
	}
	template <typename T = bool> T get_ShowModel() {
		return ((T (*)(ZoneServerRequest*))(Il2CppBase() + 0x43AE258))(this);
	}
	template <typename T = void> T set_ShowModel(bool value) {
		return ((T (*)(ZoneServerRequest*, bool))(Il2CppBase() + 0x43B28F8))(this, value);
	}
	template <typename T = bool> T get_HasRecycle() {
		return ((T (*)(ZoneServerRequest*))(Il2CppBase() + 0x43B3B58))(this);
	}
	template <typename T = void> T set_HasRecycle(bool value) {
		return ((T (*)(ZoneServerRequest*, bool))(Il2CppBase() + 0x43B3B60))(this, value);
	}
	template <typename T = void> T OnRecycle() {
		return ((T (*)(ZoneServerRequest*))(Il2CppBase() + 0x43B3B68))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ZoneServerRequest*))(Il2CppBase() + 0x43B3CB0))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(ZoneServerRequest*))(Il2CppBase() + 0x43B41A8))(this);
	}

};

}
