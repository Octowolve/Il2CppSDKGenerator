#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class ServiceType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "ServiceType"));
	}

	template <typename T = int32_t> T& Value() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& Account() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& Pay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& Sns() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& Common() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& LBS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& Notice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& Report() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& QuickLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& Network() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_op_Equality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_op_Inequality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Equals() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHashCode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = int32_t> T get_Value() {
		return ((T (*)(ServiceType*))(Il2CppBase() + 0x4439F94))(this);
	}
	template <typename T = void> T set_Value(int32_t value) {
		return ((T (*)(ServiceType*, int32_t))(Il2CppBase() + 0x4439F8C))(this, value);
	}
	template <typename T = bool> static T op_Equality(uintptr_t s1, uintptr_t s2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4439F9C))(0, s1, s2);
	}
	template <typename T = bool> static T op_Inequality(uintptr_t s1, uintptr_t s2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x443A09C))(0, s1, s2);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(ServiceType*, uintptr_t))(Il2CppBase() + 0x443A19C))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ServiceType*))(Il2CppBase() + 0x443A310))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_Equals(uintptr_t P0) {
		return ((T (*)(ServiceType*, uintptr_t))(Il2CppBase() + 0x443A574))(this, P0);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetHashCode() {
		return ((T (*)(ServiceType*))(Il2CppBase() + 0x443A57C))(this);
	}

};

}
