#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class ConnectorResult
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "ConnectorResult"));
	}

	template <typename T = uintptr_t> T& ErrorCode() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& Reason() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Extend() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Extend2() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int64_t> T& Extend3() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix2_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix3_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix4_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Success() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_op_Equality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_op_Inequality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_op_Equality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_op_Inequality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Equals() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHashCode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WriteTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadFrom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = void> T Reset(uintptr_t error, Il2CppString* reason) {
		return ((T (*)(ConnectorResult*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4520C0C))(this, error, reason);
	}
	template <typename T = void> T Success() {
		return ((T (*)(ConnectorResult*))(Il2CppBase() + 0x4520CDC))(this);
	}
	template <typename T = bool> T IsSuccess() {
		return ((T (*)(ConnectorResult*))(Il2CppBase() + 0x4520DE4))(this);
	}
	template <typename T = bool> static T op_Equality(uintptr_t result, uintptr_t errorCode) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4520E90))(0, result, errorCode);
	}
	template <typename T = bool> static T op_Inequality(uintptr_t result, uintptr_t errorCode) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4520F58))(0, result, errorCode);
	}
	template <typename T = bool> static T op_Equality_1(uintptr_t r1, uintptr_t r2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4521020))(0, r1, r2);
	}
	template <typename T = bool> static T op_Inequality_1(uintptr_t r1, uintptr_t r2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x45210F0))(0, r1, r2);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(ConnectorResult*, uintptr_t))(Il2CppBase() + 0x45211C0))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ConnectorResult*))(Il2CppBase() + 0x45212E4))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ConnectorResult*))(Il2CppBase() + 0x452138C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t writer) {
		return ((T (*)(ConnectorResult*, uintptr_t))(Il2CppBase() + 0x452158C))(this, writer);
	}
	template <typename T = void> T ReadFrom(uintptr_t reader) {
		return ((T (*)(ConnectorResult*, uintptr_t))(Il2CppBase() + 0x45216B8))(this, reader);
	}
	template <typename T = bool> T xLuaBaseProxy_Equals(uintptr_t P0) {
		return ((T (*)(ConnectorResult*, uintptr_t))(Il2CppBase() + 0x45217C8))(this, P0);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetHashCode() {
		return ((T (*)(ConnectorResult*))(Il2CppBase() + 0x45217D0))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(ConnectorResult*))(Il2CppBase() + 0x45217D8))(this);
	}

};

}
