#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class NodeTest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "NodeTest"));
	}

	template <typename T = uintptr_t> T& _axis() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T Match(uintptr_t nsm, uintptr_t nav) {
		return ((T (*)(NodeTest*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, nsm, nav);
	}
	template <typename T = uintptr_t> T get_Axis() {
		return ((T (*)(NodeTest*))(Il2CppBase() + 0x4D0B1D0))(this);
	}
	template <typename T = uintptr_t> T Evaluate(uintptr_t iter) {
		return ((T (*)(NodeTest*, uintptr_t))(Il2CppBase() + 0x4D0D330))(this, iter);
	}
	template <typename T = bool> T get_RequireSorting() {
		return ((T (*)(NodeTest*))(Il2CppBase() + 0x4D0D3EC))(this);
	}
	template <typename T = bool> T get_Peer() {
		return ((T (*)(NodeTest*))(Il2CppBase() + 0x4D0D430))(this);
	}
	template <typename T = bool> T get_Subtree() {
		return ((T (*)(NodeTest*))(Il2CppBase() + 0x4D0D474))(this);
	}

};

}
