#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Linq {

class XNodeEqualityComparer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.Linq.dll", "System.Xml.Linq", "XNodeEqualityComparer"));
	}


	template <typename T = bool> T System_Collections_IEqualityComparer_Equals(uintptr_t n1, uintptr_t n2) {
		return ((T (*)(XNodeEqualityComparer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x51CB970))(this, n1, n2);
	}
	template <typename T = int32_t> T System_Collections_IEqualityComparer_GetHashCode(uintptr_t node) {
		return ((T (*)(XNodeEqualityComparer*, uintptr_t))(Il2CppBase() + 0x51CCE70))(this, node);
	}
	template <typename T = bool> T Equals(uintptr_t n1, uintptr_t n2) {
		return ((T (*)(XNodeEqualityComparer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x51CBA1C))(this, n1, n2);
	}
	template <typename T = bool> T Equals_1(uintptr_t a1, uintptr_t a2) {
		return ((T (*)(XNodeEqualityComparer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x51CDBA0))(this, a1, a2);
	}
	template <typename T = bool> T Equals_2(uintptr_t d1, uintptr_t d2) {
		return ((T (*)(XNodeEqualityComparer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x51CDA18))(this, d1, d2);
	}
	template <typename T = int32_t> T GetHashCode(uintptr_t d) {
		return ((T (*)(XNodeEqualityComparer*, uintptr_t))(Il2CppBase() + 0x51CDCAC))(this, d);
	}
	template <typename T = int32_t> T GetHashCode_1(uintptr_t node) {
		return ((T (*)(XNodeEqualityComparer*, uintptr_t))(Il2CppBase() + 0x51CCF04))(this, node);
	}

};

}
