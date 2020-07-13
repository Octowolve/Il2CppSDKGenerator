#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography.X509Certificates {

class X500DistinguishedName
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Security.Cryptography.X509Certificates", "X500DistinguishedName"));
	}

	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppString*> T Decode(uintptr_t flag) {
		return ((T (*)(X500DistinguishedName*, uintptr_t))(Il2CppBase() + 0x3E7C4B4))(this, flag);
	}
	template <typename T = Il2CppString*> static T GetSeparator(uintptr_t flag) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3E7C6A0))(0, flag);
	}
	template <typename T = void> T DecodeRawData() {
		return ((T (*)(X500DistinguishedName*))(Il2CppBase() + 0x3E7C344))(this);
	}
	template <typename T = Il2CppString*> static T Canonize(Il2CppString* s) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3E7C770))(0, s);
	}
	template <typename T = bool> static T AreEqual(uintptr_t name1, uintptr_t name2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E7CA38))(0, name1, name2);
	}

};

}
