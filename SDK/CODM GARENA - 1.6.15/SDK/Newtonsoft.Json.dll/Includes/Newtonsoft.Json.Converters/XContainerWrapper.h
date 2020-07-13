#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Converters {

class XContainerWrapper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Converters", "XContainerWrapper"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _childNodes() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_Container() {
		return ((T (*)(XContainerWrapper*))(Il2CppBase() + 0x4095568))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_ChildNodes() {
		return ((T (*)(XContainerWrapper*))(Il2CppBase() + 0x4095698))(this);
	}
	template <typename T = uintptr_t> T get_ParentNode() {
		return ((T (*)(XContainerWrapper*))(Il2CppBase() + 0x4095A28))(this);
	}
	template <typename T = uintptr_t> static T WrapNode(uintptr_t node) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4094F60))(0, node);
	}
	template <typename T = uintptr_t> T AppendChild(uintptr_t newChild) {
		return ((T (*)(XContainerWrapper*, uintptr_t))(Il2CppBase() + 0x4095C98))(this, newChild);
	}

};

}
