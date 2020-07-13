#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class NodeTypeTest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "NodeTypeTest"));
	}

	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& _param() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(NodeTypeTest*))(Il2CppBase() + 0x4D0D82C))(this);
	}
	template <typename T = Il2CppString*> static T ToString_1(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D0D654))(0, type);
	}
	template <typename T = bool> T Match(uintptr_t nsm, uintptr_t nav) {
		return ((T (*)(NodeTypeTest*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D0DA30))(this, nsm, nav);
	}

};

}
