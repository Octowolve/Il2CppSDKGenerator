#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml {

class XmlDeclaration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml", "XmlDeclaration"));
	}

	template <typename T = Il2CppString*> T& encoding() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& standalone() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& version() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map4A() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> T get_Encoding() {
		return ((T (*)(XmlDeclaration*))(Il2CppBase() + 0x37CEB80))(this);
	}
	template <typename T = void> T set_Encoding(Il2CppString* value) {
		return ((T (*)(XmlDeclaration*, Il2CppString*))(Il2CppBase() + 0x37CEB88))(this, value);
	}
	template <typename T = Il2CppString*> T get_InnerText() {
		return ((T (*)(XmlDeclaration*))(Il2CppBase() + 0x37CEC5C))(this);
	}
	template <typename T = Il2CppString*> T get_LocalName() {
		return ((T (*)(XmlDeclaration*))(Il2CppBase() + 0x37CEC6C))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(XmlDeclaration*))(Il2CppBase() + 0x37CECE4))(this);
	}
	template <typename T = uintptr_t> T get_NodeType() {
		return ((T (*)(XmlDeclaration*))(Il2CppBase() + 0x37CED5C))(this);
	}
	template <typename T = Il2CppString*> T get_Standalone() {
		return ((T (*)(XmlDeclaration*))(Il2CppBase() + 0x37CED64))(this);
	}
	template <typename T = void> T set_Standalone(Il2CppString* value) {
		return ((T (*)(XmlDeclaration*, Il2CppString*))(Il2CppBase() + 0x37CED6C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Value() {
		return ((T (*)(XmlDeclaration*))(Il2CppBase() + 0x37CEFDC))(this);
	}
	template <typename T = void> T set_Value(Il2CppString* value) {
		return ((T (*)(XmlDeclaration*, Il2CppString*))(Il2CppBase() + 0x37CF25C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Version() {
		return ((T (*)(XmlDeclaration*))(Il2CppBase() + 0x37CF254))(this);
	}
	template <typename T = uintptr_t> T CloneNode(bool deep) {
		return ((T (*)(XmlDeclaration*, bool))(Il2CppBase() + 0x37CFA2C))(this, deep);
	}
	template <typename T = void> T WriteContentTo(uintptr_t w) {
		return ((T (*)(XmlDeclaration*, uintptr_t))(Il2CppBase() + 0x37CFAF4))(this, w);
	}
	template <typename T = void> T WriteTo(uintptr_t w) {
		return ((T (*)(XmlDeclaration*, uintptr_t))(Il2CppBase() + 0x37CFAF8))(this, w);
	}
	template <typename T = int32_t> T SkipWhitespace(Il2CppString* input, int32_t index) {
		return ((T (*)(XmlDeclaration*, Il2CppString*, int32_t))(Il2CppBase() + 0x37CFC04))(this, input, index);
	}
	template <typename T = void> T ParseInput(Il2CppString* input) {
		return ((T (*)(XmlDeclaration*, Il2CppString*))(Il2CppBase() + 0x37CF260))(this, input);
	}

};

}
