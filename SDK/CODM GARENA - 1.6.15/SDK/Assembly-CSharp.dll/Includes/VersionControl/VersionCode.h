#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace VersionControl {

class VersionCode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "VersionControl", "VersionCode"));
	}

	template <typename T = int32_t> T& MainVersion() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& SubVersion() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& ProgramVersion() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& ResourceVersion() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Parse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Equals() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHashCode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CompareTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CompareTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Equals() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_op_Equality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_op_Inequality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_op_LessThan() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_op_LessThanOrEqual() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_op_GreaterThan() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_op_GreaterThanOrEqual() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = int32_t> T get_MainVersion() {
		return ((T (*)(VersionCode*))(Il2CppBase() + 0x488B50C))(this);
	}
	template <typename T = void> T set_MainVersion(int32_t value) {
		return ((T (*)(VersionCode*, int32_t))(Il2CppBase() + 0x488B514))(this, value);
	}
	template <typename T = int32_t> T get_SubVersion() {
		return ((T (*)(VersionCode*))(Il2CppBase() + 0x488B51C))(this);
	}
	template <typename T = void> T set_SubVersion(int32_t value) {
		return ((T (*)(VersionCode*, int32_t))(Il2CppBase() + 0x488B524))(this, value);
	}
	template <typename T = int32_t> T get_ProgramVersion() {
		return ((T (*)(VersionCode*))(Il2CppBase() + 0x488B52C))(this);
	}
	template <typename T = void> T set_ProgramVersion(int32_t value) {
		return ((T (*)(VersionCode*, int32_t))(Il2CppBase() + 0x488B534))(this, value);
	}
	template <typename T = int32_t> T get_ResourceVersion() {
		return ((T (*)(VersionCode*))(Il2CppBase() + 0x488B53C))(this);
	}
	template <typename T = void> T set_ResourceVersion(int32_t value) {
		return ((T (*)(VersionCode*, int32_t))(Il2CppBase() + 0x488B544))(this, value);
	}
	template <typename T = uintptr_t> static T Parse(Il2CppString* versionCodeString) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x488B54C))(0, versionCodeString);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(VersionCode*, uintptr_t))(Il2CppBase() + 0x488B830))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(VersionCode*))(Il2CppBase() + 0x488B94C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(VersionCode*))(Il2CppBase() + 0x488BA0C))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(VersionCode*))(Il2CppBase() + 0x488BE14))(this);
	}
	template <typename T = int32_t> T CompareTo(uintptr_t obj) {
		return ((T (*)(VersionCode*, uintptr_t))(Il2CppBase() + 0x488BEF4))(this, obj);
	}
	template <typename T = int32_t> T CompareTo_1(uintptr_t other) {
		return ((T (*)(VersionCode*, uintptr_t))(Il2CppBase() + 0x488C018))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(VersionCode*, uintptr_t))(Il2CppBase() + 0x488C230))(this, other);
	}
	template <typename T = bool> static T op_Equality(uintptr_t v1, uintptr_t v2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x488C138))(0, v1, v2);
	}
	template <typename T = bool> static T op_Inequality(uintptr_t v1, uintptr_t v2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x488C34C))(0, v1, v2);
	}
	template <typename T = bool> static T op_LessThan(uintptr_t v1, uintptr_t v2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x488C3F8))(0, v1, v2);
	}
	template <typename T = bool> static T op_LessThanOrEqual(uintptr_t v1, uintptr_t v2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x488C4E4))(0, v1, v2);
	}
	template <typename T = bool> static T op_GreaterThan(uintptr_t v1, uintptr_t v2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x488C5D4))(0, v1, v2);
	}
	template <typename T = bool> static T op_GreaterThanOrEqual(uintptr_t v1, uintptr_t v2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x488C684))(0, v1, v2);
	}
	template <typename T = bool> T xLuaBaseProxy_Equals(uintptr_t P0) {
		return ((T (*)(VersionCode*, uintptr_t))(Il2CppBase() + 0x488C734))(this, P0);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetHashCode() {
		return ((T (*)(VersionCode*))(Il2CppBase() + 0x488C73C))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(VersionCode*))(Il2CppBase() + 0x488C744))(this);
	}

};

}
