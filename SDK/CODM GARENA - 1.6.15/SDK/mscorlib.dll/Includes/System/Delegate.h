#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class Delegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "Delegate"));
	}

	template <typename T = uintptr_t> T& method_ptr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& invoke_impl() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_target() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& method() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& delegate_trampoline() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& method_code() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& method_info() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& original_method_info() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& data() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = uintptr_t> T get_Method() {
		return ((T (*)(Delegate*))(Il2CppBase() + 0x366C948))(this);
	}
	template <typename T = uintptr_t> T get_Target() {
		return ((T (*)(Delegate*))(Il2CppBase() + 0x366CA4C))(this);
	}
	template <typename T = uintptr_t> static T CreateDelegate_internal(uintptr_t type, uintptr_t target, uintptr_t info, bool throwOnBindFailure) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x366CA54))(0, type, target, info, throwOnBindFailure);
	}
	template <typename T = void> T SetMulticastInvoke() {
		return ((T (*)(Delegate*))(Il2CppBase() + 0x366CA6C))(this);
	}
	template <typename T = bool> static T arg_type_match(uintptr_t delArgType, uintptr_t argType) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x366CA70))(0, delArgType, argType);
	}
	template <typename T = bool> static T return_type_match(uintptr_t delReturnType, uintptr_t returnType) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x366CADC))(0, delReturnType, returnType);
	}
	template <typename T = uintptr_t> static T CreateDelegate(uintptr_t type, uintptr_t firstArgument, uintptr_t method, bool throwOnBindFailure) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x366CB50))(0, type, firstArgument, method, throwOnBindFailure);
	}
	template <typename T = uintptr_t> static T CreateDelegate_1(uintptr_t type, uintptr_t firstArgument, uintptr_t method) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x366D414))(0, type, firstArgument, method);
	}
	template <typename T = uintptr_t> static T CreateDelegate_2(uintptr_t type, uintptr_t method, bool throwOnBindFailure) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x366D434))(0, type, method, throwOnBindFailure);
	}
	template <typename T = uintptr_t> static T CreateDelegate_3(uintptr_t type, uintptr_t method) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x366D45C))(0, type, method);
	}
	template <typename T = uintptr_t> static T CreateDelegate_4(uintptr_t type, uintptr_t target, Il2CppString* method) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x366D488))(0, type, target, method);
	}
	template <typename T = uintptr_t> static T GetCandidateMethod(uintptr_t type, uintptr_t target, Il2CppString* method, uintptr_t bflags, bool ignoreCase, bool throwOnBindFailure) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*, uintptr_t, bool, bool))(Il2CppBase() + 0x366D4D4))(0, type, target, method, bflags, ignoreCase, throwOnBindFailure);
	}
	template <typename T = uintptr_t> static T CreateDelegate_5(uintptr_t type, uintptr_t target, Il2CppString* method, bool ignoreCase, bool throwOnBindFailure) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*, bool, bool))(Il2CppBase() + 0x366D990))(0, type, target, method, ignoreCase, throwOnBindFailure);
	}
	template <typename T = uintptr_t> static T CreateDelegate_6(uintptr_t type, uintptr_t target, Il2CppString* method) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x366DA98))(0, type, target, method);
	}
	template <typename T = uintptr_t> static T CreateDelegate_7(uintptr_t type, uintptr_t target, Il2CppString* method, bool ignoreCase, bool throwOnBindFailure) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*, bool, bool))(Il2CppBase() + 0x366DABC))(0, type, target, method, ignoreCase, throwOnBindFailure);
	}
	template <typename T = uintptr_t> static T CreateDelegate_8(uintptr_t type, uintptr_t target, Il2CppString* method, bool ignoreCase) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x366D4AC))(0, type, target, method, ignoreCase);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(Delegate*))(Il2CppBase() + 0x366DBD4))(this);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(Delegate*, uintptr_t))(Il2CppBase() + 0x366DBDC))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Delegate*))(Il2CppBase() + 0x366DD50))(this);
	}
	template <typename T = void> T GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(Delegate*, uintptr_t, uintptr_t))(Il2CppBase() + 0x366DD98))(this, info, context);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetInvocationList() {
		return ((T (*)(Delegate*))(Il2CppBase() + 0x366E074))(this);
	}
	template <typename T = uintptr_t> static T Combine(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x361D1B8))(0, a, b);
	}
	template <typename T = uintptr_t> static T Combine_1(Il2CppArray<uintptr_t>* delegates) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x366E160))(0, delegates);
	}
	template <typename T = uintptr_t> T CombineImpl(uintptr_t d) {
		return ((T (*)(Delegate*, uintptr_t))(Il2CppBase() + 0x366E1C4))(this, d);
	}
	template <typename T = uintptr_t> static T Remove(uintptr_t source, uintptr_t value) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x361D480))(0, source, value);
	}
	template <typename T = uintptr_t> T RemoveImpl(uintptr_t d) {
		return ((T (*)(Delegate*, uintptr_t))(Il2CppBase() + 0x366E2B0))(this, d);
	}
	template <typename T = bool> static T op_Equality(uintptr_t d1, uintptr_t d2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x366E2E0))(0, d1, d2);
	}
	template <typename T = bool> static T op_Inequality(uintptr_t d1, uintptr_t d2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x366E320))(0, d1, d2);
	}

};

}
