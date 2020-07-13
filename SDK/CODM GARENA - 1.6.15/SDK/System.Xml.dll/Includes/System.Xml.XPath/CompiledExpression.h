#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class CompiledExpression
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "CompiledExpression"));
	}

	template <typename T = uintptr_t> T& _nsm() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _expr() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _sorters() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& rawExpression() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T SetContext(uintptr_t nsManager) {
		return ((T (*)(CompiledExpression*, uintptr_t))(Il2CppBase() + 0x4D02A1C))(this, nsManager);
	}
	template <typename T = void> T SetContext_1(uintptr_t nsResolver) {
		return ((T (*)(CompiledExpression*, uintptr_t))(Il2CppBase() + 0x4D02A24))(this, nsResolver);
	}
	template <typename T = uintptr_t> T get_NamespaceManager() {
		return ((T (*)(CompiledExpression*))(Il2CppBase() + 0x4D02A2C))(this);
	}
	template <typename T = uintptr_t> T EvaluateNodeSet(uintptr_t iter) {
		return ((T (*)(CompiledExpression*, uintptr_t))(Il2CppBase() + 0x4D02A34))(this, iter);
	}

};

}
