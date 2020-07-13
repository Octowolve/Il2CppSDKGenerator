#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Converters {

class XObjectWrapper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Converters", "XObjectWrapper"));
	}

	template <typename T = Il2CppList<uintptr_t>*> static T& EmptyChildNodes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& _xmlObject() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T get_WrappedNode() {
		return ((T (*)(XObjectWrapper*))(Il2CppBase() + 0x4094D88))(this);
	}
	template <typename T = uintptr_t> T get_NodeType() {
		return ((T (*)(XObjectWrapper*))(Il2CppBase() + 0x40A3B18))(this);
	}
	template <typename T = Il2CppString*> T get_LocalName() {
		return ((T (*)(XObjectWrapper*))(Il2CppBase() + 0x40A3B4C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_ChildNodes() {
		return ((T (*)(XObjectWrapper*))(Il2CppBase() + 0x40A3B54))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_Attributes() {
		return ((T (*)(XObjectWrapper*))(Il2CppBase() + 0x40A3C04))(this);
	}
	template <typename T = uintptr_t> T get_ParentNode() {
		return ((T (*)(XObjectWrapper*))(Il2CppBase() + 0x40A3C0C))(this);
	}
	template <typename T = Il2CppString*> T get_Value() {
		return ((T (*)(XObjectWrapper*))(Il2CppBase() + 0x40A3C14))(this);
	}
	template <typename T = uintptr_t> T AppendChild(uintptr_t newChild) {
		return ((T (*)(XObjectWrapper*, uintptr_t))(Il2CppBase() + 0x40A3C1C))(this, newChild);
	}
	template <typename T = Il2CppString*> T get_NamespaceUri() {
		return ((T (*)(XObjectWrapper*))(Il2CppBase() + 0x40A3CB0))(this);
	}

};

}
