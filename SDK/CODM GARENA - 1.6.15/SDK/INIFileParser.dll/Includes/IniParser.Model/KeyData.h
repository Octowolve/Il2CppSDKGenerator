#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace IniParser.Model {

class KeyData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("INIFileParser.dll", "IniParser.Model", "KeyData"));
	}

	template <typename T = Il2CppList<Il2CppString*>*> T& _comments() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& _value() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& _keyName() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppList<Il2CppString*>*> T get_Comments() {
		return ((T (*)(KeyData*))(Il2CppBase() + 0x5210FDC))(this);
	}
	template <typename T = void> T set_Comments(Il2CppList<Il2CppString*>* value) {
		return ((T (*)(KeyData*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x5211D04))(this, value);
	}
	template <typename T = Il2CppString*> T get_Value() {
		return ((T (*)(KeyData*))(Il2CppBase() + 0x5210FEC))(this);
	}
	template <typename T = void> T set_Value(Il2CppString* value) {
		return ((T (*)(KeyData*, Il2CppString*))(Il2CppBase() + 0x5211DAC))(this, value);
	}
	template <typename T = Il2CppString*> T get_KeyName() {
		return ((T (*)(KeyData*))(Il2CppBase() + 0x5210FE4))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(KeyData*))(Il2CppBase() + 0x5211DB4))(this);
	}

};

}
