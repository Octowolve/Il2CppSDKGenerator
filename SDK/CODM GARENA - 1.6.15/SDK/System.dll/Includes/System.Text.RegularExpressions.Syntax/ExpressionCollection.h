#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text.RegularExpressions.Syntax {

class ExpressionCollection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Text.RegularExpressions.Syntax", "ExpressionCollection"));
	}


	template <typename T = void> T Add(uintptr_t e) {
		return ((T (*)(ExpressionCollection*, uintptr_t))(Il2CppBase() + 0x4ADFB6C))(this, e);
	}
	template <typename T = uintptr_t> T get_Item(int32_t i) {
		return ((T (*)(ExpressionCollection*, int32_t))(Il2CppBase() + 0x4AE078C))(this, i);
	}
	template <typename T = void> T set_Item(int32_t i, uintptr_t value) {
		return ((T (*)(ExpressionCollection*, int32_t, uintptr_t))(Il2CppBase() + 0x4AE08E4))(this, i, value);
	}
	template <typename T = void> T OnValidate(uintptr_t o) {
		return ((T (*)(ExpressionCollection*, uintptr_t))(Il2CppBase() + 0x4AE3DA8))(this, o);
	}

};

}
