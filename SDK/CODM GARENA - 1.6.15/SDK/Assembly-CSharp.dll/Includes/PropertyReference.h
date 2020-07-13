#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PropertyReference
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PropertyReference"));
	}

	template <typename T = uintptr_t> T& mTarget() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& mName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& mField() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& mProperty() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> static T& s_Hash() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPropertyType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Equals() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHashCode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Set() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Get() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Set() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Cache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Convert() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Convert() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_Convert() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_Convert() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = uintptr_t> T get_target() {
		return ((T (*)(PropertyReference*))(Il2CppBase() + 0x4CDB81C))(this);
	}
	template <typename T = void> T set_target(uintptr_t value) {
		return ((T (*)(PropertyReference*, uintptr_t))(Il2CppBase() + 0x4CDB824))(this, value);
	}
	template <typename T = Il2CppString*> T get_name() {
		return ((T (*)(PropertyReference*))(Il2CppBase() + 0x4CDB838))(this);
	}
	template <typename T = void> T set_name(Il2CppString* value) {
		return ((T (*)(PropertyReference*, Il2CppString*))(Il2CppBase() + 0x4CDB840))(this, value);
	}
	template <typename T = bool> T get_isValid() {
		return ((T (*)(PropertyReference*))(Il2CppBase() + 0x4CDACBC))(this);
	}
	template <typename T = bool> T get_isEnabled() {
		return ((T (*)(PropertyReference*))(Il2CppBase() + 0x4CDB854))(this);
	}
	template <typename T = uintptr_t> T GetPropertyType() {
		return ((T (*)(PropertyReference*))(Il2CppBase() + 0x4CDB4B8))(this);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(PropertyReference*, uintptr_t))(Il2CppBase() + 0x4CDBBDC))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(PropertyReference*))(Il2CppBase() + 0x4CDBDB4))(this);
	}
	template <typename T = void> T Set(uintptr_t target, Il2CppString* methodName) {
		return ((T (*)(PropertyReference*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4CDBEBC))(this, target, methodName);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(PropertyReference*))(Il2CppBase() + 0x4CDBFB0))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(PropertyReference*))(Il2CppBase() + 0x4CDABE8))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(PropertyReference*))(Il2CppBase() + 0x4CDC084))(this);
	}
	template <typename T = Il2CppString*> static T ToString_1(uintptr_t comp, Il2CppString* property) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4CDC184))(0, comp, property);
	}
	template <typename T = uintptr_t> T Get() {
		return ((T (*)(PropertyReference*))(Il2CppBase() + 0x4CDADCC))(this);
	}
	template <typename T = bool> T Set_1(uintptr_t value) {
		return ((T (*)(PropertyReference*, uintptr_t))(Il2CppBase() + 0x4CDAF44))(this, value);
	}
	template <typename T = bool> T Cache() {
		return ((T (*)(PropertyReference*))(Il2CppBase() + 0x4CDB9E0))(this);
	}
	template <typename T = bool> T Convert(uintptr_t value) {
		return ((T (*)(PropertyReference*, uintptr_t))(Il2CppBase() + 0x4CDC444))(this, value);
	}
	template <typename T = bool> static T Convert_1(uintptr_t from, uintptr_t to) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CDD290))(0, from, to);
	}
	template <typename T = bool> static T Convert_2(uintptr_t value, uintptr_t to) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CDD3AC))(0, value, to);
	}
	template <typename T = bool> static T Convert_3(uintptr_t value, uintptr_t from, uintptr_t to) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CDC61C))(0, value, from, to);
	}
	template <typename T = bool> T xLuaBaseProxy_Equals(uintptr_t P0) {
		return ((T (*)(PropertyReference*, uintptr_t))(Il2CppBase() + 0x4CDD5D8))(this, P0);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetHashCode() {
		return ((T (*)(PropertyReference*))(Il2CppBase() + 0x4CDD5E0))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(PropertyReference*))(Il2CppBase() + 0x4CDD5E8))(this);
	}

};

}
