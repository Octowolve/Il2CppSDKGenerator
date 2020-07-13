#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Globalization {

class TextInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Globalization", "TextInfo"));
	}

	template <typename T = Il2CppString*> T& m_listSeparator() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& m_isReadOnly() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& customCultureName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_nDataItem() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_useUserOverride() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_win32LangID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& ci() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& handleDotI() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& data() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(uintptr_t sender) {
		return ((T (*)(TextInfo*, uintptr_t))(Il2CppBase() + 0x3FDD6E0))(this, sender);
	}
	template <typename T = Il2CppString*> T get_ListSeparator() {
		return ((T (*)(TextInfo*))(Il2CppBase() + 0x3FDD6E4))(this);
	}
	template <typename T = Il2CppString*> T get_CultureName() {
		return ((T (*)(TextInfo*))(Il2CppBase() + 0x3FDD698))(this);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(TextInfo*, uintptr_t))(Il2CppBase() + 0x3FDD728))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(TextInfo*))(Il2CppBase() + 0x3FDD800))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(TextInfo*))(Il2CppBase() + 0x3FDD808))(this);
	}
	template <typename T = char> T ToLower(char c) {
		return ((T (*)(TextInfo*, char))(Il2CppBase() + 0x3FDD8F8))(this, c);
	}
	template <typename T = char> T ToUpper(char c) {
		return ((T (*)(TextInfo*, char))(Il2CppBase() + 0x3FDDAE8))(this, c);
	}
	template <typename T = Il2CppString*> T ToLower_1(Il2CppString* str) {
		return ((T (*)(TextInfo*, Il2CppString*))(Il2CppBase() + 0x3FDDD58))(this, str);
	}
	template <typename T = Il2CppString*> T ToUpper_1(Il2CppString* str) {
		return ((T (*)(TextInfo*, Il2CppString*))(Il2CppBase() + 0x3FDDF38))(this, str);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(TextInfo*))(Il2CppBase() + 0x3FDE118))(this);
	}

};

}
