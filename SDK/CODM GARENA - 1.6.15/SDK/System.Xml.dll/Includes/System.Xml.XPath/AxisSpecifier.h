#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class AxisSpecifier
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "AxisSpecifier"));
	}

	template <typename T = uintptr_t> T& _axis() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T get_NodeType() {
		return ((T (*)(AxisSpecifier*))(Il2CppBase() + 0x4D01B1C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(AxisSpecifier*))(Il2CppBase() + 0x4D01B38))(this);
	}
	template <typename T = uintptr_t> T get_Axis() {
		return ((T (*)(AxisSpecifier*))(Il2CppBase() + 0x4D01BFC))(this);
	}
	template <typename T = uintptr_t> T Evaluate(uintptr_t iter) {
		return ((T (*)(AxisSpecifier*, uintptr_t))(Il2CppBase() + 0x4D01C04))(this, iter);
	}

};

}
