#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Linq {

class XNamespace
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.Linq.dll", "System.Xml.Linq", "XNamespace"));
	}

	template <typename T = uintptr_t> static T& blank() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& xml() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& xmlns() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T& nstable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppString*> T& uri() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& table() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> static T get_None() {
		return ((T (*)(void *))(Il2CppBase() + 0x51C3318))(0);
	}
	template <typename T = uintptr_t> static T get_Xmlns() {
		return ((T (*)(void *))(Il2CppBase() + 0x51C3230))(0);
	}
	template <typename T = uintptr_t> static T Get(Il2CppString* uri) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x51C8848))(0, uri);
	}
	template <typename T = uintptr_t> T GetName(Il2CppString* localName) {
		return ((T (*)(XNamespace*, Il2CppString*))(Il2CppBase() + 0x51CA9C0))(this, localName);
	}
	template <typename T = Il2CppString*> T get_NamespaceName() {
		return ((T (*)(XNamespace*))(Il2CppBase() + 0x51C82E4))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(XNamespace*, uintptr_t))(Il2CppBase() + 0x51CAE50))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(XNamespace*))(Il2CppBase() + 0x51CABF4))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(XNamespace*))(Il2CppBase() + 0x51CB05C))(this);
	}
	template <typename T = bool> static T op_Equality(uintptr_t o1, uintptr_t o2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x51C32E0))(0, o1, o2);
	}
	template <typename T = bool> static T op_Inequality(uintptr_t o1, uintptr_t o2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x51CAFB0))(0, o1, o2);
	}
	template <typename T = uintptr_t> static T op_Implicit(Il2CppString* s) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x51CB064))(0, s);
	}

};

}
