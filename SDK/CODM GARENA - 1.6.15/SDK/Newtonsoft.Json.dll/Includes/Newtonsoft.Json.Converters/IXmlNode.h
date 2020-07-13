#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Converters {

class IXmlNode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Converters", "IXmlNode"));
	}


	template <typename T = uintptr_t> T get_NodeType() {
		return ((T (*)(IXmlNode*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_LocalName() {
		return ((T (*)(IXmlNode*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_ChildNodes() {
		return ((T (*)(IXmlNode*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_Attributes() {
		return ((T (*)(IXmlNode*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_ParentNode() {
		return ((T (*)(IXmlNode*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_Value() {
		return ((T (*)(IXmlNode*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T AppendChild(uintptr_t newChild) {
		return ((T (*)(IXmlNode*, uintptr_t))(Il2CppBase() + 0x0))(this, newChild);
	}
	template <typename T = Il2CppString*> T get_NamespaceUri() {
		return ((T (*)(IXmlNode*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_WrappedNode() {
		return ((T (*)(IXmlNode*))(Il2CppBase() + 0x0))(this);
	}

};

}
