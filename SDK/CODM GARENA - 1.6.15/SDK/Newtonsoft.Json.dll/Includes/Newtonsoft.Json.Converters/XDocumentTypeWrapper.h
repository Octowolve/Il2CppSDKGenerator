#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Converters {

class XDocumentTypeWrapper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Converters", "XDocumentTypeWrapper"));
	}

	template <typename T = uintptr_t> T& _documentType() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(XDocumentTypeWrapper*))(Il2CppBase() + 0x4095F0C))(this);
	}
	template <typename T = Il2CppString*> T get_System() {
		return ((T (*)(XDocumentTypeWrapper*))(Il2CppBase() + 0x4095F38))(this);
	}
	template <typename T = Il2CppString*> T get_Public() {
		return ((T (*)(XDocumentTypeWrapper*))(Il2CppBase() + 0x4095F64))(this);
	}
	template <typename T = Il2CppString*> T get_InternalSubset() {
		return ((T (*)(XDocumentTypeWrapper*))(Il2CppBase() + 0x4095F90))(this);
	}
	template <typename T = Il2CppString*> T get_LocalName() {
		return ((T (*)(XDocumentTypeWrapper*))(Il2CppBase() + 0x4095FBC))(this);
	}

};

}
