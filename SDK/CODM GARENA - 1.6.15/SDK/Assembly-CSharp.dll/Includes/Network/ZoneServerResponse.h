#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class ZoneServerResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "ZoneServerResponse"));
	}

	template <typename T = uintptr_t> T& Body() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& SequenceId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& RecvCmd() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& IsSuccess() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Result() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& Duration() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& HasRecycle() {
		return *(T*)((uintptr_t)this + 0x20);
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

	template <typename T = uintptr_t> T get_Body() {
		return ((T (*)(ZoneServerResponse*))(Il2CppBase() + 0x43B00B4))(this);
	}
	template <typename T = void> T set_Body(uintptr_t value) {
		return ((T (*)(ZoneServerResponse*, uintptr_t))(Il2CppBase() + 0x43ABC94))(this, value);
	}
	template <typename T = int32_t> T get_SequenceId() {
		return ((T (*)(ZoneServerResponse*))(Il2CppBase() + 0x43B28B8))(this);
	}
	template <typename T = void> T set_SequenceId(int32_t value) {
		return ((T (*)(ZoneServerResponse*, int32_t))(Il2CppBase() + 0x43ABC84))(this, value);
	}
	template <typename T = int32_t> T get_RecvCmd() {
		return ((T (*)(ZoneServerResponse*))(Il2CppBase() + 0x43B28C0))(this);
	}
	template <typename T = void> T set_RecvCmd(int32_t value) {
		return ((T (*)(ZoneServerResponse*, int32_t))(Il2CppBase() + 0x43ABC7C))(this, value);
	}
	template <typename T = bool> T get_IsSuccess() {
		return ((T (*)(ZoneServerResponse*))(Il2CppBase() + 0x43B00AC))(this);
	}
	template <typename T = void> T set_IsSuccess(bool value) {
		return ((T (*)(ZoneServerResponse*, bool))(Il2CppBase() + 0x43ABC74))(this, value);
	}
	template <typename T = int32_t> T get_Result() {
		return ((T (*)(ZoneServerResponse*))(Il2CppBase() + 0x43B4254))(this);
	}
	template <typename T = void> T set_Result(int32_t value) {
		return ((T (*)(ZoneServerResponse*, int32_t))(Il2CppBase() + 0x43ABC8C))(this, value);
	}
	template <typename T = float> T get_Duration() {
		return ((T (*)(ZoneServerResponse*))(Il2CppBase() + 0x43B425C))(this);
	}
	template <typename T = void> T set_Duration(float value) {
		return ((T (*)(ZoneServerResponse*, float))(Il2CppBase() + 0x43B28C8))(this, value);
	}
	template <typename T = bool> T get_HasRecycle() {
		return ((T (*)(ZoneServerResponse*))(Il2CppBase() + 0x43B4264))(this);
	}
	template <typename T = void> T set_HasRecycle(bool value) {
		return ((T (*)(ZoneServerResponse*, bool))(Il2CppBase() + 0x43B426C))(this, value);
	}
	template <typename T = void> T OnRecycle() {
		return ((T (*)(ZoneServerResponse*))(Il2CppBase() + 0x43B4274))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ZoneServerResponse*))(Il2CppBase() + 0x43B432C))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(ZoneServerResponse*))(Il2CppBase() + 0x43B4490))(this);
	}

};

}
