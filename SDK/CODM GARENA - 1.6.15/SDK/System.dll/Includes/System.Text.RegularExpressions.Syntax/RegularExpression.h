#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text.RegularExpressions.Syntax {

class RegularExpression
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Text.RegularExpressions.Syntax", "RegularExpression"));
	}

	template <typename T = int32_t> T& group_count() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T set_GroupCount(int32_t value) {
		return ((T (*)(RegularExpression*, int32_t))(Il2CppBase() + 0x4AE6E3C))(this, value);
	}
	template <typename T = void> T Compile(uintptr_t cmp, bool reverse) {
		return ((T (*)(RegularExpression*, uintptr_t, bool))(Il2CppBase() + 0x4AE95F0))(this, cmp, reverse);
	}

};

}
