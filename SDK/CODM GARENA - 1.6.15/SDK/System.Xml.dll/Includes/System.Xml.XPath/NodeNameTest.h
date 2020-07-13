#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class NodeNameTest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "NodeNameTest"));
	}

	template <typename T = uintptr_t> T& _name() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& resolvedName() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(NodeNameTest*))(Il2CppBase() + 0x4D0CDC0))(this);
	}
	template <typename T = bool> T Match(uintptr_t nsm, uintptr_t nav) {
		return ((T (*)(NodeNameTest*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D0CEE0))(this, nsm, nav);
	}

};

}
