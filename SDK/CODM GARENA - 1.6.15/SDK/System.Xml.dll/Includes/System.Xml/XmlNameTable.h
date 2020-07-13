#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml {

class XmlNameTable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml", "XmlNameTable"));
	}


	template <typename T = Il2CppString*> T Add(Il2CppString* name) {
		return ((T (*)(XmlNameTable*, Il2CppString*))(Il2CppBase() + 0x0))(this, name);
	}
	template <typename T = Il2CppString*> T Add_1(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t length) {
		return ((T (*)(XmlNameTable*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x0))(this, buffer, offset, length);
	}
	template <typename T = Il2CppString*> T Get(Il2CppString* name) {
		return ((T (*)(XmlNameTable*, Il2CppString*))(Il2CppBase() + 0x0))(this, name);
	}

};

}
