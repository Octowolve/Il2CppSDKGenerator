#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Linq.Expressions {

class ExpressionVisitor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "System.Linq.Expressions", "ExpressionVisitor"));
	}


	template <typename T = void> T Visit(uintptr_t expression) {
		return ((T (*)(ExpressionVisitor*, uintptr_t))(Il2CppBase() + 0x4EC5C28))(this, expression);
	}
	template <typename T = void> T VisitBinding(uintptr_t binding) {
		return ((T (*)(ExpressionVisitor*, uintptr_t))(Il2CppBase() + 0x4EC6BC4))(this, binding);
	}
	template <typename T = void> T VisitElementInitializer(uintptr_t initializer) {
		return ((T (*)(ExpressionVisitor*, uintptr_t))(Il2CppBase() + 0x4EC7024))(this, initializer);
	}
	template <typename T = void> T VisitUnary(uintptr_t unary) {
		return ((T (*)(ExpressionVisitor*, uintptr_t))(Il2CppBase() + 0x4EC7058))(this, unary);
	}
	template <typename T = void> T VisitBinary(uintptr_t binary) {
		return ((T (*)(ExpressionVisitor*, uintptr_t))(Il2CppBase() + 0x4EC708C))(this, binary);
	}
	template <typename T = void> T VisitTypeIs(uintptr_t type) {
		return ((T (*)(ExpressionVisitor*, uintptr_t))(Il2CppBase() + 0x4EC70FC))(this, type);
	}
	template <typename T = void> T VisitConstant(uintptr_t constant) {
		return ((T (*)(ExpressionVisitor*, uintptr_t))(Il2CppBase() + 0x4EC7130))(this, constant);
	}
	template <typename T = void> T VisitConditional(uintptr_t conditional) {
		return ((T (*)(ExpressionVisitor*, uintptr_t))(Il2CppBase() + 0x4EC7134))(this, conditional);
	}
	template <typename T = void> T VisitParameter(uintptr_t parameter) {
		return ((T (*)(ExpressionVisitor*, uintptr_t))(Il2CppBase() + 0x4EC71A4))(this, parameter);
	}
	template <typename T = void> T VisitMemberAccess(uintptr_t member) {
		return ((T (*)(ExpressionVisitor*, uintptr_t))(Il2CppBase() + 0x4EC71A8))(this, member);
	}
	template <typename T = void> T VisitMethodCall(uintptr_t methodCall) {
		return ((T (*)(ExpressionVisitor*, uintptr_t))(Il2CppBase() + 0x4EC71DC))(this, methodCall);
	}
	template <typename T = void> T VisitList(void* list, void* visitor) {
		return ((T (*)(ExpressionVisitor*, void*, void*))(Il2CppBase() + 0x282B9C0))(this, list, visitor);
	}
	template <typename T = void> T VisitExpressionList(void* list) {
		return ((T (*)(ExpressionVisitor*, void*))(Il2CppBase() + 0x4EC7234))(this, list);
	}
	template <typename T = void> T VisitMemberAssignment(uintptr_t assignment) {
		return ((T (*)(ExpressionVisitor*, uintptr_t))(Il2CppBase() + 0x4EC732C))(this, assignment);
	}
	template <typename T = void> T VisitMemberMemberBinding(uintptr_t binding) {
		return ((T (*)(ExpressionVisitor*, uintptr_t))(Il2CppBase() + 0x4EC7360))(this, binding);
	}
	template <typename T = void> T VisitMemberListBinding(uintptr_t binding) {
		return ((T (*)(ExpressionVisitor*, uintptr_t))(Il2CppBase() + 0x4EC7394))(this, binding);
	}
	template <typename T = void> T VisitBindingList(void* list) {
		return ((T (*)(ExpressionVisitor*, void*))(Il2CppBase() + 0x4EC73C8))(this, list);
	}
	template <typename T = void> T VisitElementInitializerList(void* list) {
		return ((T (*)(ExpressionVisitor*, void*))(Il2CppBase() + 0x4EC74C0))(this, list);
	}
	template <typename T = void> T VisitLambda(uintptr_t lambda) {
		return ((T (*)(ExpressionVisitor*, uintptr_t))(Il2CppBase() + 0x4EC75B8))(this, lambda);
	}
	template <typename T = void> T VisitNew(uintptr_t nex) {
		return ((T (*)(ExpressionVisitor*, uintptr_t))(Il2CppBase() + 0x4EC75EC))(this, nex);
	}
	template <typename T = void> T VisitMemberInit(uintptr_t init) {
		return ((T (*)(ExpressionVisitor*, uintptr_t))(Il2CppBase() + 0x4EC7620))(this, init);
	}
	template <typename T = void> T VisitListInit(uintptr_t init) {
		return ((T (*)(ExpressionVisitor*, uintptr_t))(Il2CppBase() + 0x4EC7678))(this, init);
	}
	template <typename T = void> T VisitNewArray(uintptr_t newArray) {
		return ((T (*)(ExpressionVisitor*, uintptr_t))(Il2CppBase() + 0x4EC76D0))(this, newArray);
	}
	template <typename T = void> T VisitInvocation(uintptr_t invocation) {
		return ((T (*)(ExpressionVisitor*, uintptr_t))(Il2CppBase() + 0x4EC7704))(this, invocation);
	}

};

}
