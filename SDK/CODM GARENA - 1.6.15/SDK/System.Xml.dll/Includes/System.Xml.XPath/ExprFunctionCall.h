#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class ExprFunctionCall
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "ExprFunctionCall"));
	}

	template <typename T = uintptr_t> T& _name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& resolvedName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _args() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map41() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T Factory(uintptr_t name, uintptr_t args, uintptr_t ctx) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D067E8))(0, name, args, ctx);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ExprFunctionCall*))(Il2CppBase() + 0x4D07F04))(this);
	}
	template <typename T = uintptr_t> T get_ReturnType() {
		return ((T (*)(ExprFunctionCall*))(Il2CppBase() + 0x4D08384))(this);
	}
	template <typename T = uintptr_t> T GetReturnType(uintptr_t iter) {
		return ((T (*)(ExprFunctionCall*, uintptr_t))(Il2CppBase() + 0x4D0838C))(this, iter);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetArgTypes(uintptr_t iter) {
		return ((T (*)(ExprFunctionCall*, uintptr_t))(Il2CppBase() + 0x4D08394))(this, iter);
	}
	template <typename T = uintptr_t> T Evaluate(uintptr_t iter) {
		return ((T (*)(ExprFunctionCall*, uintptr_t))(Il2CppBase() + 0x4D0853C))(this, iter);
	}
	template <typename T = bool> T get_Peer() {
		return ((T (*)(ExprFunctionCall*))(Il2CppBase() + 0x4D08AD8))(this);
	}

};

}
