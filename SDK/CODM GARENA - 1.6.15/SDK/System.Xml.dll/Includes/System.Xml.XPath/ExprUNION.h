#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class ExprUNION
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "ExprUNION"));
	}

	template <typename T = uintptr_t> T& left() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& right() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T Optimize() {
		return ((T (*)(ExprUNION*))(Il2CppBase() + 0x4D0B788))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ExprUNION*))(Il2CppBase() + 0x4D0B7E8))(this);
	}
	template <typename T = uintptr_t> T Evaluate(uintptr_t iter) {
		return ((T (*)(ExprUNION*, uintptr_t))(Il2CppBase() + 0x4D0B908))(this, iter);
	}
	template <typename T = bool> T get_Peer() {
		return ((T (*)(ExprUNION*))(Il2CppBase() + 0x4D0BA48))(this);
	}
	template <typename T = bool> T get_Subtree() {
		return ((T (*)(ExprUNION*))(Il2CppBase() + 0x4D0BAAC))(this);
	}

};

}
