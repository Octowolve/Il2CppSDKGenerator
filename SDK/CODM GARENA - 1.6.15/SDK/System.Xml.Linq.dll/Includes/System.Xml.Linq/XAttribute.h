#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Linq {

class XAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.Linq.dll", "System.Xml.Linq", "XAttribute"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& empty_array() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& name() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& value() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& next() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& previous() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& escapeChars() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T get_IsNamespaceDeclaration() {
		return ((T (*)(XAttribute*))(Il2CppBase() + 0x51C3050))(this);
	}
	template <typename T = uintptr_t> T get_Name() {
		return ((T (*)(XAttribute*))(Il2CppBase() + 0x51C33C8))(this);
	}
	template <typename T = uintptr_t> T get_NextAttribute() {
		return ((T (*)(XAttribute*))(Il2CppBase() + 0x51C33D0))(this);
	}
	template <typename T = void> T set_NextAttribute(uintptr_t value) {
		return ((T (*)(XAttribute*, uintptr_t))(Il2CppBase() + 0x51C33D8))(this, value);
	}
	template <typename T = uintptr_t> T get_NodeType() {
		return ((T (*)(XAttribute*))(Il2CppBase() + 0x51C33E0))(this);
	}
	template <typename T = void> T set_PreviousAttribute(uintptr_t value) {
		return ((T (*)(XAttribute*, uintptr_t))(Il2CppBase() + 0x51C33E8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Value() {
		return ((T (*)(XAttribute*))(Il2CppBase() + 0x51C33F0))(this);
	}
	template <typename T = void> T SetValue(uintptr_t value) {
		return ((T (*)(XAttribute*, uintptr_t))(Il2CppBase() + 0x51C2E90))(this, value);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(XAttribute*))(Il2CppBase() + 0x51C3920))(this);
	}

};

}
