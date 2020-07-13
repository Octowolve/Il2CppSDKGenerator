#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Linq {

class XDeclaration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.Linq.dll", "System.Xml.Linq", "XDeclaration"));
	}

	template <typename T = Il2CppString*> T& encoding() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& standalone() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& version() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppString*> T get_Encoding() {
		return ((T (*)(XDeclaration*))(Il2CppBase() + 0x51C54C0))(this);
	}
	template <typename T = Il2CppString*> T get_Standalone() {
		return ((T (*)(XDeclaration*))(Il2CppBase() + 0x51C54C8))(this);
	}
	template <typename T = Il2CppString*> T get_Version() {
		return ((T (*)(XDeclaration*))(Il2CppBase() + 0x51C54D0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(XDeclaration*))(Il2CppBase() + 0x51C54D8))(this);
	}

};

}
