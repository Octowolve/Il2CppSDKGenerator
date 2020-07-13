#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Linq {

class XName
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.Linq.dll", "System.Xml.Linq", "XName"));
	}

	template <typename T = Il2CppString*> T& local() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& ns() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T System_IEquatableSystem_Xml_Linq_XName_Equals(uintptr_t other) {
		return ((T (*)(XName*, uintptr_t))(Il2CppBase() + 0x51CA61C))(this, other);
	}
	template <typename T = void> T System_Runtime_Serialization_ISerializable_GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(XName*, uintptr_t, uintptr_t))(Il2CppBase() + 0x51CA628))(this, info, context);
	}
	template <typename T = uintptr_t> static T ErrorInvalidExpandedName() {
		return ((T (*)(void *))(Il2CppBase() + 0x51CA718))(0);
	}
	template <typename T = Il2CppString*> T get_LocalName() {
		return ((T (*)(XName*))(Il2CppBase() + 0x51C3310))(this);
	}
	template <typename T = uintptr_t> T get_Namespace() {
		return ((T (*)(XName*))(Il2CppBase() + 0x51C3228))(this);
	}
	template <typename T = Il2CppString*> T get_NamespaceName() {
		return ((T (*)(XName*))(Il2CppBase() + 0x51C82C0))(this);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(XName*, uintptr_t))(Il2CppBase() + 0x51CA7B8))(this, obj);
	}
	template <typename T = uintptr_t> static T Get(Il2CppString* expandedName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x51CA8C8))(0, expandedName);
	}
	template <typename T = void> static T ExpandName(Il2CppString* expandedName, uintptr_t* local, uintptr_t* ns) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x51CA2E0))(0, expandedName, local, ns);
	}
	template <typename T = uintptr_t> static T Get_1(Il2CppString* localName, Il2CppString* namespaceName) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x51CA900))(0, localName, namespaceName);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(XName*))(Il2CppBase() + 0x51CABAC))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(XName*))(Il2CppBase() + 0x51C3C9C))(this);
	}
	template <typename T = bool> static T op_Equality(uintptr_t n1, uintptr_t n2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x51C2D28))(0, n1, n2);
	}
	template <typename T = uintptr_t> static T op_Implicit(Il2CppString* s) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x51CAC20))(0, s);
	}
	template <typename T = bool> static T op_Inequality(uintptr_t n1, uintptr_t n2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x51CA8B4))(0, n1, n2);
	}

};

}
