#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Converters {

class XmlDocumentTypeWrapper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Converters", "XmlDocumentTypeWrapper"));
	}

	template <typename T = uintptr_t> T& _documentType() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(XmlDocumentTypeWrapper*))(Il2CppBase() + 0x4097BD8))(this);
	}
	template <typename T = Il2CppString*> T get_System() {
		return ((T (*)(XmlDocumentTypeWrapper*))(Il2CppBase() + 0x4097C0C))(this);
	}
	template <typename T = Il2CppString*> T get_Public() {
		return ((T (*)(XmlDocumentTypeWrapper*))(Il2CppBase() + 0x4097C38))(this);
	}
	template <typename T = Il2CppString*> T get_InternalSubset() {
		return ((T (*)(XmlDocumentTypeWrapper*))(Il2CppBase() + 0x4097C64))(this);
	}
	template <typename T = Il2CppString*> T get_LocalName() {
		return ((T (*)(XmlDocumentTypeWrapper*))(Il2CppBase() + 0x4097C90))(this);
	}

};

}
