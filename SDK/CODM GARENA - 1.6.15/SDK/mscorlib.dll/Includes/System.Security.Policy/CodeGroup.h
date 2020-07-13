#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Policy {

class CodeGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Policy", "CodeGroup"));
	}

	template <typename T = uintptr_t> T& m_policy() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_membershipCondition() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& m_description() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& m_name() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_children() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map2A() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> T get_Description() {
		return ((T (*)(CodeGroup*))(Il2CppBase() + 0x4280044))(this);
	}
	template <typename T = uintptr_t> T get_MembershipCondition() {
		return ((T (*)(CodeGroup*))(Il2CppBase() + 0x428004C))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(CodeGroup*))(Il2CppBase() + 0x4280054))(this);
	}
	template <typename T = uintptr_t> T get_Children() {
		return ((T (*)(CodeGroup*))(Il2CppBase() + 0x428005C))(this);
	}
	template <typename T = bool> T Equals(uintptr_t o) {
		return ((T (*)(CodeGroup*, uintptr_t))(Il2CppBase() + 0x4280064))(this, o);
	}
	template <typename T = bool> T Equals_1(uintptr_t cg, bool compareChildren) {
		return ((T (*)(CodeGroup*, uintptr_t, bool))(Il2CppBase() + 0x4280128))(this, cg, compareChildren);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(CodeGroup*))(Il2CppBase() + 0x4280698))(this);
	}

};

}
