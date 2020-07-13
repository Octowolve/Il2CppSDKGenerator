#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Converters {

class XAttributeWrapper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Converters", "XAttributeWrapper"));
	}


	template <typename T = uintptr_t> T get_Attribute() {
		return ((T (*)(XAttributeWrapper*))(Il2CppBase() + 0x4094D04))(this);
	}
	template <typename T = Il2CppString*> T get_Value() {
		return ((T (*)(XAttributeWrapper*))(Il2CppBase() + 0x4094E5C))(this);
	}
	template <typename T = Il2CppString*> T get_LocalName() {
		return ((T (*)(XAttributeWrapper*))(Il2CppBase() + 0x4094E88))(this);
	}
	template <typename T = Il2CppString*> T get_NamespaceUri() {
		return ((T (*)(XAttributeWrapper*))(Il2CppBase() + 0x4094EC4))(this);
	}
	template <typename T = uintptr_t> T get_ParentNode() {
		return ((T (*)(XAttributeWrapper*))(Il2CppBase() + 0x4094F00))(this);
	}

};

}
