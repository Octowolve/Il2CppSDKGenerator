#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml {

class XmlCharacterData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml", "XmlCharacterData"));
	}

	template <typename T = Il2CppString*> T& data() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppString*> T get_Data() {
		return ((T (*)(XmlCharacterData*))(Il2CppBase() + 0x37C92B0))(this);
	}
	template <typename T = void> T set_Data(Il2CppString* value) {
		return ((T (*)(XmlCharacterData*, Il2CppString*))(Il2CppBase() + 0x37C92B8))(this, value);
	}
	template <typename T = Il2CppString*> T get_InnerText() {
		return ((T (*)(XmlCharacterData*))(Il2CppBase() + 0x37C95D0))(this);
	}
	template <typename T = Il2CppString*> T get_Value() {
		return ((T (*)(XmlCharacterData*))(Il2CppBase() + 0x37C95D8))(this);
	}
	template <typename T = void> T set_Value(Il2CppString* value) {
		return ((T (*)(XmlCharacterData*, Il2CppString*))(Il2CppBase() + 0x37C95E0))(this, value);
	}
	template <typename T = uintptr_t> T get_XPathNodeType() {
		return ((T (*)(XmlCharacterData*))(Il2CppBase() + 0x37C95F0))(this);
	}

};

}
