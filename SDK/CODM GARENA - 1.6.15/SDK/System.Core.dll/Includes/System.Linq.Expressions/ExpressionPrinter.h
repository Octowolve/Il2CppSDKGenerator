#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Linq.Expressions {

class ExpressionPrinter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "System.Linq.Expressions", "ExpressionPrinter"));
	}

	template <typename T = uintptr_t> T& builder() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppString*> static T ToString(uintptr_t expression) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4EC351C))(0, expression);
	}
	template <typename T = Il2CppString*> static T ToString_1(uintptr_t init) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4EC343C))(0, init);
	}
	template <typename T = Il2CppString*> static T ToString_2(uintptr_t binding) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4EC36A8))(0, binding);
	}
	template <typename T = void> T Print(Il2CppString* str) {
		return ((T (*)(ExpressionPrinter*, Il2CppString*))(Il2CppBase() + 0x4EC3770))(this, str);
	}
	template <typename T = void> T Print_1(uintptr_t obj) {
		return ((T (*)(ExpressionPrinter*, uintptr_t))(Il2CppBase() + 0x4EC379C))(this, obj);
	}
	template <typename T = void> T Print_2(Il2CppString* str, Il2CppArray<uintptr_t>* objs) {
		return ((T (*)(ExpressionPrinter*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EC37C8))(this, str, objs);
	}
	template <typename T = void> T VisitElementInitializer(uintptr_t initializer) {
		return ((T (*)(ExpressionPrinter*, uintptr_t))(Il2CppBase() + 0x4EC37F4))(this, initializer);
	}
	template <typename T = void> T VisitUnary(uintptr_t unary) {
		return ((T (*)(ExpressionPrinter*, uintptr_t))(Il2CppBase() + 0x4EC38CC))(this, unary);
	}
	template <typename T = Il2CppString*> static T OperatorToString(uintptr_t binary) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4EC3C3C))(0, binary);
	}
	template <typename T = bool> static T IsBoolean(uintptr_t expression) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4EC3F90))(0, expression);
	}
	template <typename T = void> T PrintArrayIndex(uintptr_t index) {
		return ((T (*)(ExpressionPrinter*, uintptr_t))(Il2CppBase() + 0x4EC40E0))(this, index);
	}
	template <typename T = void> T VisitBinary(uintptr_t binary) {
		return ((T (*)(ExpressionPrinter*, uintptr_t))(Il2CppBase() + 0x4EC41C4))(this, binary);
	}
	template <typename T = void> T VisitTypeIs(uintptr_t type) {
		return ((T (*)(ExpressionPrinter*, uintptr_t))(Il2CppBase() + 0x4EC4368))(this, type);
	}
	template <typename T = void> T VisitConstant(uintptr_t constant) {
		return ((T (*)(ExpressionPrinter*, uintptr_t))(Il2CppBase() + 0x4EC452C))(this, constant);
	}
	template <typename T = bool> static T HasStringRepresentation(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4EC4694))(0, obj);
	}
	template <typename T = void> T VisitConditional(uintptr_t conditional) {
		return ((T (*)(ExpressionPrinter*, uintptr_t))(Il2CppBase() + 0x4EC4794))(this, conditional);
	}
	template <typename T = void> T VisitParameter(uintptr_t parameter) {
		return ((T (*)(ExpressionPrinter*, uintptr_t))(Il2CppBase() + 0x4EC48C0))(this, parameter);
	}
	template <typename T = void> T VisitMemberAccess(uintptr_t access) {
		return ((T (*)(ExpressionPrinter*, uintptr_t))(Il2CppBase() + 0x4EC4974))(this, access);
	}
	template <typename T = void> T VisitMethodCall(uintptr_t call) {
		return ((T (*)(ExpressionPrinter*, uintptr_t))(Il2CppBase() + 0x4EC4B28))(this, call);
	}
	template <typename T = void> T VisitMemberAssignment(uintptr_t assignment) {
		return ((T (*)(ExpressionPrinter*, uintptr_t))(Il2CppBase() + 0x4EC4C78))(this, assignment);
	}
	template <typename T = void> T VisitMemberMemberBinding(uintptr_t binding) {
		return ((T (*)(ExpressionPrinter*, uintptr_t))(Il2CppBase() + 0x4EC4DD8))(this, binding);
	}
	template <typename T = void> T VisitMemberListBinding(uintptr_t binding) {
		return ((T (*)(ExpressionPrinter*, uintptr_t))(Il2CppBase() + 0x4EC4F50))(this, binding);
	}
	template <typename T = void> T VisitList(void* list, void* visitor) {
		return ((T (*)(ExpressionPrinter*, void*, void*))(Il2CppBase() + 0x282B8A8))(this, list, visitor);
	}
	template <typename T = void> T VisitLambda(uintptr_t lambda) {
		return ((T (*)(ExpressionPrinter*, uintptr_t))(Il2CppBase() + 0x4EC50C8))(this, lambda);
	}
	template <typename T = void> T VisitNew(uintptr_t nex) {
		return ((T (*)(ExpressionPrinter*, uintptr_t))(Il2CppBase() + 0x4EC52D0))(this, nex);
	}
	template <typename T = void> T VisitMemberInit(uintptr_t init) {
		return ((T (*)(ExpressionPrinter*, uintptr_t))(Il2CppBase() + 0x4EC564C))(this, init);
	}
	template <typename T = void> T VisitListInit(uintptr_t init) {
		return ((T (*)(ExpressionPrinter*, uintptr_t))(Il2CppBase() + 0x4EC57C0))(this, init);
	}
	template <typename T = void> T VisitNewArray(uintptr_t newArray) {
		return ((T (*)(ExpressionPrinter*, uintptr_t))(Il2CppBase() + 0x4EC5934))(this, newArray);
	}
	template <typename T = void> T VisitInvocation(uintptr_t invocation) {
		return ((T (*)(ExpressionPrinter*, uintptr_t))(Il2CppBase() + 0x4EC5AD0))(this, invocation);
	}

};

}
