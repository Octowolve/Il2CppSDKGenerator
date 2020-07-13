#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security {

class SecurityElement
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security", "SecurityElement"));
	}

	template <typename T = Il2CppString*> T& text() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& tag() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& attributes() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& children() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& invalid_tag_chars() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& invalid_text_chars() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& invalid_attr_name_chars() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& invalid_attr_value_chars() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& invalid_chars() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T get_Attributes() {
		return ((T (*)(SecurityElement*))(Il2CppBase() + 0x4283F08))(this);
	}
	template <typename T = uintptr_t> T get_Children() {
		return ((T (*)(SecurityElement*))(Il2CppBase() + 0x4284260))(this);
	}
	template <typename T = Il2CppString*> T get_Tag() {
		return ((T (*)(SecurityElement*))(Il2CppBase() + 0x4284268))(this);
	}
	template <typename T = Il2CppString*> T get_Text() {
		return ((T (*)(SecurityElement*))(Il2CppBase() + 0x4284270))(this);
	}
	template <typename T = void> T set_Text(Il2CppString* value) {
		return ((T (*)(SecurityElement*, Il2CppString*))(Il2CppBase() + 0x4283A40))(this, value);
	}
	template <typename T = void> T AddAttribute(Il2CppString* name, Il2CppString* value) {
		return ((T (*)(SecurityElement*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x427F230))(this, name, value);
	}
	template <typename T = void> T AddChild(uintptr_t child) {
		return ((T (*)(SecurityElement*, uintptr_t))(Il2CppBase() + 0x4281B58))(this, child);
	}
	template <typename T = Il2CppString*> static T Escape(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4284C74))(0, str);
	}
	template <typename T = Il2CppString*> static T Unescape(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4284350))(0, str);
	}
	template <typename T = uintptr_t> static T FromString(Il2CppString* xml) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4285210))(0, xml);
	}
	template <typename T = bool> static T IsValidAttributeName(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x428550C))(0, name);
	}
	template <typename T = bool> static T IsValidAttributeValue(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x42855E4))(0, value);
	}
	template <typename T = bool> static T IsValidTag(Il2CppString* tag) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x428352C))(0, tag);
	}
	template <typename T = bool> static T IsValidText(Il2CppString* text) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4284278))(0, text);
	}
	template <typename T = uintptr_t> T SearchForChildByTag(Il2CppString* tag) {
		return ((T (*)(SecurityElement*, Il2CppString*))(Il2CppBase() + 0x42856BC))(this, tag);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(SecurityElement*))(Il2CppBase() + 0x4281C7C))(this);
	}
	template <typename T = void> T ToXml(uintptr_t s, int32_t level) {
		return ((T (*)(SecurityElement*, uintptr_t, int32_t))(Il2CppBase() + 0x4285948))(this, s, level);
	}
	template <typename T = uintptr_t> T GetAttribute(Il2CppString* name) {
		return ((T (*)(SecurityElement*, Il2CppString*))(Il2CppBase() + 0x4284524))(this, name);
	}

};

}
