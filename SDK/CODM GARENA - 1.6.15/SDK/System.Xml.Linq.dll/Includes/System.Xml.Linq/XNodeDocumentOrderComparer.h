#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Linq {

class XNodeDocumentOrderComparer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.Linq.dll", "System.Xml.Linq", "XNodeDocumentOrderComparer"));
	}


	template <typename T = int32_t> T System_Collections_IComparer_Compare(uintptr_t n1, uintptr_t n2) {
		return ((T (*)(XNodeDocumentOrderComparer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x51CB4BC))(this, n1, n2);
	}
	template <typename T = int32_t> T Compare(uintptr_t n1, uintptr_t n2) {
		return ((T (*)(XNodeDocumentOrderComparer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x51CB568))(this, n1, n2);
	}
	template <typename T = uintptr_t> T CompareCore(uintptr_t n1, uintptr_t n2) {
		return ((T (*)(XNodeDocumentOrderComparer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x51CB6C4))(this, n1, n2);
	}
	template <typename T = uintptr_t> T CompareSibling(uintptr_t n1, uintptr_t n2, uintptr_t forSameValue) {
		return ((T (*)(XNodeDocumentOrderComparer*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x51CB92C))(this, n1, n2, forSameValue);
	}

};

}
