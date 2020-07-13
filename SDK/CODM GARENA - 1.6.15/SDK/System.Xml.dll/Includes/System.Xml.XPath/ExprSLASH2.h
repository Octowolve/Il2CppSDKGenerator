#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class ExprSLASH2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "ExprSLASH2"));
	}

	template <typename T = uintptr_t> T& left() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& right() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& DescendantOrSelfStar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T Optimize() {
		return ((T (*)(ExprSLASH2*))(Il2CppBase() + 0x4D0AFBC))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ExprSLASH2*))(Il2CppBase() + 0x4D0B250))(this);
	}
	template <typename T = uintptr_t> T Evaluate(uintptr_t iter) {
		return ((T (*)(ExprSLASH2*, uintptr_t))(Il2CppBase() + 0x4D0B370))(this, iter);
	}
	template <typename T = bool> T get_RequireSorting() {
		return ((T (*)(ExprSLASH2*))(Il2CppBase() + 0x4D0B5FC))(this);
	}
	template <typename T = bool> T get_Peer() {
		return ((T (*)(ExprSLASH2*))(Il2CppBase() + 0x4D0B660))(this);
	}
	template <typename T = bool> T get_Subtree() {
		return ((T (*)(ExprSLASH2*))(Il2CppBase() + 0x4D0B668))(this);
	}

};

}
