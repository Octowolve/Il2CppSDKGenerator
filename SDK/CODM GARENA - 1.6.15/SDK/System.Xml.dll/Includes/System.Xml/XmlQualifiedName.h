#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml {

class XmlQualifiedName
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml", "XmlQualifiedName"));
	}

	template <typename T = uintptr_t> static T& Empty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& ns() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& hash() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T get_IsEmpty() {
		return ((T (*)(XmlQualifiedName*))(Il2CppBase() + 0x37A0720))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(XmlQualifiedName*))(Il2CppBase() + 0x37B68A0))(this);
	}
	template <typename T = Il2CppString*> T get_Namespace() {
		return ((T (*)(XmlQualifiedName*))(Il2CppBase() + 0x37A1690))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(XmlQualifiedName*, uintptr_t))(Il2CppBase() + 0x37E4E70))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(XmlQualifiedName*))(Il2CppBase() + 0x37E4F60))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(XmlQualifiedName*))(Il2CppBase() + 0x37E4F68))(this);
	}
	template <typename T = uintptr_t> static T Parse(Il2CppString* name, uintptr_t resolver, bool considerDefaultNamespace) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, bool))(Il2CppBase() + 0x37E50B8))(0, name, resolver, considerDefaultNamespace);
	}
	template <typename T = uintptr_t> static T Parse_1(Il2CppString* name, uintptr_t reader) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x37E5328))(0, name, reader);
	}
	template <typename T = bool> static T op_Equality(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3797ABC))(0, a, b);
	}
	template <typename T = bool> static T op_Inequality(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x37A2724))(0, a, b);
	}

};

}
