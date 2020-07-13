#pragma once
#include <Il2Cpp/Il2Cpp.h>

class XmlAttributeTokenInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "", "XmlAttributeTokenInfo"));
	}

	template <typename T = int32_t> T& ValueTokenStartIndex() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& ValueTokenEndIndex() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& valueCache() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& tmpBuilder() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = Il2CppString*> T get_Value() {
		return ((T (*)(XmlAttributeTokenInfo*))(Il2CppBase() + 0x2A9A32C))(this);
	}
	template <typename T = void> T set_Value(Il2CppString* value) {
		return ((T (*)(XmlAttributeTokenInfo*, Il2CppString*))(Il2CppBase() + 0x2A9A5C0))(this, value);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(XmlAttributeTokenInfo*))(Il2CppBase() + 0x2A9A5C8))(this);
	}
	template <typename T = void> T FillXmlns() {
		return ((T (*)(XmlAttributeTokenInfo*))(Il2CppBase() + 0x2A95550))(this);
	}
	template <typename T = void> T FillNamespace() {
		return ((T (*)(XmlAttributeTokenInfo*))(Il2CppBase() + 0x2A95708))(this);
	}

};

}
