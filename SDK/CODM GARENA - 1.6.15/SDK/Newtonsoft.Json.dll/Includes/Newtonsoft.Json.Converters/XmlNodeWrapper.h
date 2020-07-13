#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Converters {

class XmlNodeWrapper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Converters", "XmlNodeWrapper"));
	}

	template <typename T = uintptr_t> T& _node() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _childNodes() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _attributes() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_WrappedNode() {
		return ((T (*)(XmlNodeWrapper*))(Il2CppBase() + 0x4098918))(this);
	}
	template <typename T = uintptr_t> T get_NodeType() {
		return ((T (*)(XmlNodeWrapper*))(Il2CppBase() + 0x40A30F0))(this);
	}
	template <typename T = Il2CppString*> T get_LocalName() {
		return ((T (*)(XmlNodeWrapper*))(Il2CppBase() + 0x40A3124))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_ChildNodes() {
		return ((T (*)(XmlNodeWrapper*))(Il2CppBase() + 0x40A3158))(this);
	}
	template <typename T = uintptr_t> static T WrapNode(uintptr_t node) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x409B634))(0, node);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_Attributes() {
		return ((T (*)(XmlNodeWrapper*))(Il2CppBase() + 0x40A34F8))(this);
	}
	template <typename T = uintptr_t> T get_ParentNode() {
		return ((T (*)(XmlNodeWrapper*))(Il2CppBase() + 0x40A38C4))(this);
	}
	template <typename T = Il2CppString*> T get_Value() {
		return ((T (*)(XmlNodeWrapper*))(Il2CppBase() + 0x40A39E8))(this);
	}
	template <typename T = void> T set_Value(Il2CppString* value) {
		return ((T (*)(XmlNodeWrapper*, Il2CppString*))(Il2CppBase() + 0x4098648))(this, value);
	}
	template <typename T = uintptr_t> T AppendChild(uintptr_t newChild) {
		return ((T (*)(XmlNodeWrapper*, uintptr_t))(Il2CppBase() + 0x40A3A1C))(this, newChild);
	}
	template <typename T = Il2CppString*> T get_NamespaceUri() {
		return ((T (*)(XmlNodeWrapper*))(Il2CppBase() + 0x40A3AE4))(this);
	}

};

}
